program testcase(intf_cnt intf);
  environment env = new(intf);
  initial
    begin
      $display(" ");
      $display(" ");
      $display("Inicio del test 1");
      for (int i = 0; i <=4500; i++)
        begin
          #20
          env.drvr.execute();
        end
      $display("Fin del test 1");
    $display ("finish");
    //$finish();    
    end
endprogram
