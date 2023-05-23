`include "transmit.v"
`include "encoder.v"
`include "tester.v"
`include "Synchronization.v"

/*
Módulo de banco de pruebas. En este se instancian los dos módulos creados
(DUT y tester) y se conectan ambos con wires que permitirán un flujo de
datos entre estos.
*/
module testbench;

// Se define wires que conectarán ambos módulos.
wire GTX_CLK, TX_EN, mr_main_reset, xmit;
wire [7:0] TXD;
wire [7:0] tx_o_set;
wire [9:0] tx_code_group;
//wires de synchronization
wire sync_status;
wire rx_even;
wire [9:0]SUDI;


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

endmodule
