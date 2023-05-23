#ifndef ORDENAMIENTO_H
#define ORDENAMIENTO_H

#include "./Includes.h"

using namespace std;
// ...

SimplePosition<int> *MergeSort(SingleLinkedList<int, SimplePosition<int>>  * lista, int paso){
    // cout << "\n\nacomodando paso  " <<paso << endl;
    // cout << "imprimiendo lista de llegada---------" << endl;
    // lista->print();
    // cout << "-------------------------------------" << endl;
    int items = lista->items;
    SimplePosition<int> *primero = lista->first;
    SimplePosition<int> *medio = lista->first;
    SimplePosition<int> *control = lista->first;
    SingleLinkedList<int, SimplePosition<int>> mitadIzquierda;
    SingleLinkedList<int, SimplePosition<int>> mitadDerecha;
    SingleLinkedList<int, SimplePosition<int>> resultado;
    SingleLinkedList<int, SimplePosition<int>> resultadoFinal;
    resultado.first = 0x0;
    resultado.items = 0;
    SimplePosition<int> *controlResultado = 0x0;
    SimplePosition<int> *apuntadorRespaldo = 0x0;
    int valorMedio = 0;
    if (lista->items == 2){
        int valorUno = *lista->first->valor;
        int valorDos = *lista->first->siguiente->valor;
        SimplePosition<int> *posValorUno = lista->first;
        SimplePosition<int> *posValorDos = lista->first->siguiente;
        if (valorUno >= valorDos){
            resultado.first = posValorDos;
            resultado.first->siguiente = posValorUno;
            resultado.first->siguiente->siguiente = 0x0;
            return resultado.first;
        }else{
            resultado.first = posValorUno;
            resultado.first->siguiente = posValorDos;
            resultado.first->siguiente->siguiente = 0x0;
            return resultado.first;
        }
        
    }else if (lista->items > 2){
        valorMedio = lista->items - (lista->items / 2);
        for (int i = 1; i < valorMedio; i++){
            medio = medio->siguiente;
            control = control->siguiente;
            if (i == (valorMedio - 1)){
                medio = medio->siguiente;
                control->siguiente = 0x0;
            }
        }
        mitadIzquierda.items = valorMedio;
        mitadIzquierda.first = primero;
        mitadDerecha.items = items - valorMedio;
        mitadDerecha.first = medio;
        paso ++;
        apuntadorRespaldo = MergeSort(&mitadIzquierda,paso);
        if (resultado.items == 0){
            resultado.first = apuntadorRespaldo;
            resultado.actualizarItems();
        }else{
            controlResultado = resultado.ultimo();
            resultado.insert(apuntadorRespaldo,controlResultado);
            resultado.actualizarItems();
        }
        apuntadorRespaldo = MergeSort(&mitadDerecha,paso);
        if (resultado.items == 0){
            resultado.first = apuntadorRespaldo;
            resultado.actualizarItems();
        }else{
            controlResultado = resultado.ultimo();
            resultado.insert(apuntadorRespaldo,controlResultado);
            resultado.actualizarItems();
        }
    }else if(lista->items == 1){
        return lista->first;
    }
    else{
        cout << "Merge sort la lista no tiene elementos para acomodar" << endl;
    }
    cout << "asi va la lista al final del recorrido" << endl;
    resultado.print();


    int mitad = resultado.items - (resultado.items / 2);
    // int itemsIzquierda = resultado.items - (resultado.items / 2);
    // int itemsDerecha = (resultado.items / 2);
    SimplePosition<int> *primeraLadoIzquierdo = resultado.first;
    SimplePosition<int> *primeraLadoDerecho = resultado.first;
    for (int i = 0; i < mitad; i++){
        primeraLadoDerecho = primeraLadoDerecho->siguiente;
    }
    SimplePosition<int> *respaldoPrimeraLadoDerecho = primeraLadoDerecho;
    int seguir = 0;
    int final = 0;
    cout << "voy al while" << endl;
    while (seguir < 2){
        cout << "primera izquierda " << *primeraLadoIzquierdo->valor << endl;
        cout << "primera derecha " << *primeraLadoDerecho->valor << endl;
        if (final == 0){
            if (*primeraLadoIzquierdo->valor <= *primeraLadoDerecho->valor){
                cout << "if uno" << endl;
                resultadoFinal.insert(*primeraLadoIzquierdo->valor);
                if (primeraLadoIzquierdo->siguiente != respaldoPrimeraLadoDerecho){
                    cout << "if dos" << endl;
                    primeraLadoIzquierdo = primeraLadoIzquierdo->siguiente;
                }else{
                    cout << "else dos" << endl;
                    final = 1;
                    seguir++;
                }
            }else{
                cout << "else uno" << endl;
                resultadoFinal.insert(*primeraLadoDerecho->valor);
                if (primeraLadoDerecho->siguiente != 0x0){
                    cout << "if tres" << endl;
                    primeraLadoDerecho = primeraLadoDerecho->siguiente;
                }else{
                    cout << "else tres" << endl;
                    final = 2;
                    seguir++;
                }
            }
        }else{
            seguir++;
            if (final == 1){
                resultadoFinal.insert(*primeraLadoDerecho->valor);
            }else{
                resultadoFinal.insert(*primeraLadoIzquierdo->valor);
            }

        }
    }
    cout << "asi va la lista ACOMODADA al final del recorrido" << endl;
    resultadoFinal.print();
    return resultadoFinal.first;
}
#endif