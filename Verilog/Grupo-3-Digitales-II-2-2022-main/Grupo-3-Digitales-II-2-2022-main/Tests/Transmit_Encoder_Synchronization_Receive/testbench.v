`include "transmit.v"
`include "encoder.v"
`include "tester.v"
`include "Synchronization.v"
`include "receive.v"

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
wire [9:0]SUDI;
//wires de synchronization
wire sync_status;
//wires de receive
wire RX_CLK, RX_DV;
wire [7:0]  RXD;
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
transmit U0 (
    .GTX_CLK(GTX_CLK),
    .TX_EN(TX_EN),
    .mr_main_reset(mr_main_reset),
    .xmit(xmit),
    .TXD(TXD),
    .tx_o_set(tx_o_set)
);

encoder U1 (
    .GTX_CLK(GTX_CLK),
    .mr_main_reset(mr_main_reset),
    .tx_o_set(tx_o_set),
    .tx_code_group(tx_code_group)
);

transmit_t P0 (
    .GTX_CLK(GTX_CLK),
    .TX_EN(TX_EN),
    .mr_main_reset(mr_main_reset),
    .xmit(xmit),
    .TXD(TXD),
    .tx_o_set(tx_o_set)
);

Synchronization SYNC (
    .GTX_CLK(GTX_CLK),
    .mr_main_reset(mr_main_reset),
    .rx_code_group(tx_code_group),
    .SUDI(SUDI),
    .sync_status(sync_status),
    .rx_even(rx_even)
);

receive receive (
    .GTX_CLK (GTX_CLK),
    .mr_main_reset (mr_main_reset),
    .SUDI (SUDI),
    .rx_even (rx_even),
    .RXD (RXD),
    .RX_CLK (RX_CLK),
    .RX_DV (RX_DV),
    .xmit (xmit)
);

endmodule
