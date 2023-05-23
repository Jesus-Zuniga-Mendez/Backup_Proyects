#ifndef LISTA_H 
#define LISTA_H 
#include "includes.h"

    typedef
        struct _lista
        {
            unsigned int items;
            posicion* primero;  
        }
    lista;
    
    lista* CrearLista();
    void ImprimirLista(lista*);
    void EliminarLista(lista*);
    void AgregarElemento(lista*, int);
#endif 