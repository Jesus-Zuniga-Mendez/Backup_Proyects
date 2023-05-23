/*Circuitos Digitales II IE 0523
  Proyecto Final Diseño de un bloque de PCS tipo 1000BASE-X bajo el protocolo IEEE 802.3
  Archivo pcs.v
*/
`include "transmit.v"
`include "encoder.v"
`include "synchronization.v"
`include "receive.v"

// Módulo wrapper, empaqueta todos los submódulos del PCS.
module PCS(
        input GTX_CLK,
        input TX_EN, 
        input mr_main_reset,
        input [7:0] TXD,
        output [9:0] tx_code_group,

        output RX_CLK, 
        output RX_DV,
        output [7:0] RXD   
);

// Se define wires que conectarán los módulos.
wire GTX_CLK, TX_EN, mr_main_reset, rx_even;
wire xmit = 1'b1;
wire [7:0] TXD;
wire [7:0] tx_o_set;
wire [9:0] tx_code_group;
wire [9:0] SUDI;

// Wires de Synchronization.
wire sync_status;

// Wires de Receive
wire RX_CLK, RX_DV;
wire [7:0] RXD;

/*
Se crean las instancias del Transmit, Encoder, Sync y Receive. 
Además, se hacen las conexiones necesarias para asegurara el 
funcionamiento del módulo general.   
*/
Transmit Transmit (
    .GTX_CLK(GTX_CLK),
    .TX_EN(TX_EN),
    .mr_main_reset(mr_main_reset),
    .xmit(xmit),
    .TXD(TXD),
    .tx_o_set(tx_o_set)
);

Encoder Encoder (
    .GTX_CLK(GTX_CLK),
    .mr_main_reset(mr_main_reset),
    .tx_o_set(tx_o_set),
    .tx_code_group(tx_code_group)
);

Synchronization Synchronization (
    .GTX_CLK(GTX_CLK),
    .mr_main_reset(mr_main_reset),
    .rx_code_group(tx_code_group),
    .SUDI(SUDI),
    .sync_status(sync_status),
    .rx_even(rx_even)
);

Receive Receive (
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
