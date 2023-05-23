//module tb_top;
module top();
  //logic clock;
  //always #10 clock = ~clock;
  //initial begin 
	//clock = 0;
  //end
  reg clk = 0;
  initial // clock generator
  forever #1 clk = ~clk;
   
  // Interface
  //fpu_if  fpu_vif(clock);
  //intf_cnt intf(clk);
  intf_cnt fpu_vif(clk);
  
  // DUT connection	
  fpu floatingPointUnitUnderVerification(
    clk,
    fpu_vif.rmode,
    fpu_vif.fpu_op,
    fpu_vif.opa,
    fpu_vif.opb,
    fpu_vif.out,
    fpu_vif.inf,
    fpu_vif.snan,
    fpu_vif.qnan,
    fpu_vif.ine,
    fpu_vif.overflow,
    fpu_vif.underflow,
    fpu_vif.zero,
    fpu_vif.div_by_zero
  ); 

  initial begin
    $dumpfile("verilog.vcd");
    $dumpvars(0);
  end

  //Test case
  testcase test(fpu_vif);
endmodule