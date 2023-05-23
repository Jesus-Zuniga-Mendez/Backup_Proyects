#ifndef METODOS_H
#define METODOS_H
#include "./Includes.h"

template<typename Data, typename Position>

//#@brief Metodo de busqueda lineal que pasa por todos los elementos de la lista
//#@param Recibe un puntero al objeto que desea editarse

void BusquedaLineal(ArrayList<Data, Position> *Milista){
    Data dato;
    std::cout<<"Ingrese el elemento que busca";
    std::cin>>dato;
    int cantidad_elem=0;
    int ultpos;
		    int elem_encontrados;
            for (int i=0; i<(Milista->items_activos); i++){
                if (Milista->arreglo[i]==dato){
                    cantidad_elem++;
                    ultpos=i+1;
                }
            }
            std::cout<<"Se encontro el elemento "<<cantidad_elem<<" veces"<<std::endl<<"Ultima posicion conocida: "<<ultpos;
}



template<typename Data, typename Position>
//#@brief Metodo de busqueda binaria que divide en mitades los intervalos
//#@param Recibe un puntero al objeto que desea editarse

void BusquedaBinaria(ArrayList<Data, Position> *Milista){
    Data dato;
    std::cout<<"Ingrese el elemento que busca";
    std::cin>>dato;
    int intervalo = (Milista->items_activos)/2;
    if (dato==Milista->arreglo[intervalo]){
        std::cout<<std::endl<<"Encontrado en la posicion: "<<intervalo;
    }
    if (dato>Milista->arreglo[intervalo]){
        intervalo = (intervalo)/2;

    }
    if (dato<Milista->arreglo[intervalo]){
        intervalo = (intervalo)/2;
    }
}





template<typename Data, typename Position>

//#@brief Metodo de ordenamiento de burbuja
//compara entre dos elementos cual es el mayor y los ordena de menor a mayor
//#@param Recibe un puntero al objeto que desea editarse

void BubbleSort(ArrayList<Data, Position> *Milista){

        int cambio=0; //Si se cambia su valor, indica que hubo un cambio al reordenar la lista
        Data temp;
        Data temp2;
        while(cambio==0){
            for (int i=0; i<Milista->items_activos-1; i++){
                if (Milista->arreglo[i]>Milista->arreglo[i+1]){
                    temp=Milista->arreglo[i];
                    temp2=Milista->arreglo[i+1];
                    Milista->arreglo[i]=temp2;
                    Milista->arreglo[i+1]=temp;
                    cambio++;
                }
            }
            if (cambio!=0){
               cambio=0;
            }else{
                cambio=1;
            }
        }
}

#endif