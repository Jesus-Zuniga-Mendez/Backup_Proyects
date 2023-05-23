/**
 * @file Recorrer.c
 * @author Jesus Zuñiga Mendez
 * @brief Archivo que contiene las funciones para Recorrer un laberinto
 */
#include "../include/includes.h"


/**
 * @brief Funcion que llena un laberinto con los datos del archivo sellecionado por el usuario
 * @param laberinto es la estructura que contiene todos los datos
 * @param archivo es la direccion donde esta el archivo
 */
void LLenarLaberinto(matriz* laberinto, char** Archivo){
    int verificar = VerificarLaberinto(laberinto, Archivo);
    if (verificar == 1){
        laberinto->tablero = CrearTablero(laberinto->filas,laberinto->columnas);
        LlenarTablero(laberinto,Archivo);
        printf("Laberinto cargado con exito\n\n\n");
        UbicarRaton(laberinto);
        //printf("Las coordenadas del raton son fila %d y columna %d\n\n\n",laberinto->posicion[0],laberinto->posicion[1]);
        laberinto->pasos = CrearLista();
        laberinto->pasos->items = 0;
        laberinto->pasos->primero = 0x0;
        buscarQueso(laberinto, laberinto->posicion[0], laberinto->posicion[1]);
        printf("\n\n\n");
    }else
    {
        printf("Laberinto DAÑADO\n");
    }
    

}

/**
 * @brief Funcion que ubica la posicion inicial del raton
 * @param laberinto es la estructura que contiene todos los datoss
 */
void UbicarRaton(matriz* laberinto){
    char simbolo = 'r';
    for(int f = 0; f < laberinto->filas; f++){
        for(int c = 0; c < laberinto->columnas; c++){
            if (simbolo == *(*(laberinto->tablero+f)+c)){
                laberinto->posicion[0] = f;
                laberinto->posicion[1] = c;
            }
        }
    } 
}

/**
 * @brief Funcion que ubica la posicion inicial del raton
 * @param laberinto es la estructura que contiene todos los datoss
 */
void buscarQueso(matriz* laberinto,int fila, int columna){
    ImprimirMatriz(laberinto);
    Esperar(1);
    int limiteFilas = laberinto->filas-1;
    int limiteColumnas = laberinto->columnas-1;
    char izquierda='V';
    char derecha='V';
    char arriba='V';
    char abajo='V';
    char punto = '.';
    char raton = 'r';
    int paso=0;
    int f=fila;
    int c=columna;
    int posicionFAnterior = 0;
    int posicionCAnterior = 0;
    f=f-1;
    if (f>=0){
        arriba = *(*(laberinto->tablero+f)+c);
    }
    f=fila;
    f=f+1;
    if (f<=limiteFilas){
        abajo = *(*(laberinto->tablero+f)+c);
    }
    f=fila;
    c=c-1;
    if (c>=0){
        izquierda = *(*(laberinto->tablero+f)+c);
    }
    c=columna;
    c=c+1;
    if (c<=limiteColumnas){
        derecha = *(*(laberinto->tablero+f)+c);
    }
    c=columna;
    //caso basico cuando el queso esta al lado
    if ((izquierda == 'Q') || (derecha=='Q') || (arriba=='Q') || (abajo=='Q')){
        printf("\n\n");
        printf("Encontre el queso\n");
    }else{
        *(*(laberinto->tablero+f)+c) = punto;
        posicionFAnterior = laberinto->posicion[0];
        posicionCAnterior = laberinto->posicion[1];
        laberinto->posicion[0] = f;
        laberinto->posicion[1] = c; 
        if (arriba == ' '){
            paso=1;
            f=f-1;
        }else if (derecha == ' '){
            paso=2;
            c=c+1;
        }else if (abajo == ' '){
            paso=3;
            f=f+1;
        }else if (izquierda == ' '){
            paso=4;
            c=c-1;
        }//se uso un caracter asterisco para poder recorrer laberintos mas complicaados como el laberinto 2 de la carpeta resources
         //el cual tiene un blucle y caminos con mas de un caracter de espacio
        else if ((arriba == '.') && (posicionFAnterior != (f-1))){
            paso=5;
            *(*(laberinto->tablero+f)+c) = '*';
            f=f-1;
        }else if ((derecha == '.')&& (posicionCAnterior != (c+1))){
            paso=6;
            *(*(laberinto->tablero+f)+c) = '*';
            c=c+1;
        }else if ((abajo == '.') && (posicionFAnterior != (f+1))){
            paso=7;
            *(*(laberinto->tablero+f)+c) = '*';
            f=f+1;
        }else if ((izquierda == '.') && (posicionCAnterior != (c-1))){
            paso=8;
            *(*(laberinto->tablero+f)+c) = '*';
            c=c-1;
        }else if ((arriba == '*') && (posicionFAnterior != (f-1))){
            paso=9;
            *(*(laberinto->tablero+f)+c) = '*';
            f=f-1;
        }else if ((derecha == '*')&& (posicionCAnterior != (c+1))){
            paso=10;
            *(*(laberinto->tablero+f)+c) = '*';
            c=c+1;
        }else if ((abajo == '*') && (posicionFAnterior != (f+1))){
            paso=11;
            *(*(laberinto->tablero+f)+c) = '*';
            f=f+1;
        }else if ((izquierda == '*') && (posicionCAnterior != (c-1))){
            paso=12;
            *(*(laberinto->tablero+f)+c) = '*';
            c=c-1;
        }    
        *(*(laberinto->tablero+f)+c) = raton;
        buscarQueso(laberinto,f,c);
    }
    AgregarElemento(laberinto->pasos,paso);
}



/**
 * @brief Funcion que llena el tablero con los datos del laberinto
 * @param laberinto es la estructura que contiene todos los datos
 * @param Archivo es el arreglo que contien la ruta del archivo
 */
void LlenarTablero(matriz* laberinto, char** Archivo){
    //abrimos el archivo
    char caracter;
    char salto = '\n';
    char caracteresValidos[4]= {'#',' ','r','Q'};
    FILE* archivo;
    archivo = fopen(Archivo[1], "r");
    int f=0;
    int c=0;
    caracter = fgetc(archivo);
    while (caracter != -1){
        if ((caracter == caracteresValidos[0]) || (caracter == caracteresValidos[1]) || (caracter == caracteresValidos[2]) || caracter == caracteresValidos[3]){
            *(*(laberinto->tablero+f)+c) = caracter;
            c++;
            caracter = fgetc(archivo);
        }else if(caracter == salto){
            f++;
            c=0;
            caracter = fgetc(archivo);
        }else
        {
            caracter = fgetc(archivo);
        }
        
    }
    fclose(archivo);  

}

/**
 * @brief Funcion que revisa que el laberinto este escrito de forma correcta, ademas modifica el puntero del laberinto incluyendole las filas y columnas correcpondientes
 * @param laberinto es la estructura que contiene todos los datos
 * @param Archivo es el arreglo que contien la ruta del archivo
 * @return rspuesta es un indicador si el laberinto es correcto o no
 */
int VerificarLaberinto(matriz* laberinto, char** Archivo){
    int respuesta = 0;
    //abrimos el archivo
    FILE* archivo;
    archivo = fopen(Archivo[1], "r");
    int filas = 1;
    int columnas = -1;
    char salto = '\n';
    char caracter;
    int contador = 0;
    int comprobarFormato = 1;
    int comprobarDimensiones = 0;
    int comprobarDimensiondesDos = 0;
    char caracteresValidos[4]= {'#',' ','r','Q'};
    //vamos a recorrer un vez el laberinto para medir las dimensiones y para verificar que este en un formato correcto
    while (contador < 1){
        comprobarFormato = 1;
        caracter = fgetc(archivo);
        //verificamos que el caracter sea valido
        for (int i=0; i < 4; i++){
            if (caracter == caracteresValidos[i]){
                comprobarFormato = 0;
            }
            if (caracter == salto){
                comprobarFormato = 0;
            }
            if (caracter == 13){
                comprobarFormato = 0;
            }
            if (caracter == 10){
                comprobarFormato = 0;
            }
        
        }
        //si no es valido nos salimos del ciclo
        contador = comprobarFormato;
        if (caracter == salto){
            filas++;
            columnas = -1;
        }else{
            columnas++;
        }
        if(caracter == -1)
        {
            contador = 1;
        }
        if((caracter != -1) && (caracter != 13) && (caracter != 10)){
            comprobarDimensiones++;
        }
    }
    comprobarDimensiondesDos = filas * columnas;
    if (comprobarDimensiones == comprobarDimensiondesDos){
        respuesta = 1;
        laberinto->filas = filas;
        laberinto->columnas = columnas;
    }else{
        respuesta = 0;
    }
    fclose(archivo);
    return respuesta;
}