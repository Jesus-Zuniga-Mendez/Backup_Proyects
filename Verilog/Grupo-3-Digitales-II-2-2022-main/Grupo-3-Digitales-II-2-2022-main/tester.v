/*Circuitos Digitales II IE 0523
  Proyecto Final Diseño de un bloque de PCS tipo 1000BASE-X bajo el protocolo IEEE 802.3
  Archivo tester.v
  
Módulo de pruebas, en este se indican las variables de entrada del 
módulo (transmit) como salidas y las salidas de este se defiden 
como entradas. 
*/
module Tester (
output reg GTX_CLK, TX_EN, mr_main_reset, 
output reg [7:0] TXD,

input [7:0] tx_o_set,
input RX_CLK, RX_DV,
input [7:0] RXD
);


initial begin
    // Se inicia con el reloj en bajo.
    GTX_CLK = 0;  
    // Se inicia con el reset en bajo.
    mr_main_reset = 0; 
    TX_EN = 1'b0; 
    #12

    // Permite el funcionamiento del módulo.
    mr_main_reset = 1; 
    #32

    // Se envían tres /I/.
    TXD = 8'b10111100; // /K28.5/
    #32
    TXD = 8'b01010000; // /D16.2/
    #32 // /I/
    TXD = 8'b10111100; // /K28.5/
    #32 
    TXD = 8'b01010000; // /D16.2/
    #32 // /I/
    TXD = 8'b10111100; // /K28.5/
    #32
    TXD = 8'b01010000; // /D16.2/
    #32 // /I/

    // Se habilita la entrada de datos (/D/) desde el GMII. 
    TX_EN = 1'b1;
    
    // Se envía un code group de inicio de paquete. 
    TXD = 8'b11111011; // /K27.7/ = /S/
    #32

    // Se envían cinco /D/.
    TXD = 8'b11000101; // /D5.6/
    #32
    TXD = 8'b00000000; // /D0.0/
    #32
    TXD = 8'b11000101; // /D5.6/
    #32
    TXD = 8'b00000111; // /D0.7/
    #32
    TXD = 8'b11000101; // /D5.6/
    #32

    // Se deshabilita la entrada de de datos (/D/) desde el GMII. 
    TX_EN = 1'b0;

    // Se envía un code group de fin de paquete. 
    TXD = 8'b11111101;  // /K29.7/ = /T/
    #32 

    // Se envía un code group de de carrier extend. 
    TXD = 8'b11110111;  // /K23.7/ = /R/
    #32  

    // Se envían tres /I/.
    TXD = 8'b10111100; // /K28.5/
    #32
    TXD = 8'b01010000; // /D16.2/
    #32 // /I/
    TXD = 8'b10111100; // /K28.5/
    #32 
    TXD = 8'b01010000; // /D16.2/
    #32 // /I/
    TXD = 8'b10111100; // /K28.5/
    #32
    TXD = 8'b01010000; // /D16.2/
    #32 // /I/

    // Se habilita la entrada de datos (/D/) desde el GMII. 
    TX_EN = 1'b1;
    
    // Se envía un code group de inicio de paquete. 
    TXD = 8'b11111011; // /K27.7/ = /S/
    #32

    // Se envían cinco /D/.
    TXD = 8'b11000101; // /D5.6/
    #32
    TXD = 8'b00000000; // /D0.0/
    #32
    mr_main_reset = 0; 

    #400 $finish; // Se finaliza la simulación tras 130 unidades de tiempo. 
end
  
// Cada unidad de tiempo el valor del CLK se irá invirtiendo respecto a su valor anterior. 
always begin    
    #4 GTX_CLK = !GTX_CLK;
end
 
endmodule