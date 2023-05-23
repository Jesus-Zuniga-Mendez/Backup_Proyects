/**
 * @file posicion.c
 * @author Jesus Zuñiga Mendez
 * @brief Archivo que contiene las funciones para manipular las posiciones de una ñista
 */
#include "../include/includes.h"
/**
 * @brief Funcion que devuelve la posicion siguiente de una lista
 * @param p posicion inicial
 */
posicion* Siguiente(posicion* p){
    posicion* Np = p->siguiente;
    return Np;
}
/**
 * @brief Funcion que devuelve la posicion anterior de una lista
 * @param p posicion inicial
 * @param ls lista en la que se va a buscar
 */
posicion* Anterior(posicion* p, lista* ls){
    posicion* anterior=ls->primero;
    posicion* actual = ls-> primero;
    if (actual != 0x0){
        for (int i=1; i<= ls->items; i++){
            if (actual == p){
                i=ls->items;
            }else
            {
                anterior = actual;
                actual = actual->siguiente;
            }

        }
    }
    return anterior;
}
/**
 * @brief Funcion que crea una posicion vacia
 * @param dato Es el dato que se ve a agregar
 */
posicion* CrearPosision(int dato){
    posicion* p = (posicion*) malloc(sizeof(posicion));
    p->d= dato;
    return p;
}
/**
 * @brief Funcion que elimina una poicion
 * @param p es el posicion que se ve a eliminar
 */
void EliminarPosicion(posicion* p){
    free(p);
}
