/*Circuitos Digitales II IE 0523
  Proyecto Final Diseño de un bloque de PCS tipo 1000BASE-X bajo el protocolo IEEE 802.3
  Archivo constantes.v
*/
// Code groups de 10 bits, paridad negativa
`define D0_0_10  10'b1001110100
`define D1_0_10  10'b0111010100
`define D2_0_10  10'b1011010100
`define D3_0_10  10'b1100011011
`define D4_0_10  10'b1101010100
`define D5_0_10  10'b1010011011
`define D6_0_10  10'b0110011011
`define D7_0_10  10'b1110001011
`define D5_6_10  10'b1010010110
`define D16_2_10 10'b0110110101
`define K23_7_10 10'b1110101000
`define K27_7_10 10'b1101101000
`define K28_5_10 10'b0011111010
`define K29_7_10 10'b1011101000


// Code groups de 8 bits
`define D0_0_8   8'h00
`define D1_0_8   8'h01
`define D2_0_8   8'h02
`define D3_0_8   8'h03
`define D4_0_8   8'h04
`define D5_0_8   8'h05
`define D6_0_8   8'h06
`define D7_0_8   8'h07
`define D5_6_8   8'hc5
`define D16_2_8  8'h50
`define K23_7_8  8'hf7
`define K27_7_8  8'hfb
`define K28_5_8  8'hbc
`define K29_7_8  8'hfd
