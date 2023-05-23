// se consideran las restricciones 
//FPU Operations (fpu_op):
//========================
//
//0 = add
//1 = sub
//2 = mul
//3 = div
//4 =
//5 =
//6 =
//7 =
//
//Rounding Modes (rmode):
//=======================
//
//0 = round_nearest_even
//1 = round_to_zero
//2 = round_up
//3 = round_down

//esta clase genera los estimulos de forma aleatoria

class stimulus;  
  //los rand c son ciclicos no se repiten
  randc integer rmode;
  randc integer fpu_op;
  //los rand son random normales
  //rand bit [31:0] opab;
  //rand bit [31:0] opbb;
  rand integer opaI;
  rand integer opbI;
  shortreal opa;
  shortreal opb;

  //Restringe los valores que se generan 
  //segun las restricciones indicadas arriba
  	constraint restricciones {
      rmode  >= 0;
      rmode  <= 0;
      fpu_op >= 0;
      fpu_op <= 3;
      //fpu_op != 1;
      //fpu_op != 2;
      opaI >=1;
      opaI <=100;      
      opbI >=1;
      opbI <=10;
      //los opX  son de 32 bits
      //por lo que no necesitan restriccion
    }
  // Constructor
  function new ();
    begin
      //Descomentar si se quiere 
      //mapear donde se instancia la clase
      //$display("---Constructor de clase stimulus---");
    end
  endfunction
  
  //convierte los numeros aleatorios binarios a numeros shortreal
  function convertToShortReal();
    begin
      //opa = $bitstoshortreal(opab);
      //opb = $bitstoshortreal(opbb);
      opa = $itor(opaI);
      opb = $itor(opbI);
      //descomentar si se quiere ver el proceso de conversion
      //$display("BINARIOS opab= %b, opbb= %b", opab,opbb);
      //$display("ENTEROS opab= %d, opbb= %d", opaI,opbI);
      //$display("FLOATS opa= %f, opb= %f", opa,opb);
    end
  endfunction
endclass