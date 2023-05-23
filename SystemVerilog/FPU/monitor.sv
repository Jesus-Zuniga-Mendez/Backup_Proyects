class monitor;
  scoreboard sb;
  virtual intf_cnt intf;
      
  integer contadorEventos;
  shortreal c;
  string mensaje[$] = {};
  string palabra;
  packet temp;
  
  integer contadorReloj;
  
  function new(virtual intf_cnt intf,scoreboard sb);
    this.intf = intf;
    this.sb = sb;
    this.contadorReloj = 0;
  endfunction
  
  task contemosReloj();
    fork
      forever @(posedge intf.clk or negedge intf.clk)
      begin
        contadorReloj = contadorReloj +1;
      end
    join
  endtask
    
  task check();
    contadorEventos = 0;
    fork
      forever @(intf.out)
      begin
        //$display(" ");
        palabra ="Prueba=";
        mensaje.push_back(palabra);
        palabra.itoa(contadorEventos);
        mensaje.push_back(palabra);        
        temp = sb.pop_data();
        //$display("Ciclo reloj # %d",contadorReloj);
        //$display("Resultado # %d",contadorEventos);
        
        //$display("Test",temp);    
        //if modos de redondeo
        if (temp.rmode == 0)
          begin
            palabra = "Redonde=round_nearest_even";
            mensaje.push_back(palabra);
          end
        //if modos opoeracio
        if (temp.fpu_op == 0)
          begin
            palabra = "Operacion=Suma          ";
            mensaje.push_back(palabra);
          end
        else if (temp.fpu_op == 1)
          begin
            palabra = "Operacion=Resta         ";
            mensaje.push_back(palabra);
          end
        else if (temp.fpu_op == 2)
          begin
            palabra = "Operacion=Multiplicacion";
            mensaje.push_back(palabra);
          end        
        else if (temp.fpu_op == 3)
          begin
            palabra = "Operacion=Division      ";
            mensaje.push_back(palabra);
          end
        palabra ="OperandoA=";
        mensaje.push_back(palabra);
        palabra.realtoa(temp.opa);
        mensaje.push_back(palabra);
        palabra ="OperandoB=";
        mensaje.push_back(palabra);
        palabra.realtoa(temp.opb);
        mensaje.push_back(palabra);
        palabra ="Resultado=";
        mensaje.push_back(palabra);
        palabra.realtoa(temp.resultado);
        mensaje.push_back(palabra);
        palabra ="Ciclo=";
        mensaje.push_back(palabra);
        palabra.itoa(contadorReloj);
        mensaje.push_back(palabra);                
        if (temp.resultado == $bitstoshortreal(intf.out))
          begin
            $display("PASS: ",mensaje);
            mensaje.delete();
            //$display("PASS, refmodel= %f, DUV =  %f",temp.resultado,$bitstoshortreal(intf.out));
          end
        else
          begin
            //$display("",this.mensaje);
            $display("####################################");
            $display("FAIL: ",mensaje);
            mensaje.delete();
            $display("####################################");
            //$display("Error en el test , refmodel= %f, DUV =  %f",temp.resultado,$bitstoshortreal(intf.out));
          end
        //$display(" ");
        contadorEventos = contadorEventos + 1;
      end
    join
  endtask
endclass