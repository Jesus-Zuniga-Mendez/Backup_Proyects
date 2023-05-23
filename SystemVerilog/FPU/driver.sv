class driver;
  stimulus sti;
  scoreboard sb;
 
  virtual intf_cnt intf;
        
  function new(virtual intf_cnt intf,scoreboard sb);
    this.intf = intf;
    this.sb = sb;
  endfunction
  
  //Tarea que ejercita el DUV y el modelo de referencia        
  task execute();
    //se crea el objeto generador de estimulos
    sti = new();
    //se generan los numeros aleatorios
    sti.randomize();
    sti.convertToShortReal();
    //Se envian los numeros al scoreboard
    //@(intf.out) begin
      sb.rmode=sti.rmode;
      sb.fpu_op=sti.fpu_op;
      sb.opa=sti.opa;
      sb.opb=sti.opb;
      sb.calcular();
    //se envian los numeros al DUV
    intf.rmode=sti.rmode;
    intf.fpu_op=sti.fpu_op;
    
    //esto es una prueba que se hzo revisando gtkwave
    intf.opa = $shortrealtobits(sti.opa);
    intf.opb = $shortrealtobits(sti.opb);
    //esto de abajo funciona en division
    //intf.opa=sti.opa;
    //intf.opb=sti.opb;
    
    
    //end
    //descomentar si se quiere ver cuales numeros random 
    //se estan enviando con cada execute. 
    /*
    $display("execute");
    $display("rmode %d", sti.rmode);
    $display("fpu_op %d", sti.fpu_op);
    $display("opa %d", sti.opa);
    $display("opb %d", sti.opb);
    $display("fin execute");
    */
  endtask
endclass
