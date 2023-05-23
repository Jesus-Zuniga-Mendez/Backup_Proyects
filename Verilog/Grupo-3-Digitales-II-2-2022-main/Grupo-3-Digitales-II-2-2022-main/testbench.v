/*Circuitos Digitales II IE 0523
  Proyecto Final Diseño de un bloque de PCS tipo 1000BASE-X bajo el protocolo IEEE 802.3
  Archivo testbench.v
*/
`include "pcs.v"
`include "tester.v"

/*
Módulo de banco de pruebas. En este se instancian los dos módulos creados
(DUT y tester) y se conectan ambos con wires que permitirán un flujo de
datos entre estos.
*/
module testbench;

// Se define wires que conectarán los módulos.
wire GTX_CLK, TX_EN, mr_main_reset, xmit, rx_even;
wire [7:0] TXD;
wire [7:0] tx_o_set;
wire [9:0] tx_code_group;
wire [9:0] SUDI;

//wires de synchronization
wire sync_status;

//wires de receive
wire RX_CLK, RX_DV;
wire [7:0] RXD;

// Crea un archivo para el despliege de ondas en gtkwave.
initial begin
    $dumpfile("formas_de_onda.vcd");
    $dumpvars(-1, testbench);
end

/*
Se crean las instancias del DUT y del tester y se les pasan como parámetros
los wires. Como puede verse, las nombres utilizados son lso mismos, esto indica
que está conectados entre sí.
*/
Tester Tester (
    .GTX_CLK(GTX_CLK),
    .TX_EN(TX_EN),
    .mr_main_reset(mr_main_reset),
    .TXD(TXD)
);

PCS PCS(
    .GTX_CLK(GTX_CLK),
    .TX_EN(TX_EN), 
    .mr_main_reset(mr_main_reset),
    .TXD(TXD),
    .tx_code_group(tx_code_group),
    .RX_CLK(RX_CLK), 
    .RX_DV(RX_DV),
    .RXD(RXD)
);

endmodule
