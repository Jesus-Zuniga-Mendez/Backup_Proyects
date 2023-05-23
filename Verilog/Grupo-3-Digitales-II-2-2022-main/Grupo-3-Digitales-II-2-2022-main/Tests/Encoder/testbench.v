`include "encoder.v"
`include "tester.v"

/*
Módulo de banco de pruebas. En este se instancian los dos módulos creados
(DUT y tester) y se conectan ambos con wires que permitirán un flujo de 
datos entre estos. 
*/
module encoder_tb; 

// Se define wires que conectarán ambos módulos. 
wire GTX_CLK, mr_main_reset; 
wire [7:0] tx_o_set; 
wire [9:0] tx_code_group;

// Crea un archivo para el despliege de ondas en gtkwave.
initial begin
    $dumpfile("formas_de_onda.vcd"); 
    $dumpvars(-1, encoder_tb); 
end

/*
Se crean las instancias del DUT y del tester y se les pasan como parámetros
los wires. Como puede verse, las nombres utilizados son lso mismos, esto indica
que está conectados entre sí. 
*/
encoder U0 (
.GTX_CLK(GTX_CLK), 
.mr_main_reset(mr_main_reset), 
.tx_o_set(tx_o_set), 
.tx_code_group(tx_code_group)
);

encoder_t P0 (
.GTX_CLK(GTX_CLK), 
.mr_main_reset(mr_main_reset), 
.tx_o_set(tx_o_set), 
.tx_code_group(tx_code_group)
);

endmodule