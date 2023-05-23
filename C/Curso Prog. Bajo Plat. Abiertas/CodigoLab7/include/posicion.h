#ifndef POSICION1_H 
#define POSICION1_H 

#include "includes.h"
    typedef
        struct _posicion
        {
            int d;
            struct _posicion* siguiente;
        } 
    posicion;
    posicion* Siguiente(posicion*);
    posicion* Anterior(posicion*, lista*);
    posicion* CrearPosision(int);
    void EliminarPosicion(posicion*);

#endif 

