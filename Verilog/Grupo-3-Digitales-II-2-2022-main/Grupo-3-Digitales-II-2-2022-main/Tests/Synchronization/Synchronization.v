/*Circuitos Digitales II IE 0523
  Proyecto Final Diseño de un bloque de PCS tipo 1000BASE-X bajo el protocolo IEEE 802.3
  Autor: Jesus Zuñiga Mendez 
  Carné B59084
  Archivo Synchronization.v
*/
`include "../Constants.v" 
module Synchronization(
                input GTX_CLK,                      //Señal de reloj
                input mr_main_reset,            //Controls the resetting of the Auto-Negotiation function.
                                                //Values: FALSE; Do not reset the Auto-Negotiation function. 
                                                        //TRUE; Reset the Auto-Negotiation functio
                input [9:0]rx_code_groupIN,     //A 10-bit vector represented by the most recently received code-group from the PMA. 
                                                //The element rx_code-group<0> is the least recently received (oldest) rx_bit; 
                                                //rx_code-group<9> is the most recently received rx_bit (newest). 
                                                //When code-group alignment has been achieved, this vector contains precisely one code-group.
                output [9:0]SUDI,               //same that rx_code-groupIN
                output sync_status,              //A parameter set by the PCS Synchronization process to reflect the status of the link 
                                                //as viewed by the receiver. The values of the parameter are defined for code_sync_status. 
                                                //The equation for this parameter is sync_status = code_sync_status + rx_lpi_active
                                                ////Fail = 0   ;    OK = 1
                output rxeven                   //True = 1 = Even    ;    False = 0 =  Odd 
                );

    wire GTX_CLK;
    wire mr_main_reset;
    wire [9:0]rx_code_groupIN;
    reg [9:0]SUDI;
    reg sync_status;            
    reg rxeven = 0;
    reg sgtrxeven = 0;

    //controla la señal de reset y el calculo de proximo estado
    //always @(posedge GTX_CLK)
    always @(rx_code_groupIN)
    begin
        if (mr_main_reset == 1)
            begin
                estado  <= sgtestado;
                rxeven = sgtrxeven;
            end
        else
            begin
                rxeven =0;
                sync_status = 0;
                SUDI = 10'b0000000000;
                sgtrxeven = 0;
                estado = LOSS_OF_SYNC;       
                sgtestado = LOSS_OF_SYNC;
            end            
    end

    //lista de estados para completar los estados definidos por el estandar se definen usando onebithot con un bus de 7 bits 
    parameter LOSS_OF_SYNC  =   7'b0000001;
    parameter COMMA_DETECT_1 =  7'b0000010;
    parameter ACQUIRE_SYNC_1 =  7'b0000100;
    parameter COMMA_DETECT_2 =  7'b0001000;
    parameter ACQUIRE_SYNC_2 =  7'b0010000;
    parameter COMMA_DETECT_3 =  7'b0100000;
    parameter SYNC_ACQUIRED_1 = 7'b1000000;
    reg [6:0] estado = LOSS_OF_SYNC;           //estado de la SM
    reg [6:0] sgtestado = LOSS_OF_SYNC;        //prox estado de la SM
    //calculo de estados
    always @(*)
    begin
        //estado = sgtestado;
        sgtestado = estado;   //Para completar el comportamiento del FF se necesita que por defecto el nxt_state sostenga el valor del estado anterior
        case(estado)
            LOSS_OF_SYNC: if (isCOMMA == 1)//LOSS_OF_SYNC
                                    begin
                                        sgtestado = COMMA_DETECT_1;
                                        sync_status = 0;
                                        SUDI = rx_code_groupIN;
                                        sgtrxeven = 0;
                                    end
                                else if(isCOMMA == 0)
                                    begin
                                        sgtestado = LOSS_OF_SYNC;
                                        sync_status = 0;
                                        SUDI = rx_code_groupIN;
                                        sgtrxeven = 1;
                                    end
            COMMA_DETECT_1: if (isDIddle == 1)//COMMA_DETECT_1
                                    begin
                                        sgtestado = ACQUIRE_SYNC_1;
                                        SUDI = rx_code_groupIN;
                                        sgtrxeven = 1;
                                    end
                                else if(isDIddle == 0)
                                    begin
                                        sgtestado = LOSS_OF_SYNC;
                                        SUDI = rx_code_groupIN;
                                        sgtrxeven = 1;
                                    end
            ACQUIRE_SYNC_1: if (isCOMMA == 1)//ACQUIRE_SYNC_1
                                    begin
                                        sgtestado = COMMA_DETECT_2;
                                        SUDI = rx_code_groupIN;
                                        sgtrxeven = 0;
                                    end
                                else if ((isCOMMA == 0) && (isDIddle == 0))
                                    begin
                                        sgtestado = ACQUIRE_SYNC_1;
                                        SUDI = rx_code_groupIN;
                                        sgtrxeven = 1;
                                    end
                                else if ((isCOMMA == 0) || (isDIddle == 0))
                                    begin
                                        sgtestado = LOSS_OF_SYNC;
                                        SUDI = rx_code_groupIN;
                                        sgtrxeven = 1;
                                    end
            COMMA_DETECT_2: if (isDIddle == 1)//COMMA_DETECT_2
                                    begin
                                        sgtestado = ACQUIRE_SYNC_2;
                                        SUDI = rx_code_groupIN;
                                        sgtrxeven = 1;
                                    end
                                else if (isDIddle == 0)
                                    begin
                                        sgtestado = LOSS_OF_SYNC;
                                        SUDI = rx_code_groupIN;
                                        sgtrxeven = 1;
                                    end
            ACQUIRE_SYNC_2: if (isCOMMA == 1)//ACQUIRE_SYNC_2
                                    begin
                                        sgtestado = COMMA_DETECT_3;
                                        SUDI = rx_code_groupIN;
                                        sgtrxeven = 0;
                                    end
                                else if ((isCOMMA == 0) && (isDIddle == 0))  
                                    begin
                                        sgtestado = ACQUIRE_SYNC_2;
                                        SUDI = rx_code_groupIN;  
                                        sgtrxeven = 0;                                        
                                    end
                                else if ((isCOMMA == 0) || (isDIddle == 0))
                                    begin
                                        sgtestado = LOSS_OF_SYNC    ;
                                        SUDI = rx_code_groupIN;                                    
                                        sgtrxeven = 0;
                                    end
            COMMA_DETECT_3: if (isDIddle == 1)//COMMA_DETECT_3
                                    begin
                                        sgtestado = SYNC_ACQUIRED_1;
                                        SUDI = rx_code_groupIN;
                                        sgtrxeven = 1;
                                    end
                                else if (isDIddle == 0)
                                    begin
                                        sgtestado = LOSS_OF_SYNC;
                                        SUDI = rx_code_groupIN;                                          
                                        sgtrxeven = 0;
                                    end
            SYNC_ACQUIRED_1: if ((isDIddle == 1) || (isCOMMA == 1) || (isDValid == 1))//SYNC_ACQUIRED_1
                                    begin
                                        sgtestado = SYNC_ACQUIRED_1;
                                        sync_status = 1;
                                        SUDI = rx_code_groupIN;
                                        sgtrxeven = !rxeven;
                                    end
                                else if((isDIddle == 0) && (isCOMMA == 0) && (isDValid == 0))
                                    begin
                                        sgtestado = LOSS_OF_SYNC;
                                        SUDI = rx_code_groupIN;
                                        sync_status = 0;
                                        sgtrxeven = 0;
                                    end
            default:   sgtestado = LOSS_OF_SYNC; // Si la maquina entrara en un estado inesperado, regrese al inicio.
        endcase
    end

        //codigo que permite determinar el tipo de caracter que se esta recibiendo 
        reg isCOMMA = 0;    //flag, 0 si no es comma 1 si si lo es
        reg [6:0]currentCodeComma;  
        reg isDIddle = 0;        //flag, 0 si no es D, 1 si es D
        reg isDValid = 0;
        always @(*)   
        begin
            //levanta la señal de isCOMMA si detecta que se recibio una comma en caso contrario la pone en cero
            currentCodeComma = rx_code_groupIN[9:3];
            case(currentCodeComma)
                //`define K28_5_10 10'b0011111010
                7'b0011111: isCOMMA = 1;
                7'b1100000: isCOMMA = 1;
                default: isCOMMA=0;
            endcase

            //levanta la señal de isDIddle si detecta que se recibio una caracter correcto esperado
            case(rx_code_groupIN)
                `D5_6_10: isDIddle = 1;
                `D16_2_10: isDIddle = 1;
                default: isDIddle=0;
            endcase

            case(rx_code_groupIN)
                `D0_0_10: isDValid = 1; 
                `D1_0_10: isDValid = 1; 
                `D2_0_10: isDValid = 1; 
                `D3_0_10: isDValid = 1;  
                `D4_0_10: isDValid = 1; 
                `D5_0_10: isDValid = 1; 
                `D6_0_10: isDValid = 1; 
                `D7_0_10: isDValid = 1;
                `K23_7_10: isDValid = 1;
                `K27_7_10: isDValid = 1;
                `K29_7_10: isDValid = 1;
                default: isDValid=0;
            endcase
        end
 /*
// Code groups de 10 bits, paridad negativa
D0.0    00  0 0 0  0 0 0 0 0    1001110100     0110001011          
D1.0    01  0 0 0  0 0 0 0 1    0111010100     1000101011    
D2.0    02  0 0 0  0 0 0 1 0    1011010100     0100101011    
D3.0    03  0 0 0  0 0 0 1 1    1100011011     1100010100    
D4.0    04  0 0 0  0 0 1 0 0    1101010100     0010101011    
D5.0    05  0 0 0  0 0 1 0 1    1010011011     1010010100    
D6.0    06  0 0 0  0 0 1 1 0    0110011011     0110010100    
D7.0    07  0 0 0  0 0 1 1 1    1110001011     0001110100       
D5.6    C5  1 1 0  0 0 1 0 1    1010010110     1010010110//este
D16.2   50  0 1 0  1 0 0 0 0    0110110101     1001000101//este
K28.5   BC  1 0 1  1 1 1 0 0    0011111010     1100000101
//        GTX_CLKDIVIDER divisor (.GTX_CLK(GTX_CLK), .COD(CTRLRELOJ), .GTX_CLKDIV(resultado));
//                10'b0110001011: isDValid = 1;
                10'b1000101011: isDValid = 1;
                10'b0100101011: isDValid = 1;
                10'b1100010100: isDValid = 1;
                10'b0010101011: isDValid = 1;
                10'b1010010100: isDValid = 1;
                10'b0110010100: isDValid = 1;
                10'b0001110100: isDValid = 1;*/
                //10'b1010010110: isDIddle = 1;//
                //10'b1001000101: isDIddle = 1;//
endmodule
