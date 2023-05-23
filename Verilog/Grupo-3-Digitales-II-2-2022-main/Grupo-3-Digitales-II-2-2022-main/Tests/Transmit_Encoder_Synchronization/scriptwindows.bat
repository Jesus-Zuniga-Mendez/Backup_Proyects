	iverilog -o salida.vvp testbench.v
	vvp salida.vvp
	gtkwave formas_de_onda.vcd