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
    
    lista** Estirar(lista**, int, int);
    lista* CrearLista();
    void ImprimirLista(lista*);
    void EliminarLista(lista*);
    void Vaciar(lista*);
    void AgregarElemento(lista*, int);
    void EliminarElemento(lista*, int);
    posicion* BuscarDato(lista*, int);
    int BuscarK(lista*, posicion*);
#endif 