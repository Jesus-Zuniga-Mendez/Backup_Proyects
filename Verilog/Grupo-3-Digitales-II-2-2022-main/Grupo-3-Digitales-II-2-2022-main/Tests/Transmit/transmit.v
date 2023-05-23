module transmit (
  GTX_CLK, 
  mr_main_reset, 
  TXD, 
  TX_EN, 
  xmit, 
  tx_o_set
); 

// Entradas.
input GTX_CLK, TX_EN, mr_main_reset, xmit;
input [7:0] TXD; 

// Salidas.
output reg [7:0] tx_o_set; 

// Registros internos para el manejo de estados. 
reg [7:0] state;
reg [7:0] nxt_state;   

// Estados con convención one-hot: 
parameter TX_TEST_XMIT = 8'b00000001;
parameter IDLE = 8'b00000010;
parameter XMIT_DATA = 8'b00000100;
parameter START_OF_PACKET = 8'b00001000;
parameter TX_PACKET = 8'b00010000;
parameter TX_DATA = 8'b00100000;
parameter END_OF_PACKET_NOEXT = 8'b01000000;
parameter EPD2_NOEXT = 8'b10000000;

// Definición de Flip-flops.
always @(posedge GTX_CLK)  
begin
  if (~mr_main_reset) // Si RESET = 0, inicializa variables. 
  begin
    state <= TX_TEST_XMIT; 
    tx_o_set <= 8'b0000000;
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
    TX_TEST_XMIT: // 1 
      begin
        if (xmit == 1'b1 && TX_EN == 1'b1)
        begin
          nxt_state = IDLE;
        end
        else if (xmit == 1'b1 && TX_EN == 1'b0) // Si ambas condiciones se cumplen se pasa al siguiente estado. 
        begin
          nxt_state = XMIT_DATA;
        end
        else 
        begin
          nxt_state = TX_TEST_XMIT; // Si nimguna de las condiciones anteriores se cumple, se mantiene en este estado. 
        end
      end 
      
    IDLE: // 2
      begin
        tx_o_set = TXD; // tx_o_set = /I/
        if (xmit == 1'b1 && TX_EN == 1'b0) // Si ambas condiciones se cumplen se pasa al siguiente estado. 
        begin
          nxt_state = XMIT_DATA; // Vuelve a sí mismo. 
        end
      end

    XMIT_DATA: // 4
      begin
        if (TX_EN == 1'b1) // En el momento en el que que el GMII levanta TX_EN, se pasa al siguiente estado.
        begin
          nxt_state = START_OF_PACKET;
        end
        if (TX_EN == 1'b0) //Si TX_EN = 0, se vuelve al estado actual.  
        begin
          tx_o_set = TXD; // tx_o_set = /I/
          nxt_state = XMIT_DATA; // Vuelve a sí mismo. 
        end
      end

    START_OF_PACKET: // 8
      begin // Pasa directamente al siguiente estado (no se toma en cuenta la confirmación del encoder). 
        tx_o_set = TXD; // tx_o_set = /S/
        nxt_state = TX_PACKET;
      end

    TX_PACKET: // 16
      begin
        if (TX_EN == 1'b1) // Si el GMII sigue en alto, se pasa al siguiente estado. 
        begin
          nxt_state = TX_DATA;
        end
        else // Si no se cumple dicha condición, la transmisición de datos se detuvo y se pasa al siguiente estado. 
        begin
          nxt_state = END_OF_PACKET_NOEXT; 
        end  
      end

    TX_DATA: // 32
      begin // Pasa directamente al siguiente estado (no se toma en cuenta la confirmación del encoder).
        tx_o_set = TXD; // tx_o_set = /D/
        nxt_state = TX_PACKET; 
      end     

    END_OF_PACKET_NOEXT: // 64
      begin // Pasa directamente al siguiente estado (no se toma en cuenta la confirmación del encoder).
        tx_o_set = TXD; // tx_o_set = /T/
        nxt_state = EPD2_NOEXT;
      end  

    EPD2_NOEXT: // 128
      begin // Pasa directamente al siguiente estado (no se toma en cuenta la confirmación del encoder).
        tx_o_set = TXD; // tx_o_set = /R/
        nxt_state = XMIT_DATA;
      end  
  endcase
end

endmodule

