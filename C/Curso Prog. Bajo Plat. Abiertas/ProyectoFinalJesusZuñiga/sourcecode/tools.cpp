/**
 * @file tools.cpp
 * @author Jesus Zuñiga Mendez
 * @brief Archivo que contiene funciones utiles para el main
 * @version 1.0
 * @date 18 de julio de 2019
 * @copyright Copyleft (l) 2019
 */
#include "../include/Includes.h"

using namespace std;


/*@brief Funciones elimina un gesto de la lista de gestos y elimina su carpeta
 *@param gesto es el nombre del gesto que se desea eliminar
 *@param nombre eñ npmbre del archivo que contiene la lista
 */
void EliminarGesto(string gesto, string nombre){
    ifstream archivo;
    string ruta= "./resources/gestos/" + nombre;
    string linea;
    string nuevoArchivo = "";
    string comando = "rm -r ./resources/gestos/";
    int s = 0;
    archivo.open(ruta.c_str(),std::ios::in);

    if (archivo.fail()){
        std::cout << "No se pudo abrir el archivo "  << ruta << " EliminarGesto " << std::endl;
        exit(1);
    }
    //recorre el archivo que contiene los nombres de los archivos que contienen los datos
    while (!archivo.eof()){
        getline(archivo,linea);
        if (strcmp(linea.c_str(), "") != 0){
            if (strcmp(linea.c_str(), gesto.c_str()) != 0){
                nuevoArchivo = nuevoArchivo + linea + "\n";
            }else{
                comando = comando + linea;
            }  
        }
    }
    if ((strcmp(gesto.c_str(), "") != 0) && (strcmp(gesto.c_str(), "\n") != 0)){
        s = system(comando.c_str());
    }
    s=s;
    ActualizarRegistro(nuevoArchivo,0,"RegistroGestos");
    archivo.close();  
}
/*@brief Funciones que imprime los datos deun archivo
 *@param nombre es el nombre del archivo ue se quiere imprimir
 */
void ImprimirRegistro(std::string nombre){
    ifstream archivo;
    string ruta= "./resources/gestos/" + nombre;
    string linea;
    archivo.open(ruta.c_str(),std::ios::in);

    if (archivo.fail()){
        std::cout << "No se pudo abrir el archivo "  << ruta << " CalcularGesto " << std::endl;
        exit(1);
    }
    //recorre el archivo que contiene los nombres de los archivos que contienen los datos
    while (!archivo.eof()){
        getline(archivo,linea);
        if (strcmp(linea.c_str(), "") != 0){
            cout << linea << endl;
        }
    }

    archivo.close();
}
/*@brief Funciones que escriben en un archivo una cadena de caracteres
 *@param dato es lo que se va a escribir
 *@param modo es como se debe abrir el archivo
 *@param nombre es el nombre del archivo
 */
void EscribirCadena(std::string dato,int modo,std::string nombre){
    std::ofstream archivo;
    std::string ruta= "./resources/temp/" + nombre;
    if (modo == 0){
        archivo.open(ruta.c_str(),std::ios::out); //abriendo archivo 
    }else{
        archivo.open(ruta.c_str(),std::ios::app); //abriendo archivo modo añadir
    }

    if (archivo.fail()){
        std::cout << "No se pudo abrir el archivo "  << nombre  << " escribir cadema" << std::endl;
        exit(1);
    }

    archivo << dato;

    archivo.close();
}
/*@brief Funciones que actualiza el registro de gestos
 *@param dato es lo que se va a escribir
 *@param modo es como se debe abrir el archivo
 *@param nombre es el nombre del archivo
 */
void ActualizarRegistro(std::string dato,int modo,std::string nombre){
    ofstream archivo;
    string ruta= "./resources/gestos/" + nombre;
    if (modo == 0){
        archivo.open(ruta.c_str(),ios::out); //abriendo archivo 
    }else{
        archivo.open(ruta.c_str(),ios::app); //abriendo archivo modo añadir
    }

    if (archivo.fail()){
        cout << "No se pudo abrir el archivo "  << nombre  << " Actualizar Registro" << endl;
        exit(1);
    }

    archivo << dato;
    archivo << "\n";
    archivo.close();
}
/*@brief Funciones que devuelve el valor de x de la linea string
 *@param dato es la linea que se analiza
 *@return devuelve el valor de x
 */
double devolverX(string dato){
    int contadorParentesis=0;
    int contadorComas=0;
    char caracter;
    double numero=0;
    string resultado = "";
    for (unsigned int i = 0; i < dato.size();i++){
        caracter = dato[i];
        if (caracter == '('){
            contadorParentesis++;
        }
        if (caracter == ','){
            contadorComas++;
        }
        if ((contadorParentesis == 1) && (contadorComas == 0) && (i != 0)){
            resultado = resultado + caracter;
        }
    }
    numero = atof(resultado.c_str());
    return numero;

}
/*@brief Funciones que devuelve el valor de y de la linea string
 *@param dato es la linea que se analiza
 *@return devuelve el valor de y
 */
double devolverY(string dato){
    int contadorParentesis=0;
    int contadorComas=0;
    char caracter;
    double numero=0;
    string resultado = "";
    unsigned int posicionComa = 0;
    for (unsigned int i = 0; i < dato.size();i++){
        caracter = dato[i];
        if (caracter == '('){
            contadorParentesis++;
        }
        if (caracter == ','){
            posicionComa = i;
            contadorComas++;
        }
        if ((contadorParentesis == 1) && (contadorComas == 1) && (i != posicionComa)){
            resultado = resultado + caracter;
        }
    }
    numero = atof(resultado.c_str());
    return numero;

}
/*@brief Funciones que devuelve el valor de z de la linea string
 *@param dato es la linea que se analiza
 *@return devuelve el valor de z
 */
double devolverZ(string dato){
    int contadorParentesis=0;
    int contadorComas=0;
    char caracter;
    float numero=0;
    string resultado = "";
    unsigned int posicionComa = 0;
    for (unsigned int i = 0; i < dato.size();i++){
        caracter = dato[i];
        if (caracter == '('){
            contadorParentesis++;
        }
        if (caracter == ')'){
            contadorParentesis++;
        }
        if (caracter == ','){
            posicionComa = i;
            contadorComas++;
        }
        if ((contadorParentesis == 1) && (contadorComas == 2) && (i != posicionComa)){
            resultado = resultado + caracter;
        }
    }
    numero = atof(resultado.c_str());
    return numero;

}
/*@brief funcion que calcula los promedios de los datos extraidos del leap 
 */
void CalcularGesto(){
    ifstream archivo;
    string ruta= "./resources/temp/ListaArchivos";
    string nombreArchivo;
    archivo.open(ruta.c_str(),std::ios::in);

    if (archivo.fail()){
        std::cout << "No se pudo abrir el archivo "  << ruta << " CalcularGesto " << std::endl;
        exit(1);
    }
    //recorre el archivo que contiene los nombres de los archivos que contienen los datos
    while (!archivo.eof()){
        getline(archivo,nombreArchivo);
        if (strcmp(nombreArchivo.c_str(), "") != 0){
            ifstream archivoDos;
            string rutaDos = "./resources/temp/" + nombreArchivo;
            string dato;
            archivoDos.open(rutaDos.c_str(),std::ios::in);
            if (archivo.fail()){
                std::cout << "No se pudo abrir el archivo "  << rutaDos << " CalcularGesto " << std::endl;
                exit(1);
            }
            //recorre el archivo que contiene los datos y calcula el promedio
            double sumatoriaX = 0;
            double promedioX = 0;
            double sumatoriaY = 0;
            double promedioY = 0;
            double sumatoriaZ = 0;
            double promedioZ = 0;
            double contadorPromedio=0;
            string lineaFinal="";                      
            string parentesisAbrir="(";
            string parentesisCerrar=")";
            string coma = ",";
            string espacio = " ";
            //cout << "trabajando con " << rutaDos << endl;
            while (!archivoDos.eof()){
                getline(archivoDos,dato);
                if (strcmp(dato.c_str(), "") != 0){
                    sumatoriaX = sumatoriaX + devolverX(dato);
                    sumatoriaY = sumatoriaY + devolverY(dato);
                    sumatoriaZ = sumatoriaZ + devolverZ(dato);
                    contadorPromedio++;
                }
            }
            promedioX = sumatoriaX / contadorPromedio;
            promedioY = sumatoriaY / contadorPromedio;
            promedioZ = sumatoriaZ / contadorPromedio;
            lineaFinal = parentesisAbrir 
                        + (to_string(promedioX)) + coma + espacio 
                        + (to_string(promedioY)) + coma + espacio 
                        + (to_string(promedioZ)) 
                        + parentesisCerrar; 
            //cout << "coordenadas " << promedioX << " " << promedioY << " " << promedioZ << endl;
            //cout << lineaFinal << endl;
            EscribirCadena(lineaFinal,0,nombreArchivo);
        }

    }

    archivo.close();
}

/*
 *@brief funcion que comprueba si el lector leyo la misma cantidad de manos siempre
 *@return devuelve el numero de manos
 */
int  ComprobarGestoManos(){
    int respuesta = 0;
    int comprueba = 0;
    int contador = 0;
    int error = 0;
    ifstream archivo;
    string ruta= "./resources/temp/CtdManos";
    string dato;
    archivo.open(ruta.c_str(),std::ios::in);
    if (archivo.fail()){
        std::cout << "No se pudo abrir el archivo "  << ruta << " CalcularGesto " << std::endl;
        exit(1);
    }
    while (!archivo.eof()){
        comprueba = respuesta;
        getline(archivo,dato);
        if (strcmp(dato.c_str(), "") != 0){
            if (contador == 0){
                comprueba = atoi(dato.c_str());
                contador++;
            }
            respuesta = atoi(dato.c_str());
            if (comprueba != respuesta){
                error = 1;
            }
        }
    }

    if (error == 1){
        respuesta =-1;
    }

    return respuesta;
}

/*
 *@brief funcion que comprueba si el lector leyo la misma cantidad de dedos siempre
 *@return devuelve el numero de dedos
 */
int  ComprobarGestoDedos(){
    int respuesta = 0;
    int comprueba = 0;
    int contador = 0;
    int error = 0;
    ifstream archivo;
    string ruta= "./resources/temp/CtdDedos";
    string dato;
    archivo.open(ruta.c_str(),std::ios::in);
    if (archivo.fail()){
        std::cout << "No se pudo abrir el archivo "  << ruta << " CalcularGesto " << std::endl;
        exit(1);
    }
    while (!archivo.eof()){
        comprueba = respuesta;
        getline(archivo,dato);
        if (strcmp(dato.c_str(), "") != 0){
            if (contador == 0){
                comprueba = atoi(dato.c_str());
                contador++;
            }
            respuesta = atoi(dato.c_str());
            if (comprueba != respuesta){
                error = 1;
            }
        }
    }

    if (error == 1){
        respuesta =-1;
    }

    return respuesta;
}
/*
 *@brief devuelve la cantidad de lecturas que se realizaron
 *@return devuelve la cantidad de lineas no nulas de un archivo
 */
int  ComprobarGestoCantidad(){
    int contador = 0;
    ifstream archivo;
    string ruta= "./resources/temp/FrameID";
    string dato;
    archivo.open(ruta.c_str(),std::ios::in);
    if (archivo.fail()){
        std::cout << "No se pudo abrir el archivo "  << ruta << " CalcularGesto " << std::endl;
        exit(1);
    }
    while (!archivo.eof()){
        getline(archivo,dato);
        if (strcmp(dato.c_str(), "") != 0){
            contador++;
        }
    }
    return contador;
}
/*
 *@brief crea una carpeta con el nombre del gesto que el usuario seleccionó y crea el directorio
 *@return devuelve el resultado devuelto por el comando system
 */
int  GuardarGesto(string nombre){
    int respuesta = 0;
    int s = 0;
    string comando = "mkdir ";
    string ruta = "./resources/gestos/" + nombre;
    comando = comando + ruta;
    s = system(comando.c_str());
    respuesta=s;
    return respuesta;
}
/*
 *@brief borra una carpeta con el nombre del gesto que el usuario seleccionó y elimina los archivos a dicha carpeta
 *@return devuelve el resultado devuelto por el comando system 
 */
int  BorrarGesto(string nombre){
    int respuesta = 0;
    int s = 0;
    string comando = "rmdir ";
    string ruta = "./resources/gestos/" + nombre;
    comando = comando + ruta;
    s = system(comando.c_str());
    respuesta=s;
    return respuesta;
}
/*
 *@brief mueve los archivos de temp a la carpeta del gesto correspondiente
 *@return devuelve el resultado devuelto por el comando system 
 */
int  MoverArchivos(string nombre){
    int respuesta = 0;
    int s = 0;
    string comando = "mv ";
    string ruta = "./resources/temp/* ./resources/gestos/" + nombre;
    comando = comando + ruta;
    s = system(comando.c_str());
    respuesta=s;
    return respuesta;
}
/*
 *@brief quita los espacios de una cadena
 *@return devuelve la cadena con los espacios sustituidos por |
 */
string QuitarEspacios(string cadena){
    string cadenaNueva = cadena;
    for (unsigned int i = 0; i < cadena.size(); i++){
        cadenaNueva[i] = cadena[i];
        if (cadena[i] == ' '){
            cadenaNueva[i] = '|';
        }
    }
    return cadenaNueva;
}
/*
 *@brief pone espacios en una cadena
 *@return devuelve la cadena con los | sustituidos por espacios
 */
string PonerEspacios(string cadena){
    string cadenaNueva = cadena;
    for (unsigned int i = 0; i < cadena.size(); i++){
        cadenaNueva[i] = cadena[i];
        if (cadena[i] == '|'){
            cadenaNueva[i] = ' ';
        }
    }
    return cadenaNueva;
}
