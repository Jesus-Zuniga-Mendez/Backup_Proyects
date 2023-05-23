/*Circuitos Digitales II IE 0523
  Proyecto Final Diseño de un bloque de PCS tipo 1000BASE-X bajo el protocolo IEEE 802.3
  Autor: Jesus Zuñiga Mendez 
  Carné B59084
  Archivo synchronization.v
*/
`include "./constants.v" 

module Synchronization(
                input GTX_CLK,                  //Señal de reloj
                input mr_main_reset,            //Controls the resetting of the Auto-Negotiation function.
                                                //Values: FALSE; Do not reset the Auto-Negotiation function. 
                                                //TRUE; Reset the Auto-Negotiation function
                input [9:0]rx_code_group,       //A 10-bit vector represented by the most recently received code-group from the PMA. 
                                                //The element rx_code-group<0> is the least recently received (oldest) rx_bit; 
                                                //rx_code-group<9> is the most recently received rx_bit (newest). 
                                                //When code-group alignment has been achieved, this vector contains precisely one code-group.
                output [9:0]SUDI,               //same that rx_code-groupIN
                output sync_status,             //A parameter set by the PCS Synchronization process to reflect the status of the link 
                                                //as viewed by the receiver. The values of the parameter are defined for code_sync_status. 
                                                //The equation for this parameter is sync_status = code_sync_status + rx_lpi_active
                                                ////Fail = 0   ;    OK = 1
                output rx_even                  //True = 1 = Even    ;    False = 0 =  Odd 
                );

    wire GTX_CLK;
    wire mr_main_reset;
    wire [9:0]rx_code_group;

    reg [9:0]SUDI;
    reg sync_status;  
    reg [6:0] state = LOSS_OF_SYNC;           //state de la SM
    reg [6:0] nxt_state = LOSS_OF_SYNC;        //prox state de la SM       
    reg rx_even = 0;
    reg nxt_rx_even = 0;

    //lista de states para completar los states definidos por el estandar se definen usando onebithot con un bus de 7 bits 
    parameter LOSS_OF_SYNC  =   7'b0000001;
    parameter COMMA_DETECT_1 =  7'b0000010;
    parameter ACQUIRE_SYNC_1 =  7'b0000100;
    parameter COMMA_DETECT_2 =  7'b0001000;
    parameter ACQUIRE_SYNC_2 =  7'b0010000;
    parameter COMMA_DETECT_3 =  7'b0100000;
    parameter SYNC_ACQUIRED_1 = 7'b1000000;

    //controla la señal de reset y el calculo de proximo state
    //always @(posedge GTX_CLK)
    always @(rx_code_group)
    begin
        if (mr_main_reset == 1)
            begin
                state  <= nxt_state;
                rx_even <= nxt_rx_even;
            end
        else
            begin
                rx_even = 0;
                sync_status = 0;
                SUDI = 10'b0000000000;
                nxt_rx_even = 0;
                state = LOSS_OF_SYNC;       
                nxt_state = LOSS_OF_SYNC;
            end            
    end
    
    //calculo de states
    always @(*)
    begin
        //state = nxt_state;
        nxt_state = state;   //Para completar el comportamiento del FF se necesita que por defecto el nxt_state sostenga el valor del state anterior
        case(state)
            LOSS_OF_SYNC: if (isCOMMA == 1)//LOSS_OF_SYNC
                                    begin
                                        nxt_state = COMMA_DETECT_1;
                                        sync_status = 0;
                                        SUDI = rx_code_group;
                                        nxt_rx_even = 0;
                                    end
                                else if(isCOMMA == 0)
                                    begin
                                        nxt_state = LOSS_OF_SYNC;
                                        sync_status = 0;
                                        SUDI = rx_code_group;
                                        nxt_rx_even = 1;
                                    end

            COMMA_DETECT_1: if (isDIddle == 1)//COMMA_DETECT_1
                                    begin
                                        nxt_state = ACQUIRE_SYNC_1;
                                        SUDI = rx_code_group;
                                        nxt_rx_even = 1;
                                    end
                                else if(isDIddle == 0)
                                    begin
                                        nxt_state = LOSS_OF_SYNC;
                                        SUDI = rx_code_group;
                                        nxt_rx_even = 1;
                                    end

            ACQUIRE_SYNC_1: if (isCOMMA == 1)//ACQUIRE_SYNC_1
                                    begin
                                        nxt_state = COMMA_DETECT_2;
                                        SUDI = rx_code_group;
                                        nxt_rx_even = 0;
                                    end
                                else if ((isCOMMA == 0) && (isDIddle == 0))
                                    begin
                                        nxt_state = ACQUIRE_SYNC_1;
                                        SUDI = rx_code_group;
                                        nxt_rx_even = 1;
                                    end
                                else if ((isCOMMA == 0) || (isDIddle == 0))
                                    begin
                                        nxt_state = LOSS_OF_SYNC;
                                        SUDI = rx_code_group;
                                        nxt_rx_even = 1;
                                    end

            COMMA_DETECT_2: if (isDIddle == 1)//COMMA_DETECT_2
                                    begin
                                        nxt_state = ACQUIRE_SYNC_2;
                                        SUDI = rx_code_group;
                                        nxt_rx_even = 1;
                                    end
                                else if (isDIddle == 0)
                                    begin
                                        nxt_state = LOSS_OF_SYNC;
                                        SUDI = rx_code_group;
                                        nxt_rx_even = 1;
                                    end

            ACQUIRE_SYNC_2: if (isCOMMA == 1)//ACQUIRE_SYNC_2
                                    begin
                                        nxt_state = COMMA_DETECT_3;
                                        SUDI = rx_code_group;
                                        nxt_rx_even = 0;
                                    end
                                else if ((isCOMMA == 0) && (isDIddle == 0))  
                                    begin
                                        nxt_state = ACQUIRE_SYNC_2;
                                        SUDI = rx_code_group;  
                                        nxt_rx_even = 0;                                        
                                    end
                                else if ((isCOMMA == 0) || (isDIddle == 0))
                                    begin
                                        nxt_state = LOSS_OF_SYNC    ;
                                        SUDI = rx_code_group;                                    
                                        nxt_rx_even = 0;
                                    end

            COMMA_DETECT_3: if (isDIddle == 1)//COMMA_DETECT_3
                                    begin
                                        nxt_state = SYNC_ACQUIRED_1;
                                        SUDI = rx_code_group;
                                        nxt_rx_even = 1;
                                    end
                                else if (isDIddle == 0)
                                    begin
                                        nxt_state = LOSS_OF_SYNC;
                                        SUDI = rx_code_group;                                          
                                        nxt_rx_even = 0;
                                    end

            SYNC_ACQUIRED_1: if ((isDIddle == 1) || (isCOMMA == 1) || (isDValid == 1))//SYNC_ACQUIRED_1
                                    begin
                                        nxt_state = SYNC_ACQUIRED_1;
                                        sync_status = 1;
                                        SUDI = rx_code_group;
                                        nxt_rx_even = !rx_even;
                                    end
                                else if((isDIddle == 0) && (isCOMMA == 0) && (isDValid == 0))
                                    begin
                                        nxt_state = LOSS_OF_SYNC;
                                        SUDI = rx_code_group;
                                        sync_status = 0;
                                        nxt_rx_even = 0;
                                    end

            default:   nxt_state = LOSS_OF_SYNC; // Si la maquina entrara en un state inesperado, regrese al inicio.
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
            currentCodeComma = rx_code_group[9:3];
            case(currentCodeComma)
                //`define K28_5_10 10'b0011111010
                7'b0011111: isCOMMA = 1;
                7'b1100000: isCOMMA = 1;
                default: isCOMMA=0;
            endcase

            //levanta la señal de isDIddle si detecta que se recibio una caracter correcto esperado
            case(rx_code_group)
                `D5_6_10: isDIddle = 1;
                `D16_2_10: isDIddle = 1;
                default: isDIddle=0;
            endcase

            case(rx_code_group)
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
        
endmodule
