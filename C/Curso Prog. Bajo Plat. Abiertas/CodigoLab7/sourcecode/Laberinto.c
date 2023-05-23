/**
 * @file Laberinto.c
 * @author Jesus Zuñiga Mendez
 * @brief Archivo que contiene las funciones para Crear un laberinto
 */

#include "../include/includes.h"

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



/**
 * @brief Funcion que crea una matriz del tamaño deseado por el usuario
 * @param filas es el tamaño de filas de la matriz
 * @param columnas es el tamaño de columnas de la matriz
 * @return devuelve un puntero con la matriz creada
 */
char** CrearTablero (int filas, int columnas){
    //creamos el puntero con "forma de matriz" y le asignamos el tamaño a las filas
    char** matriz = (char**) malloc(filas * sizeof(char*));
    //este ciclo toma el puntero lo "recorre" por filas y le asigna el tamaño de las columnas 
    for (int i = 0; i < filas; i++){
        *(matriz+i) = (char*) malloc(columnas * sizeof(char));
    } 
    return matriz;
}



/**
 * @brief Funcion que detiene la ejecucion cierta cantidad de segundos
 * @param tiempo el el tiempo en espera en segundos
 * codigo recuperado de https://stackoverflow.com/questions/7684359/how-to-use-nanosleep-in-c-what-are-tim-tv-sec-and-tim-tv-nsec presentado con modificaciones
 */
void Esperar(float segundos){
    struct timespec tim, tim2;
    tim.tv_sec = segundos;
    if(nanosleep(&tim , &tim2) < 0 )   
    {
        Esperar(segundos);
    }

}

/**
 * @brief Funcion que llena una metriz de simbolos de # exeptuando las filas y columnas externas las cuales llena con espacio vacio
 * @param recibe un puntero a la estructura matriz
 */
void LlenarGatos(matriz* laberinto){
    char gato = '#';
    char neutro = 'N';
    for(int f = 0; f < laberinto->filas; f++){
        for(int c = 0; c < laberinto->columnas; c++){
            if ((f == 0) || (c==0) || (f==(laberinto->filas-1)) || (c==(laberinto->columnas-1))){
                //*(*(laberinto->tablero+f)+c) = neutro;
                *(*(laberinto->tablero+f)+c) = gato;
            }else
            {
                *(*(laberinto->tablero+f)+c) = gato;
            }
            
        }
    }   
}


/**
 * @brief Funcion que permite imprimir una matriz
 * @param recibe un puntero a la matriz
 */
void ImprimirMatriz(matriz* laberinto){
    char simbolo = ' ';
    printf("\n\n\n");
    for(int f = 0; f < laberinto->filas; f++){
        for(int c = 0; c < laberinto->columnas; c++){
            simbolo = *(*(laberinto->tablero+f)+c);
            if (simbolo == '#'){
                printf(ANSI_COLOR_BOLD_GREEN"");
            }
            if (simbolo == ' '){
                printf(ANSI_COLOR_RESET"");
            }
            if (simbolo == '.'){
                printf(ANSI_COLOR_YELLOW"");
            }
            if (simbolo == '*'){
                simbolo = '.';
                printf(ANSI_COLOR_YELLOW"");
            }
            if (simbolo == 'Q'){
                printf(ANSI_COLOR_BOLD_YELLOW"");
            }
            if (simbolo == 'r'){
                printf(ANSI_COLOR_RESET"");
            }
            printf("%c"ANSI_COLOR_RESET,simbolo);
        }
    printf("\n"); 
    }   
}


/**
 * @brief Funcion que escribe un caracter en una coordenada indicada 
 * @param laberinto es la estructura tipo matriz que contiene la matriz de caracteres
 * @param caracter es el caracter que se quiere escribir
*/
void EscribirCaracter(matriz* laberinto, char caracter){
    int fila = laberinto->posicion[0];
    int columna = laberinto->posicion[1];
    *(*(laberinto->tablero+fila)+columna) = caracter;
}


/**
 * @brief Funcion que guarda una matriz en un archivo 
 * @param laberinto es la estructura tipo matriz que contiene la matriz de caracteres
*/
void GuardarLaberinto(matriz * laberinto)
{
    int s = 0;
    char nombre[128];
    char simbolo = ' ';
    FILE* f_out;
    printf("Digite el nombre del laberinto nuevo.\n");
    s = scanf("%s",nombre);
    f_out = fopen(nombre, "w");
    for(int f = 0; f < laberinto->filas; f++){
        for(int c = 0; c < laberinto->columnas; c++){
            simbolo = *(*(laberinto->tablero+f)+c);
            fprintf(f_out, "%c",simbolo);
        }
    fprintf(f_out, "\n");
    }
    fclose(f_out);
}


/**
 * @brief Funcion que crea el camino principal es decir el camino ganador aleatoriamente 
 * @param laberinto es la estructura tipo matriz que contiene la matriz de caracteres
*/
void HacerCamino(matriz* laberinto){
    //primero dibujamos una coordenada aleatoria que es desde donde se empieza a dibjar el camino
    int f =0;
    int c = 1;
    //primero nos ubicamos en una coordenada aleatoria para ubicar el caracter
    laberinto->posicion[f] = (rand() + laberinto->semilla) % (laberinto->filas);
    laberinto->posicion[c] = (rand() + laberinto->semilla) % (laberinto->columnas);
    //verificamos que no sea un numero negativo y si lo es lo hacemos positivo
    if (laberinto->posicion[f]<0){
        laberinto->posicion[f]=laberinto->posicion[f]*-1;
    }
    if (laberinto->posicion[c]<0){
        laberinto->posicion[c]=laberinto->posicion[c]*-1;
    }
    //verificamos que el numero se encuentre entre los limites, un limite es la segunda columna o fila o la enesima columna menos dos
    //si se pasa de los limites lo colocamos en el centro del laberinto
    if ((laberinto->posicion[f]<1) || (laberinto->posicion[f]>(laberinto->filas-2))){
        laberinto->posicion[f]=(int)laberinto->filas/2;
    }
    if ((laberinto->posicion[c]<1) || (laberinto->posicion[c]>(laberinto->columnas-2))){
        laberinto->posicion[c]=(int)laberinto->columnas/2;
    }
    EscribirCaracter(laberinto, ' ');

    //despues de esto vamos a empezar a dibujar el camino a partir de esta posicion 
    int parar = 0;
    int lado = 0;
    int mover = 0;
    //pedimos una direccion para dibujar
    //despues vamoa a empezar a dibujar el camino a partir de la entrada
    while(parar != 1){
        laberinto->semilla = ((rand() + laberinto->semilla) % 4);
        lado = laberinto->semilla;
        mover = MePuedoMover(laberinto, lado);
        if (lado == 0){
            //vamos a movernos a la izquirda
            
        }else if (lado == 1){
            //vamos a movernoas a la derecha
        }else if (lado == 2){
            //vamos a movernoas a arriba
        }else if (lado == 3){
            //vamos a movernoas abajo
        }
    }
}

/**
 * @brief Funcion que verifica que se cumplan los requisitos para moverse
 * @param laberinto es la estructura tipo matriz que contiene la matriz de caracteres
 * Qparam lado es la direccion, 0 = izquirda, 1= derecha, 2= arriba, 3= abajo
*/
int MePuedoMover(matriz* laberinto, int lado){
    int respuesta = 0;
    /*if (lado == 0){
        //vamos a movernos a la izquirda
    }else if (lado == 1){
        //vamos a movernoas a la derecha
    }else if (lado == 2){
        //vamos a movernoas arriba
    }else if (lado == 3){
        //vamos a movernoas abajo
    }*/
    return respuesta;
}













/**
 * @brief Funcion que genera un numero aleatorio
 * @param limite es el numero mayor generado por la funcion
 * @return devuelve el numero generado
 *//*/
int NumeroRandom(int limite)
{
    int resultado; 
    time_t t;
    /* Intializes random number generator */
   /*/ srand((unsigned) time(&t));
    resultado = (rand() % limite);
    return resultado;
}

/**
 * @brief Funcion que genera un numero aleatorio sea -1 o 1 a partir de una semilla
 * @param semilla es el numero generador del random
 * @return devuelve el numero generado
 *//*/
int NumeroRandomSemilla(int semilla)
{
    int numero = (rand() * semilla) % 2;
    if (numero==0){
        numero = -1;
    }else{
        numero = 1;
    }
    return numero;
}




/**
 * @brief Funcion que crea el camino principal es decir el camino ganador aleatoriamente 
 * @param laberinto es la estructura tipo matriz que contiene la matriz de caracteres
*//*/
int* DibujarEntrada (matriz* laberinto){
    int f =0;
    int c = 1;
    laberinto->posicion[f]=0;
    laberinto->posicion[c]=0;
    //primero vamos a dibujas la entrada del laberinto, para esto pedimos un numero aleatorio entre 0 y 1 para ubicarnos en la esquina superior 
    //o en la inferior derecha
    int a = NumeroRandom(2); 
    if (a == 0){
        laberinto->posicion[f] = 0;
        laberinto->posicion[c] = 0;
    }else if (a <= 1){
        laberinto->posicion[f] = laberinto->filas - 1;
        laberinto->posicion[c] = laberinto->columnas - 1;
    }
    //buscamos un numero -1 ó 1 para definir si nos movemos en filas o columnas
    a = NumeroRandomSemilla(laberinto->semilla);
    if (a ==-1 ){
        //sumamos a filas para eso generamos un aleatorio que va a ser la cantidad de campos que se va a mover
        a = ((rand() * laberinto->semilla) % (laberinto->filas));
        //evitamos que se quede en las esquinas
        if ((a<2) || (a > (laberinto->posicion[f] - 2))){
            a = 2;
        }
        //forzamos a que sea positivo
        a = (a*a) / 2;
        if (laberinto->posicion[f] == 0){
            laberinto->posicion[f] = laberinto->posicion[f]+a;
        }else{
            laberinto->posicion[f] = laberinto->posicion[f]-a;
        }
    }else{
        //sumamos a columnas para eso generamos un aleatorio que va a ser la cantidad de campos que se va a mover
        a = ((rand() * laberinto->semilla) % (laberinto->columnas));
        //evitamos que se quede en las esquinas
        if ((a<2) || (a > (laberinto->posicion[c] - 2))){
            a = 2;
        }
        //forzamos a que sea positivo
        a = (a*a) / 2;
        if (laberinto->posicion[c] == 0){
            laberinto->posicion[c] = laberinto->posicion[c]+a;
        }else{
            laberinto->posicion[c] = laberinto->posicion[c]-a;
        }
    }
    //dibujamos la entrada
    EscribirCaracter(laberinto,' ');
}
/**
 * @brief Funcion que crea el camino principal es decir el camino ganador aleatoriamente 
 * @param laberinto es la estructura tipo matriz que contiene la matriz de caracteres
*//*/
void HacerCamino(matriz * laberinto)
{
    //dibujamos la entrada
    DibujarEntrada(laberinto);
    //despues vamoa a empezar a dibujar el camino a partir de la entrada
    int parar = 0;
    int lado = 0;
    int mover = 0;
    while(parar != 1){
        laberinto->semilla = ((rand() + laberinto->semilla) % 4);
        lado = laberinto->semilla;
        mover = MePuedoMover(lado);
        if (lado == 0){
            //vamos a movernos a la izquirda
            
        }else if (lado == 1){
            //vamos a movernoas a la derecha
            mover = MePuedoMover(lado);
        }else if (lado == 2){
            //vamos a movernoas a arriba
            mover = MePuedoMover(lado);
        }else if (lado == 3){
            //vamos a movernoas abajo
            mover = MePuedoMover(lado);
        }
    }
}






/**
 * @brief Funcion que crea el camino principal es decir el camino ganador aleatoriamente 
 * @param laberinto es la estructura tipo matriz que contiene la matriz de caracteres
*//*/
void DibjarCoordenadaAleatoria(matriz *laberinto, char caracter){
    int f =0;
    int c = 1;
    //primero nos ubicamos en una coordenada aleatoria para ubicar el caracter
    laberinto->posicion[f] = (rand() * laberinto->semilla) % (laberinto->filas);
    laberinto->posicion[c] = (rand() * laberinto->semilla) % (laberinto->columnas);
    //verificamos que no sea un numero negativo y si lo es lo hacemos positivo
    if (laberinto->posicion[f]<0){
        laberinto->posicion[f]=laberinto->posicion[f]*-1;
    }
    if (laberinto->posicion[c]<0){
        laberinto->posicion[c]=laberinto->posicion[c]*-1;
    }
    //verificamos que el numero se encuentre entre los limites, un limite es la segunda columna o fila o la enesima columna menos dos
    //si se pasa de los limites lo colocamos en el centro del laberinto
    if ((laberinto->posicion[f]<1) || (laberinto->posicion[f]>(laberinto->filas-2))){
        laberinto->posicion[f]=(int)laberinto->filas/2;
    }
    if ((laberinto->posicion[c]<1) || (laberinto->posicion[c]>(laberinto->columnas-2))){
        laberinto->posicion[c]=(int)laberinto->columnas/2;
    }
    EscribirCaracter(laberinto, caracter);
}*/




/**
 * @brief Funcion que crea el camino principal es decir el camino ganador aleatoriamente 
 * @param laberinto es la estructura tipo matriz que contiene la matriz de caracteres
*//*/
int MePuedoMover(matriz* laberinto, int lado){
        int respuesta = 0;
        int fila = laberinto->posicion[0];
        int columna = laberinto->posicion[1];
        int limitefila = laberinto->filas-1;
        int limitecolumna = laberinto->columnas-1;
        int x = 0;
        int y = 0;
        char caracter = ' '; 
        char caractervecino = ' ';
        if (lado == 0){
            x = columna - 1;
            if (x>1){
                caracter = *(*(laberinto->tablero+fila)+x); 
                if (caracter == #){
                    y = fila -1;
                    if ( y>1){
                        caractervecino = *(*(laberinto->tablero+y)+x);
                        if (caractervecino == #){
                            y = fila + 1;
                            if (y < (limitefila-1)){
                                caractervecino = *(*(laberinto->tablero+y)+x);
                                if (caractervecino == #){
                                    respuesta = 1;
                                }
                            } 
                        } 
                    }
                }
            }
        }else if (lado == 1){
            x = columna + 1;
            if (x<(limitecolumna -1)){
                caracter = *(*(laberinto->tablero+fila)+x); 
                if (caracter == #){
                    y = fila -1;
                    if ( y>1){
                        caractervecino = *(*(laberinto->tablero+y)+x);
                        if (caractervecino == #){
                            y = fila + 1;
                            if (y < (limitefila-1)){
                                caractervecino = *(*(laberinto->tablero+y)+x);
                                if (caractervecino == #){
                                    respuesta = 1;
                                }
                            } 
                        } 
                    }
                }
            }
        }else if (lado == 2){
            y = fila - 1;
            if (y < (limitecolumna -1)){
                caracter = *(*(laberinto->tablero+fila)+x); 
                if (caracter == #){
                    y = fila -1;
                    if ( y>1){
                        caractervecino = *(*(laberinto->tablero+y)+x);
                        if (caractervecino == #){
                            y = fila + 1;
                            if (y < (limitefila-1)){
                                caractervecino = *(*(laberinto->tablero+y)+x);
                                if (caractervecino == #){
                                    respuesta = 1;
                                }
                            } 
                        } 
                    }
                }
            }
        }else if (lado == 3){

        }
        return respuesta;
}*/