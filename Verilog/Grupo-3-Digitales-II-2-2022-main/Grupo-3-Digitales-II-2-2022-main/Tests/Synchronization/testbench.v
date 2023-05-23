/*Circuitos Digitales II IE 0523
  Proyecto Final Diseño de un bloque de PCS tipo 1000BASE-X bajo el protocolo IEEE 802.3
  Autor: Jesus Zuñiga Mendez 
  Carné B59084
  Archivo testbench.v
*/

`include "Synchronization.v"
`include "tester.v"

module testbench;
                wire GTX_CLK;
                wire mr_main_reset;
                wire [9:0]rx_code_groupIN;    
                wire [9:0]SUDI;
                wire sync_status;
                wire rxeven;       

    //Señales para el archivo vcd para usarlo con gtkwave
    initial 
        begin
            $dumpfile("SYNC.vcd");
            $dumpvars(-1, testbench) ;
        end

    //se instancia los moduloS
    //MASTERI2C
    Synchronization SYNC (
        .GTX_CLK (GTX_CLK),
        .mr_main_reset (mr_main_reset),
        .rx_code_groupIN (rx_code_groupIN),
        .SUDI (SUDI),
        .sync_status (sync_status),
        .rxeven (rxeven)
    );

    //tester
    tester test (
        .GTX_CLK (GTX_CLK),
        .mr_main_reset (mr_main_reset),
        .rx_code_groupIN (rx_code_groupIN),
        .SUDI (SUDI),
        .sync_status (sync_status),
        .rxeven (rxeven)
    );

endmodule