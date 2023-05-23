/**
 * @file main.cpp
 * @author Jesus Zuñiga Mendez
 * @brief Archivo pricipal, Proyecto final, Programacion bajo plataformas abiertas
 * @version 1.0
 * @date 18 de julio de 2019
 * @copyright Copyleft (l) 2019
 */
#include "./include/Includes.h"

//controlan los colores de impresion
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_BOLD_YELLOW   "\x1b[01;33m"
#define ANSI_COLOR_BOLD_GREEN   "\x1b[01;32m"

using namespace std;

/**
 * @brief Función que imprime una bienvenida para el usuario
 */
void Bienvenida(){
  cout << "  ____   _                                 _      _          _  _  _ " << endl;
  cout << " |  _ \\ (_)                               (_)    | |        | || || |" << endl;
  cout << " | |_) | _   ___  _ __ __   __ ___  _ __   _   __| |  ___   | || || |" << endl;
  cout << " |  _ < | | / _ \\| '_ \\\\ \\ / // _ \\| '_ \\ | | / _` | / _ \\  | || || |" << endl;
  cout << " | |_) || ||  __/| | | |\\ V /|  __/| | | || || (_| || (_) | |_||_||_|" << endl;
  cout << " |____/ |_| \\___||_| |_| \\_/  \\___||_| |_||_| \\__,_| \\___/  (_)(_)(_)" << endl;
}
/**
 * @brief Función que imprime un numero tres
 */
void ImpTres(){
  cout << "\t";cout << "\t";cout << "\t";cout << "\t";cout << " ____  " << endl;
  cout << "\t";cout << "\t";cout << "\t";cout << "\t";cout << "|___ \\ " << endl;
  cout << "\t";cout << "\t";cout << "\t";cout << "\t";cout << "  __) |" << endl;
  cout << "\t";cout << "\t";cout << "\t";cout << "\t";cout << " |__ < " << endl;
  cout << "\t";cout << "\t";cout << "\t";cout << "\t";cout << " ___) |" << endl;
  cout << "\t";cout << "\t";cout << "\t";cout << "\t";cout << "|____/ " << endl;
}
/**
 * @brief Función que imprime un numero dos
 */
void ImpDos(){
  cout << "\t";cout << "\t";cout << "\t";cout << "\t";cout << " ___  " << endl;
  cout << "\t";cout << "\t";cout << "\t";cout << "\t";cout << "|__ \\ " << endl;
  cout << "\t";cout << "\t";cout << "\t";cout << "\t";cout << "   ) |" << endl;
  cout << "\t";cout << "\t";cout << "\t";cout << "\t";cout << "  / / " << endl;
  cout << "\t";cout << "\t";cout << "\t";cout << "\t";cout << " / /_ " << endl;
  cout << "\t";cout << "\t";cout << "\t";cout << "\t";cout << "|____|" << endl;
}/**
 * @brief Función que imprime un numero uno
 */
void ImpUno(){
  cout << "\t";cout << "\t";cout << "\t";cout << "\t";cout << "  __   " << endl;
  cout << "\t";cout << "\t";cout << "\t";cout << "\t";cout << " /_ |  " << endl;
  cout << "\t";cout << "\t";cout << "\t";cout << "\t";cout << "  | |  " << endl;
  cout << "\t";cout << "\t";cout << "\t";cout << "\t";cout << "  | |  " << endl;
  cout << "\t";cout << "\t";cout << "\t";cout << "\t";cout << "  | |  " << endl;
  cout << "\t";cout << "\t";cout << "\t";cout << "\t";cout << "  |_|  " << endl;
}
/**
 * @brief Funcion que realia una cuenta regresiva de tres segundos
 */
void Regresiva(){
  int s=0;
  s=system("clear");
  cout << ANSI_COLOR_RED "";
  ImpTres();
  s=system("sleep 1");
  s=system("clear");
  cout << ANSI_COLOR_YELLOW "";
  ImpDos();
  s=system("sleep 1");
  s=system("clear");
  cout << ANSI_COLOR_GREEN "";
  ImpUno();
  s=system("sleep 1");
  cout << ANSI_COLOR_RESET "";
  s=system("sleep 1");
  s=s;
}
/**
 * @brief Funcion que imprime el menu
 * @return seleccion Es la opcion escogida por el usuario
 */
int Menu(){
  int respuesta = -1;
  string entrada;
  cout << "Digite el numero de la opcion que quiere realizar.\n" << endl;
  cout << "\t\t1. Iniciar." << endl;
  cout << "\t\t2. Agregar gesto." << endl;
  cout << "\t\t3. Eliminar Gesto." << endl;
  cout << "\t\t0. SALIR.\n"  << endl;
  cin >> entrada;
  respuesta = atoi(entrada.c_str());
  if (respuesta == 0){
    if (entrada.compare("0") != 0){
      respuesta = -1;
    }
  }
  return respuesta;
}
/**
 * @brief Funcion Principal, contiene el codigo que ejecuta las demas acciones
 */
int main(int argc, char** argv) {
  int seleccion = 0;
  int s;
  string nombreGesto;
  Bienvenida();
  cout << "\n\n" << endl;
  //se repite el ciclo hasta que el usuario salga
  do{
    //seleccion contiene la opcion escogida por el usuario
    seleccion = Menu();
    switch (seleccion)
    {
    case -1:
      cout << "Solo puede digitar numeros" << endl;
      break;
    case 1:
      //se ejecuta el binario ComprobarGesto
      s = system("./sample/ComprobarGesto");
      s = system("rm -r ./resources/temp/*");
      break;
    case 2:
      //sepide el nombre del gesto
      cout << ANSI_COLOR_RESET "";
      cout << "Digite La accion que el gesto debe realizar" << endl;
      cin >> nombreGesto;
      nombreGesto = QuitarEspacios(nombreGesto);
      Regresiva();
      //si se logra crear el archivo
      if (GuardarGesto(nombreGesto) == 0){
        //se ejecuta el binario GuardarGesto
        s = system("./sample/GuardarGesto");
        if (ComprobarGestoCantidad() == 300){
          //si no se leyo bien el numero de manos
          if (ComprobarGestoManos() == -1){
            printf(ANSI_COLOR_RED"");
            cout << "Retiró alguna mano durante la lectura del gesto" << endl;
            BorrarGesto(nombreGesto);
            printf(ANSI_COLOR_RESET"");
            s = system("rm -r ./resources/temp/*");
          }//si no se leyo bien el numero de dedos
          else if (ComprobarGestoDedos() == -1){
            printf(ANSI_COLOR_RED"");
            cout << "Algún dedo se movio o se cerro al realizar el gesto" << endl;
            BorrarGesto(nombreGesto);
            printf(ANSI_COLOR_RESET"");
            s = system("rm -r ./resources/temp/*");
          }
          //si todo se leyo bien
          else{
            CalcularGesto();
            MoverArchivos(nombreGesto);
            ActualizarRegistro(nombreGesto,1,"RegistroGestos");
            printf(ANSI_COLOR_GREEN"");
            cout << "Gesto Guardado" << endl;
            printf(ANSI_COLOR_RESET"");
          }
          nombreGesto = "";
        }else{
          BorrarGesto(nombreGesto);
          s = system("rm -r ./resources/temp/*");
        }
      }else{
        printf(ANSI_COLOR_RED"");
        cout << "Error al crear el gesto, La acción ya existe" << endl;
        printf(ANSI_COLOR_RESET"");
      }
      break;
    case 3:
      //si se desea borrar un gesto primero si imprime la lista de gestos guardados
      ImprimirRegistro("RegistroGestos");
      cout << "Digite el gesto quiere eliminar" << endl;
      cin >> nombreGesto;
      nombreGesto = QuitarEspacios(nombreGesto);
      //se elimina de la lista y el directorio
      EliminarGesto(nombreGesto, "RegistroGestos");
      EliminarGesto("\n", "RegistroGestos");
      printf(ANSI_COLOR_GREEN"");
      cout << "Gesto Eliminado" << endl;
      printf(ANSI_COLOR_RESET"");
      nombreGesto = "";
      break;
    default:
      printf("cero\n");
      break;
    }
  }while (seleccion != 0);
  s=s;
  return 0;
}