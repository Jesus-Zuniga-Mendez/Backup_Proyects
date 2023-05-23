class scoreboard;
  refmodel modelo;
  
  integer rmode;
  integer fpu_op;
  shortreal opa;
  shortreal opb;
  shortreal resultado;
  shortreal resultadoAnterior;
 
  packet temp;
  packet scb_mem[$];
  
  function new ();
    begin
      //Descomentar si se quiere 
      //mapear donde se instancia la clase
      //$display("---Constructor de clase scoreboard---");
    end
  endfunction
  
  //funcion que extrae en orden FIFO lo almacenado
  function packet pop_data();
    temp = scb_mem.pop_back;
    return temp;
  endfunction
  
  //en esta task se utiliza el refmodel para calcular 
  //la salida esperada, además se almacenan los datos en una cola 
  //para tenerlos listos cuando el checker los necesite
  task calcular();
    resultadoAnterior = resultado;
    //se instancia el modelo
    modelo = new();
    //calculamos el resultado del modelo
    resultado = modelo.calcular(rmode,fpu_op,opa,opb);
    //asignamos los parametros a la lista del scoreboard
    temp.rmode=rmode;
    temp.fpu_op=fpu_op;
    temp.opa=opa;
    temp.opb=opb;
    temp.resultado=resultado;
    //se almacena el struct en memoria
    if (resultadoAnterior == resultado)
      begin
        //$display("Es igual %f",resultado);
        //scb_mem.push_front(temp);
      end
    else
      begin
        scb_mem.push_front(temp);
      end
    //$display("Rmodel result = %f",resultado);
  endtask
endclass