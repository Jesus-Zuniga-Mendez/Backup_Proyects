/**
 * @file main.c
 * @author Jesus Zuñiga Mendez
 * @author Dennis Chavarria
 * @brief Archivo pricipal, Proyecto0 filtro en imagenes
 * @version 1.0
 * @date 26 de octubre de 2019
 * @copyright Copyleft (l) 2019
 */
#include "./include/Includes.hpp"

using namespace std;
using namespace cv;
using namespace Magick;
/**
 * @brief Funcion Principal
 */
int main(int argc, char** argv)
{
   if (argc == 4){
      string imagen = argv[1];
      string operacion = argv[2];
      string formato = argv[3];
      //string porciento = argv[4];
      //float porcientoto = stof(porciento);
      string extension = "";
      Filtros filtros(imagen);

      //comprobamos si la extension es gif en caso de serlo se guarda y cambia a bmp
      for(int i = imagen.size();i>-1; i--){
         if (((imagen[i] >= 97) && (imagen[i] <= 122)) || ((imagen[i] >= 65) && (imagen[i] <= 90))) {
            extension = extension + imagen[i];
         }else if(imagen[i] == '.') {
            i = -1;
         }
      }
      //si es gif la convertimos a bmp y trabajamos sobre esa
      if ((extension == "fig") || (extension == "FIG")){
         //codigo tomado de https://imagemagick.org/script/magick++.php
         InitializeMagick(*argv);
         // Construct the image object. Seperating image construction from the
         // the read operation ensures that a failure to read the image file
         // doesn't render the image object useless.
         Image image;
         try {
           // Read a file into image object
           image.read(imagen);
           // Crop the image to specified size (width, height, xOffset, yOffset)
           //image.crop( Geometry(250,250));//;, 100, 100) );
           // Write the image to a file
           image.write("TempConvertGifTo.bmp");
           Mat abrirImagen = imread("TempConvertGifTo.bmp",CV_LOAD_IMAGE_COLOR);
           filtros.matrizImagen = abrirImagen;
           int s = system("rm TempConvertGifTo.bmp");
           s=s;
         }
         catch( Magick::Exception &error_ )
         {
           cout << "Caught exception: " << error_.what() << endl;
           return 1;
         }
      }else{
      }
      //
      //
      //
      if (operacion == "FG"){
         //(FG) Filtro gaussiano.
         cout << "Gausiano" << endl;
         filtros.FiltroGaussiano();
      }else if (operacion == "FSTD")
      {
         //(FSTD) Filtro de desviación estándar.
         cout << "Desviacion" << endl;
         filtros.FiltroDesviacionEstandar();
      }else if (operacion == "ED")
      {
         //(ED) Detección de bordes (edge detection).
         cout << "Deteccion de bordes" << endl;
         filtros.TransformacionEscalaGrises();
         filtros.FiltroGaussianoUnCanal();
         //filtros.EscribirImagen(imagen+"Base",operacion,formato);
         filtros.DeteccionBordes();
      }else if (operacion == "MB")
      {
         //(MB) Difuminado de movimiento (motion blur).
         cout << "Motion" << endl;
         filtros.DifuminadoMovimiento();
      }else if (operacion == "SAP")
      {
         //(S&P) Ruido sal y pimienta
         cout << "Sal y pimienta" << endl;
         filtros.RuidoSalPimienta(0.5);
      }else if (operacion == "E")
      {
         //(E) Erosión
         cout << "Erosion" << endl;
         filtros.Binario();
         //filtros.EscribirImagen(imagen+"Binaria",operacion,formato);
         filtros.Erosion();
      }else if (operacion == "D")
      {
         //(D) Dilatación
         cout << "Dilatacion" << endl;
         filtros.Binario();
         //filtros.EscribirImagen(imagen+"Binaria",operacion,formato);
         filtros.Dilatacion();
      }else if (operacion == "I")
      {
         //(I) Inversión de color
         cout << "Inversion" << endl;
         filtros.InversionColor();
      }else if (operacion == "G")
      {
         //(G) Transformación de escala de grises.
         cout << "Grises" << endl;
         filtros.TransformacionEscalaGrises();
      }
      //si se desea guardar como gif se guarda en bmp con
      //opencv y se convierte a gif con imagemagick
      if ((formato == "gif") || (formato == "GIF")){
         //cout << "aqui"<< endl;
         filtros.EscribirImagen(imagen,operacion,"bmp");
         //cout << "o aqui"<< endl;
         //codigo tomado de https://imagemagick.org/script/magick++.php
         InitializeMagick(*argv);
         // Construct the image object. Seperating image construction from the
         // the read operation ensures that a failure to read the image file
         // doesn't render the image object useless.
         Image imagegif;
         try {
           // Read a file into image object
           string ruta = "./"+imagen+"."+operacion+"."+"bmp";
           string ruta2 = "./"+imagen+"."+operacion+"."+"gif";
           imagegif.read(ruta);
           // Crop the image to specified size (width, height, xOffset, yOffset)
           //image.crop( Geometry(250,250));//;, 100, 100) );
           // Write the image to a file
           imagegif.write(ruta2);
           string comando= "rm "+ruta;
           int s = system(comando.c_str());
           s=s;
         }
         catch( Magick::Exception &error_ )
         {
           cout << "Caught exception: " << error_.what() << endl;
           return 1;
         }
      }else{
         filtros.EscribirImagen(imagen,operacion,formato);
      }
   }else{
      cout << "Revise los datos de entrada" << endl;
   }
   return 0;
}
