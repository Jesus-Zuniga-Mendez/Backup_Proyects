/*Circuitos Digitales II IE 0523
  Proyecto Final Diseño de un bloque de PCS tipo 1000BASE-X bajo el protocolo IEEE 802.3
  Autor: Alexander Rojas Brenes 
  Carné B86869
  Archivo encoder.v
*/
`include "./constants.v" 

module Encoder (
  GTX_CLK, 
  mr_main_reset, 
  tx_o_set, 
  tx_code_group
); 

// Entradas.
input GTX_CLK, mr_main_reset; 
input [7:0] tx_o_set; 

// Salidas.
output reg [9:0] tx_code_group;

// Registros internos para el manejo de estados. 
reg [7:0] state;
reg [7:0] nxt_state;   
    
// Estados con convención one-hot: 
parameter GENERATE_CODE_GROUPS = 5'b00001;
parameter SPECIAL_GO = 5'b00010;
parameter DATA_GO = 5'b00100;
parameter IDLE_DISPARITY_OK = 5'b01000;
parameter IDLE_I2B = 5'b10000;

// Definición de Flip-flops.
always @(posedge GTX_CLK)  
begin
  if (~mr_main_reset) // Si RESET = 0, inicializa variables. 
  begin
    state <= GENERATE_CODE_GROUPS; 
  end
  else // Si el RESET está en 1, trasmite estados. 
  begin
    state <= nxt_state;
  end
end 
    
// Descripción de las transiciones de estados. 
always @(*) begin
  nxt_state = state;
  
  case (state)
    GENERATE_CODE_GROUPS: // 1 
      begin
        // Se verifica si se trara de un /S/ + /T/ + /R/
        if (tx_o_set == `K23_7_8 || 
            tx_o_set == `K27_7_8 || 
            tx_o_set == `K29_7_8)
        begin
          nxt_state = SPECIAL_GO; // Si se cumple con alguno de estos valores, se pa al siguiente estado. 
        end

        // Se verifica si se trata de una /D/
        if (tx_o_set == `D0_0_8 || 
            tx_o_set == `D1_0_8 || 
            tx_o_set == `D2_0_8 || 
            tx_o_set == `D3_0_8 || 
            tx_o_set == `D4_0_8 || 
            tx_o_set == `D5_0_8 || 
            tx_o_set == `D6_0_8 || 
            tx_o_set == `D7_0_8 || 
            tx_o_set == `D5_6_8)
        begin
          nxt_state = DATA_GO; // Si se cumple con alguno de estos valores, se pa al siguiente estado. 
        end

        // Se verifica si se trara de un /I/
        if (tx_o_set == `K28_5_8)
        begin
          nxt_state = IDLE_DISPARITY_OK; // Si se cumple con alguno de estos valores, se pa al siguiente estado. 
        end        
      end 
      
    SPECIAL_GO: // 2
      begin // Codificación de codegroups de control 
        if (tx_o_set == `K23_7_8) // Se verifica si es un /R/
        begin
          tx_code_group =  `K23_7_10; 
          nxt_state = GENERATE_CODE_GROUPS;
        end

        else if (tx_o_set == `K27_7_8) // Se verifica si es un /S/
        begin
          tx_code_group = `K27_7_10; 
          nxt_state = GENERATE_CODE_GROUPS;
        end

        else if (tx_o_set == `K29_7_8) // Se verifica si es un /T/
        begin
          tx_code_group = `K29_7_10; 
          nxt_state = GENERATE_CODE_GROUPS;    
        end
      end

    DATA_GO: // 4
      begin // Codificación de codegroups de dato
        if (tx_o_set == `D0_0_8)
        begin
          tx_code_group = `D0_0_10; 
          nxt_state = GENERATE_CODE_GROUPS; // Se vuelve al estado de verificación de codegroup. 
        end

        else if (tx_o_set == `D1_0_8)
        begin
          tx_code_group = `D1_0_10; 
          nxt_state = GENERATE_CODE_GROUPS;
        end

        else if (tx_o_set == `D2_0_8)
        begin
          tx_code_group = `D2_0_10; 
          nxt_state = GENERATE_CODE_GROUPS;    
        end

        else if (tx_o_set == `D3_0_8)
        begin
          tx_code_group = `D3_0_10; 
          nxt_state = GENERATE_CODE_GROUPS;            
        end

        else if (tx_o_set == `D4_0_8)
        begin
          tx_code_group = `D4_0_10; 
          nxt_state = GENERATE_CODE_GROUPS;            
        end

        else if (tx_o_set == `D5_0_8)
        begin
          tx_code_group = `D5_0_10; 
          nxt_state = GENERATE_CODE_GROUPS;            
        end

        else if (tx_o_set == `D6_0_8)
        begin
          tx_code_group = `D6_0_10; 
          nxt_state = GENERATE_CODE_GROUPS;            
        end

        else if (tx_o_set == `D7_0_8)
        begin
          tx_code_group = `D7_0_10; 
          nxt_state = GENERATE_CODE_GROUPS;            
        end

        else if (tx_o_set == `D5_6_8)
        begin
          tx_code_group = `D5_6_10; 
          nxt_state = GENERATE_CODE_GROUPS;            
        end

        else if (tx_o_set == `D16_2_8)
        begin
          tx_code_group = `D16_2_10; 
          nxt_state = GENERATE_CODE_GROUPS;
        end
      end

    IDLE_DISPARITY_OK: // 8
      begin  // Codificación de codegroups de IDLE
        tx_code_group = `K28_5_10; 
        nxt_state = IDLE_I2B; // Se pasa al siguiente estado para procesar la segunda parte del IDLE. 
      end

    IDLE_I2B: // 16
      begin 
        if (tx_o_set == `D16_2_8)
        begin
          tx_code_group = `D16_2_10;
          nxt_state = GENERATE_CODE_GROUPS;  // Se vuelve al estado de verificación de codegroup.
        end      
      end 
  endcase
end

endmodule