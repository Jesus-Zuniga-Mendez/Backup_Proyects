`include "transmit.v"
`include "tester.v"

/*
Módulo de banco de pruebas. En este se instancian los dos módulos creados
(DUT y tester) y se conectan ambos con wires que permitirán un flujo de 
datos entre estos. 
*/
module transmit_tb; 

// Se define wires que conectarán ambos módulos. 
wire GTX_CLK, TX_EN, mr_main_reset, xmit;
wire [7:0] TXD; 
wire [7:0] tx_o_set; 

// Crea un archivo para el despliege de ondas en gtkwave.
initial begin
    $dumpfile("formas_de_onda.vcd"); 
    $dumpvars(-1, transmit_tb); 
end

/*
Se crean las instancias del DUT y del tester y se les pasan como parámetros
los wires. Como puede verse, las nombres utilizados son lso mismos, esto indica
que está conectados entre sí. 
*/
transmit U0 (
.GTX_CLK(GTX_CLK), 
.TX_EN(TX_EN), 
.mr_main_reset(mr_main_reset), 
.xmit(xmit),
.TXD(TXD),
.tx_o_set(tx_o_set)
);

transmit_t P0 (
.GTX_CLK(GTX_CLK), 
.TX_EN(TX_EN), 
.mr_main_reset(mr_main_reset), 
.xmit(xmit),
.TXD(TXD),
.tx_o_set(tx_o_set)
);

endmodule