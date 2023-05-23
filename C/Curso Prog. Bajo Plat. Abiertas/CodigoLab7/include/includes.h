#ifndef INCLUDES_H
#define INCLUDES_H
    typedef struct _posicion posicion;
    typedef struct _lista lista;

    typedef
    struct _matriz
    {
        char** tablero;
        int filas;
        int columnas;
        int semilla;
        int posicion[2];
        lista* pasos;
    }
    matriz;

    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include "./Laberinto.h"
    #include "./Recorrer.h"
    #include "./lista.h"
    #include "./posicion.h"
#endif