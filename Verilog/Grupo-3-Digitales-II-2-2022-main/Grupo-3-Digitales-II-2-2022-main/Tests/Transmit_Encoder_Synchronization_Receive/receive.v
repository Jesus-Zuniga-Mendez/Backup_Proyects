`include "../Constants.v" 

module receive (
  RX_CLK, 
  mr_main_reset, 
  RXD,
  RX_DV,
  GTX_CLK,
  rx_even,
  xmit, 
  SUDI
); 

// Entradas.
input mr_main_reset, xmit, GTX_CLK, rx_even;
input [9:0] SUDI; 

// Salidas.
output reg RX_CLK, RX_DV;
output reg [7:0] RXD;

// Registros internos para el manejo de estados. 
reg [7:0] state;
reg [7:0] nxt_state;  
reg counter;
reg nxt_counter; 

// Estados con convención one-hot: 
parameter WAIT_FOR_K = 8'b00000001;
parameter RX_K = 8'b00000010;
parameter IDLE_D = 8'b00000100;
parameter CARRIER_DETECT = 8'b00001000;
parameter START_OF_PACKET = 8'b00010000;
parameter RECEIVE = 8'b00100000;
parameter RX_DATA = 8'b01000000;
parameter TRI_PLUS_RRI = 8'b10000000;

// Definición de Flip-flops.
always @(posedge GTX_CLK)  
begin
  if (~mr_main_reset) // Si RESET = 0, inicializa variables. 
  begin
    state <= WAIT_FOR_K; 
    counter <= 0;
    RXD <= 8'b00000000;
    RX_CLK <= 0;
    RX_DV <= 0;
  end
  else // Si el RESET está en 1, trasmite estados. 
  begin
    state <= nxt_state;
    counter <= nxt_counter;
  end
end 

// Descripción de las transiciones de estados. 
always @(*) begin
  RX_CLK = GTX_CLK;
  nxt_state = state;
  nxt_counter = counter;

  case (state)
    WAIT_FOR_K: 
      begin
        RX_DV <= 0;
        if (SUDI == `K28_5_10 && rx_even==1) begin
          nxt_state = RX_K;
          nxt_counter = 0;
        end
      end

    RX_K: 
      begin
        RX_DV <= 0;
        if (SUDI == `K28_5_10 && counter == 0 && xmit == 1) begin
          nxt_counter = counter+1;
        end else
        if (SUDI == `D5_6_10 && counter == 1) begin
          nxt_state = IDLE_D;
        end else
        if (SUDI == `D16_2_10 && counter == 1) begin
          nxt_state = IDLE_D;
        end 
      end

    IDLE_D: 
      begin  
        RX_DV <= 0;
        if (SUDI == `K27_7_10 && xmit == 1) begin
          nxt_state = CARRIER_DETECT;
        end
      end

    CARRIER_DETECT: 
      begin
        nxt_state = START_OF_PACKET;
      end

    START_OF_PACKET: 
      begin 
        RX_DV <= 1;
        RXD <= 8'b01010101;
        nxt_state = RECEIVE;
        nxt_counter = 0;
      end     

    RECEIVE: 
      begin 
        RX_DV <= 1;
        if (SUDI == `K29_7_10 && counter == 0) begin
          nxt_counter = counter+1;
        end else
        if (SUDI == `K23_7_10 && counter == 1) begin
          nxt_state = TRI_PLUS_RRI;
        end else
        begin
          nxt_state = RX_DATA;
        end 
      end  

    RX_DATA: 
      begin 
        RX_DV <= 1;
        nxt_state = RECEIVE;
        case (SUDI)

          `D0_0_10:
            begin
              RXD <= `D0_0_8;
            end

          `D1_0_10:
            begin
              RXD <= `D1_0_8;
            end

          `D2_0_10:
            begin
              RXD <= `D2_0_8;
            end

          `D3_0_10:
            begin
              RXD <= `D3_0_8;
            end

          `D4_0_10:
            begin
              RXD <= `D4_0_8;
            end

          `D5_0_10:
            begin
              RXD <= `D5_0_8;
            end

          `D6_0_10:
            begin
              RXD <= `D6_0_8;
            end

          `D7_0_10:
            begin
              RXD <= `D7_0_8;
            end

          `D5_6_10:
            begin
              RXD <= `D5_6_8;
            end

          `D16_2_10:
            begin
              RXD <= `D16_2_8;
            end

        endcase
      end  

    TRI_PLUS_RRI:
      begin 
        RX_DV <= 0;
        nxt_state = RX_K;
      end  
  endcase
end
endmodule