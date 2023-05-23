/**
 * @file main.c
 * @author Jesus Zuñiga Mendez
 * @author Dennis Chavarria
 * @brief Archivo pricipal, Proyecto1 Analisis de algoritmos para Contor Falowwin
 * @version 1.0
 * @date 01 de diciembre de 2019
 * @copyright Copyleft (l) 2019
 */
#include "./include/Includes.h"

using namespace std;
using namespace cv;
using namespace std::chrono;
//using namespace Magick; 



/**
 * @brief Funcion Principal
 */
int main(int argc, char** argv)
{
   int StartX;
	int StartY;
	int& RefSX = StartX;
	int& RefSY = StartY;



   if (argc >= 1){
      string imagen = argv[1];
      string binaria = imagen+"Binaria.jpg";
      string operacion = argv[2];
      //string formato = argv[3];
      //string porciento = argv[4];
      //float porcientoto = stof(porciento);
      string extension = "";


      Algoritmos algoritmos(imagen);
      algoritmos.ABinarioInverso();
      algoritmos.EscribirImagen("./resources/binariaInversa.jpeg");
      Algoritmos algoritmos2(imagen);
      algoritmos2.ABinario();
      algoritmos2.EscribirImagen("./resources/binaria.jpeg");

      if (operacion == "M"){
         //time_t t0 = time(0);
         steady_clock::time_point t0 = steady_clock::now();
         algoritmos2.Moore();
         steady_clock::time_point t1 = steady_clock::now();
         //time_t t1 = time(0);
         unsigned long long tiempito = duration_cast<nanoseconds>(t1-t0).count();
         //time_t tiempito = t1-t0;
         algoritmos2.EscribirImagen("./resources/resultadoMoore.jpeg");
         Algoritmos paraContarPixeles("./resources/resultadoMoore.jpeg");
         cout << "Moore    " << "Pixeles " << paraContarPixeles.contarPixeles()<< "    Tiempo  " << tiempito << "  " << imagen << endl;
         algoritmos2.Colorear("./resources/resultadoMoore.jpeg", "Moore");
      }
      if (operacion == "R"){
         steady_clock::time_point t0 = steady_clock::now();
         algoritmos2.Radial();
         steady_clock::time_point t1 = steady_clock::now();
         //time_t t1 = time(0);
         unsigned long long tiempito = duration_cast<nanoseconds>(t1-t0).count();
         //time_t tiempito = t1-t0;
         algoritmos2.EscribirImagen("./resources/resultadoRadial.jpeg");
         Algoritmos paraContarPixeles("./resources/resultadoRadial.jpeg");
         cout << "Radial    " << "Pixeles " << paraContarPixeles.contarPixeles()<< "    Tiempo  " << tiempito << "  " << imagen << endl;
         algoritmos2.Colorear("./resources/resultadoRadial.jpeg", "Radial");
      }
      if (operacion == "JAM"){
         cout << "Propio" << endl;
         //algoritmos.MiNombre();
         //algoritmos.EscribirImagen("./resources/resultadoPropio.jpeg");
      }
      if (operacion == "P"){
         Algoritmos algoritmosD;
         Mat imagenI = imread("./resources/binariaInversa.jpeg");
    	   Mat nueva(imagenI.rows, imagenI.cols, CV_8UC1);

	      Mat& imagen_sin_procesar=imagenI;
	      Mat& nuevaeditable=nueva;

         algoritmosD.ConversorInicial(imagen_sin_procesar, nuevaeditable);
         steady_clock::time_point t0 = steady_clock::now();
	      algoritmosD.StartFinder(nuevaeditable, RefSX, RefSY);
	      algoritmosD.Pavlidi(nuevaeditable, RefSX, RefSY);
         steady_clock::time_point t1 = steady_clock::now();
         algoritmosD.EscribirImagen("./resources/resultadoPavlidi.jpeg");
         //time_t t1 = time(0);
         unsigned long long tiempito = duration_cast<nanoseconds>(t1-t0).count();
         //time_t tiempito = t1-t0;
	      //algoritmosD.SquareTracingAlg(nuevaeditable, RefSX, RefSY);
         Algoritmos paraContarPixeles("./resources/resultadoPavlidi.jpeg");
         cout << "Pavlidi    " << "Pixeles " << paraContarPixeles.contarPixeles()<< "    Tiempo  " << tiempito << "  " << imagen << endl;
         algoritmosD.Colorear("./resources/resultadoPavlidi.jpeg", "Pavlidi");
      }
      if (operacion == "S"){
         Algoritmos algoritmosD;
         Mat imagenI = imread("./resources/binariaInversa.jpeg");
    	   Mat nueva(imagenI.rows, imagenI.cols, CV_8UC1);

	      Mat& imagen_sin_procesar=imagenI;
	      Mat& nuevaeditable=nueva;

         algoritmosD.ConversorInicial(imagen_sin_procesar, nuevaeditable);
         steady_clock::time_point t0 = steady_clock::now();
	      algoritmosD.StartFinder(nuevaeditable, RefSX, RefSY);
	      //algoritmosD.Pavlidi(nuevaeditable, RefSX, RefSY);
	      algoritmosD.SquareTracingAlg(nuevaeditable, RefSX, RefSY);
         steady_clock::time_point t1 = steady_clock::now();
         algoritmosD.EscribirImagen("./resources/resultadoSquare.jpeg");
         //time_t t1 = time(0);
         unsigned long long tiempito = duration_cast<nanoseconds>(t1-t0).count();
         //time_t tiempito = t1-t0;
         Algoritmos paraContarPixeles("./resources/resultadoSquare.jpeg");
         cout << "Cuadrado    " << "Pixeles " << paraContarPixeles.contarPixeles()<< "    Tiempo  " << tiempito << "  " << imagen << endl;
         algoritmosD.Colorear("./resources/resultadoSquare.jpeg" , "Square");
      }
   }else{
      cout << "Revise los parametros de entrada" << endl;
   }
   return 0;
}