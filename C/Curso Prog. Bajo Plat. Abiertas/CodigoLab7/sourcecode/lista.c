/**
 * @file lista.c
 * @author Jesus Zuñiga Mendez
 * @brief Archivo que contiene las funciones para manipular listas
 */
#include "../include/includes.h"


/**
 * @brief Funcion que crea una lista vacia
 * @return ls es la lista que se acaba de crear; 
 */

lista* CrearLista(){
    lista* ls = (lista*) malloc (sizeof(lista));
    ls->items = 0;
    ls->primero = 0x0;
    return ls;
}


/**
 * @brief Funcion que elimina una lista
 * @param ls lista con la que se va a trabajar
 */

void EliminarLista(lista* ls){
    posicion* q;
    posicion* p = ls->primero;
    for (int i = 0; i < ls->items; i++){
        q = Siguiente(p);
        EliminarPosicion(p);
        p=q;
    }
    free(ls);
}

/**
 * @brief Funcion que agrega un elemento a la lista
 * @param ls lista con la que se va a trabajar
 * @param elemento elemento que se va a agregar
 */
void AgregarElemento(lista* ls, int elemnto){
    posicion* nuevaP= CrearPosision(elemnto);
    posicion* p = ls -> primero;
    if (p == 0x0){
        ls -> primero = nuevaP;
        nuevaP ->siguiente = 0x0;
        ls ->items++;
    }else{
        for (int i = 1; i< ls->items; i++){
            p = Siguiente(p);
        }
        p->siguiente= nuevaP;
        nuevaP ->siguiente = 0x0;
        ls->items++;        
    }
 

}

/**
 * @brief Funcion que imprime una lista
 * @param ls lista que se va a imprimir
 */
void ImprimirLista(lista* ls){
    posicion* p = ls->primero;
    for (int i = 0; i < ls->items-1; i++)
    {
        p = Siguiente(p);
    }
    
    for (int i = 0; i < ls->items; i++){
        switch (p->d)
        {
        case 1:
            printf("Arriba\n");
            break;
        case 2:
            printf("Derecha\n");
            break;
        case 3:
            printf("Abajo\n");
            break;
        case 4:
            printf("Izquierda\n");
            break;
        case 5:
            printf("Paso atras hacia Arriba\n");
            break;
        case 6:
            printf("Paso atras hacia la Derecha\n");
            break;
        case 7:
            printf("Paso atras hacia Abajo\n");
            break;
        case 8:
            printf("Paso atras hacia la Izquierda\n");
            break;
        case 9:
            printf("Paso atras hacia Arriba\n");
            break;
        case 10:
            printf("Paso atras hacia la Derecha\n");
            break;
        case 11:
            printf("Paso atras hacia Abajo\n");
            break;
        case 12:
            printf("Paso atras hacia la Izquierda\n");
            break;
        default:
            break;
        }
        p = Anterior(p, ls);
   }
   printf("\n");
}


