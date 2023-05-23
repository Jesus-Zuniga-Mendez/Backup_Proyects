/**
 * @file matriz.c
 * @brief Archivo que contiene las funciones relacionadas a las matrices
 */
#include "../incl/matriz.h"
/**
 * @brief Funcion que crea una matriz del tamaño deseado por el usuario
 * @param filas es el tamaño de filas de la matriz
 * @param columnas es el tamaño de columnas de la matriz
 * @return devuelve un puntero con la matriz creada
 */
float** CrearMatriz (int filas, int columnas){
    //creamos el puntero con "forma de matriz" y le asignamos el tamaño a las filas
    float** matriz = (float**) malloc(filas * sizeof(float*));
    //este ciclo toma el puntero lo "recorre" por filas y le asigna el tamaño de las columnas 
    for (int i = 0; i < filas; i++){
        *(matriz+i) = (float*) malloc(columnas * sizeof(float));
    } 
    return matriz;
}
/**
 * @brief Funcion que permite imprimir una matriz
 * @param recibe un puntero a la matriz el numero de filas y de columnas
 * @return no devuelve ningun valor
 */
void ImprimirMatriz(float** matriz,int filas, int columnas){
    float numero = 0;
    printf("\n\n\n");
    for(int f = 0; f < filas; f++){
        for(int c = 0; c < columnas; c++){
            numero = *(*(matriz+f)+c);
            printf("%f     ",numero);
        }
    printf("\n"); 
    }   
}
/**
 * @brief Funcion que permite llenar una matriz
 * @param recibe un puntero a la matriz el numero de filas y de columnas
 * @return devuelve la matriz llena
 */
float** LlenarMatriz(float** matriz,int filas, int columnas){
    float numero = 0;
    int s = 0;
    for(int f = 0; f < filas; f++){
        for(int c = 0; c < columnas; c++){
            printf("Digite la fila %d, columna %d\n",(f+1),(c+1));
            s = scanf("%f",&numero);
            *(*(matriz+f)+c) = numero;
        }
    }
    return matriz;
}
/**
 * @brief Funcion que permite limpiar una matriz, es decir llenarla de ceros
 * @param recibe un puntero a la matriz el numero de filas y de columnas
 * @return devuelve la mnatriz llena
 */
float** LimpiarMatriz(float** matriz,int filas, int columnas){
    float numero = 0;
    for(int f = 0; f < filas; f++){
        for(int c = 0; c < columnas; c++){
            *(*(matriz+f)+c) = numero;
        }
    }
    return matriz;
}
/**
 * @brief Funcion que permite sumar dos matrices
 * @param recibe un puntero a cada una de las matrices y el tamaño en filas y columnas del mismo
 * @return devuelve la mnatriz sumada
 */
float** SumarMatrices(float** matrizA,float** matrizB,int filas, int columnas){
    float numero = 0;
    float** matrizResultado = matrizA;
    for(int f = 0; f < filas; f++){
        for(int c = 0; c < columnas; c++){
            numero = *(*(matrizA+f)+c) + *(*(matrizB+f)+c);
            *(*(matrizResultado+f)+c) = numero;
        }
    }
    return matrizResultado;
}
/**
 * @brief Funcion que permite multiplicar dos matrices
 * @param recibe un puntero a cada una de las matrices y el tamaño en filas y columnas del mismo
 * @return devuelve la mnatriz multiplicada
 */
float** MultiplicarMatrices(float** matrizA,float** matrizB,int filasA, int columnasA,int filasB, int columnasB){
    float numero = 0;
    int filasR = filasA;
    int columnasR = columnasB;
    float** matrizResultado = CrearMatriz(filasR,columnasR);
    float** filaMatrizA = CrearMatriz(1,columnasA);
    float** columnaMatrizB = CrearMatriz(1,columnasA);
    float** filaMatrizR = CrearMatriz(1,columnasR);
    //se hace el calculo de lo que va en la entrada correspondiente de la mariz resultado
    for(int fmA = 0; fmA < filasA; fmA++){
        for(int cmA = 0; cmA < columnasA; cmA++){
            //llenamos el "vector" con la fila de la matriz A con la que vamos a trabajar
            *(*(filaMatrizA)+cmA) = *(*(matrizA+fmA)+cmA);
        }
        for (int cmB = 0; cmB < columnasB; cmB++){
            //recorremos la matriz b por columnas para ir sacando cada columna
            for (int fmB = 0; fmB < filasB; fmB++){
                //recorremos la matriz b por filas  sacando cada columna
                *(*(columnaMatrizB)+fmB) = *(*(matrizB+fmB)+cmB);
            }
            //despues de tener la fila y la columna para trabajar calculamos la entrada de la nueva matriz
            for (int eV = 0; eV < columnasA; eV++){
                numero = numero + (*(*(filaMatrizA)+eV) * *(*(columnaMatrizB)+eV));
            }    
            //asignamos el valor de numero al "vector" que tendra los datos de cadafila de la matriz resultado y limpiamos
            *(*(filaMatrizR)+cmB) = numero;
            numero = 0;
        }
        //asignamos lo calculado a la matriz resultado
        for (int cmR=0; cmR < columnasR; cmR++){            
            *(*(matrizResultado+fmA)+cmR) = *(*(filaMatrizR)+cmR);
        }
    }
    free(filaMatrizA);
    free(filaMatrizR);
    free(columnaMatrizB);
    return matrizResultado;
}
/**
 * @brief Funcion que suma un escalar a ua matriz
 * @param recibe un puntero a la matriz y el escalar
 * @return devuelve la mnatriz sumada
 */
float** SumarEscalar(float** matriz,int filas, int columnas,float escalar){
    float** matrizResultado = matriz;
    for(int f = 0; f < filas; f++){
        for(int c = 0; c < columnas; c++){
            *(*(matrizResultado+f)+c) = *(*(matrizResultado+f)+c) + escalar;
        }
    }
    return matrizResultado;
}
/**
 * @brief Funcion que multiplica un escalar a ua matriz
 * @param recibe un puntero a la matriz y el escalar
 * @return devuelve la mnatriz sumada
 */
float** MultiplicarEscalar(float** matriz,int filas, int columnas,float escalar){
    float** matrizResultado = matriz;
    for(int f = 0; f < filas; f++){
        for(int c = 0; c < columnas; c++){
            *(*(matrizResultado+f)+c) = *(*(matrizResultado+f)+c) * escalar;
        }
    }
    return matrizResultado;
}
/**
 * @brief Funcion que transpone una matriz
 * @param recibe un puntero a la matriz, las filas y las columnas
 * @return devuelve la mnatriz traspuesta
 */
float** Transpuesta(float** matriz,int filas, int columnas){
    int filasR = columnas;
    int columnasR = filas;
    float** matrizResultado = CrearMatriz(filasR,columnasR);
    for(int f = 0; f < filas; f++){
        for(int c = 0; c < columnas; c++){
            *(*(matrizResultado+c)+f) = *(*(matriz+f)+c);
        }
    }
    return matrizResultado;
}