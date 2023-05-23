class refmodel;
  
  function new ();
    begin
      //Descomentar si se quiere 
      //mapear donde se instancia la clase
      //$display("---Constructor de clase refmodel---");
    end
  endfunction
  
  
  
  function shortreal calcular(integer rmode, integer fpu_op,shortreal opa,shortreal opb);
    begin
      shortreal resultado;
      //$display("Datos ingresaron refmode %d, fpu_op %d, opa %f, opb %f",rmode,fpu_op,opa,opb);
      //este if hace la operacion corrspondiente
      if (fpu_op == 0)
        begin
          resultado = opa+opb;
          //$display("Operacion suma");
        end
      else if (fpu_op == 1)
        begin
          resultado = opa - opb;
          //$display("Operacion resta");
        end
      else if (fpu_op == 2)
        begin
          resultado = opa * opb;
          //$display("Operacion multiplicacion");
        end
      else if (fpu_op == 3)
        begin
          resultado = opa / opb;
          //$display("Operacion division");
        end
      
      
      //este if hace el redondeo correspondiente
      if (rmode == 0)
        begin
          //0 = round_nearest_even
          //resultado = round_nearest(resultado);
          //$display("round_nearest_even");
        end
      else if (rmode == 1)
        begin
          //1 = round_to_zero;
          //$display("round_to_zero");
        end
      else if (rmode == 2)
        begin
          //2 = round_up
          //$display("round_up");
        end
      else if (rmode == 3)
        begin
          //3 = round_down
          //$display("round_down");
        end   
      return resultado;
    end
  endfunction
endclass