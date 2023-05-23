/**
 * @file lista.c
 * @author Jesus Zuñiga Mendez
 * @brief Archivo que contiene las funciones para manipular listas
 */
#include "../include/includes.h"

/**
 * @brief Funcion que agranda la lista que contienen las demas listas
 * @return listaViejo es la lista que se acaba de crear con un espacio mas
 * @param listaAnterior es la lista original
 * @param tamanioViejo es la cantidad de listas que existian antes de estirar
 * @param TamanioNuevo es el nuevo numero de listas  
 */

lista** Estirar(lista** listaAnterior, int tamanioViejo, int tamanioNuevo){
    lista** nuevaLista = (lista**) malloc(tamanioNuevo * sizeof(lista));
    for(int i = 0; i < tamanioViejo; i++)
    {
        nuevaLista[i] = listaAnterior[i];
    }
    free(listaAnterior);
    listaAnterior = nuevaLista;
    return listaAnterior;
}


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
 * @brief Funcion que llena una lista de ceros
 * @param ls lista con la que se va a trabajar
 */
void Vaciar(lista* ls){
    posicion* p = ls->primero;
    for (int i = 0; i< ls->items; i++){
        p->d = 0;
        p = Siguiente(p);
    }

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
 * @brief Funcion que elimina un elemnto de la lista
 * @param ls lista con la que se va a trabajar
 * @param elemento elemento que se va a quitar
 */
void EliminarElemento(lista* ls, int elemento){
    posicion* p = ls -> primero;
    posicion* anterior = Anterior(p,ls);
    int contador = 1;
    if (p == 0x0){
        printf("La lista esta vacia, no hay elemntos que eliminar\n");
    }else{
        while (contador <= ls->items){
            printf("contador %d\tvalor %d\tls->items %d\n",contador,p->d,ls->items);
            if (p->d == elemento){
                if (contador==1){
                    printf("borre al inicio\n");
                    ls->primero = Siguiente(p);
                    EliminarPosicion(p);
                    p=ls->primero;
                    anterior = Anterior(p,ls);
                    ls->items--;
                }else{
                    printf("borre al medio\n");
                    anterior->siguiente = Siguiente(p);
                    EliminarPosicion(p);
                    p=anterior->siguiente;
                    ls->items--;
                    if (ls->items < 1){
                        ls->primero = 0x0;
                    }
                }
            }else{
                contador++;
                p = Siguiente(p);
                anterior=Anterior(p,ls);
            }
        }     
    }  
}
/**
 * @brief Funcion que imprime una lista
 * @param ls lista que se va a imprimir
 */
void ImprimirLista(lista* ls){
    posicion* p = ls->primero;
    for (int i = 0; i < ls->items; i++){
        printf("%d  ", p->d);
        p = Siguiente(p);
   }
   printf("\n");
}
/**
 * @brief Funcion que busca un dato en la lista
 * @param ls lista donde se va a buscar
 * @param dato es el dato que se va a buscar
 */
posicion* BuscarDato(lista* ls, int dato){
    int contadorDatos=0;
    posicion* p = ls->primero;
    posicion* laPosicion = 0x0;
    for (int i = 1; i <= ls->items; i++){
        if (p->d == dato){
            contadorDatos++;
            laPosicion = p;
        }
        p = Siguiente(p);
   }
   p = ls->primero;
   if (contadorDatos>1){
       printf("Se encontraron %d coincidencias\n",contadorDatos);
        for (int i = 1; i <= ls->items; i++){
            if (p->d == dato){
                printf("Se encontraron coincidencias en la direccion %p\n",p);
            }
            p = Siguiente(p);
        }
        laPosicion = 0x0;
   }
   return laPosicion;
}
/**
 * @brief Funcion que busca una posicion dentro de la lista
 * @param ls lista donde se va a buscar
 * @param laPosicion es la posicion que se va a buscar
 */
int BuscarK(lista* ls,posicion* laPosicion){
    int dato=0;
    posicion* p = ls->primero;
    for (int i = 1; i <= ls->items; i++){
        if (p==laPosicion){
            dato=p->d;
        }
        p = Siguiente(p);
   }
   return dato;
}

