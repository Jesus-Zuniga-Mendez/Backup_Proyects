#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include "./Includes.h"
#include <stdio.h>

using namespace std;
// ...
template <typename Data , typename TypeNodo >
    class BinarySearchTree{
        public :
            ClassNode<Data> *lastwo;
            ClassNode<Data> *raizgeneral;


            BinarySearchTree(){

            };
            ~BinarySearchTree(){

            };

            TypeNodo &insert (const Data &dato)
            {
                //cout << "dato recibido " << dato.dato << endl;
                //cout << "cantidad items " << this->items << endl;
                if (this->items == 0)
                {
                    raiz = new ClassNode<Data>(new Data(dato));
                    this->items++;
                    //cout << "sume un item " << this->items << endl;
                }
                else
                {
                    ClassNode<Data> *last = raiz;
                    cout<<endl<<"Esta es la raiz"<<raiz<<endl;
                    raizgeneral=raiz;
                    int continuar = 0;
                    while (continuar == 0)
                    {
                        if (dato.dato > ~ *last->valor){
                            if (last->HijoDerecho == 0x0){
                                last->HijoDerecho = new ClassNode<Data>(new Data(dato));
                                this->items++;
                                continuar++;
                                return *(last->HijoDerecho);
                            }else{
                                last = last->HijoDerecho;
                            }
                        }else{
                            if (last->HijoIzquierdo == 0x0){
                                last->HijoIzquierdo = new ClassNode<Data>(new Data(dato));
                                this->items++;
                                continuar++;
                                return *(last->HijoIzquierdo);
                            }else{
                                last = last->HijoIzquierdo;
                            }
                        }
                    }
                }
                //cout << "la memoria de la raiz " << this->raiz << endl;
                //cout << "el valor de la raiz " << ~ *this->raiz->valor << endl;
                //cout << "sali con esta cantidad de items " << this->items << endl;
                return *raiz;
            };



            /**
             * @brief Funcion que devuelve el hijo mas grande a la izquierda
             */
            TypeNodo *largesToTheLeft ( TypeNodo &nodoInicial){
                ClassNode<Data> *actual;
                actual = &nodoInicial;
                //cout << "el valor de actual es " << ~  *actual->valor << endl;
                if (actual -> HijoIzquierdo != 0x0){
                    actual = actual -> HijoIzquierdo;
                    int continuar = 0;
                    while (continuar == 0){
                        if (actual -> HijoDerecho != 0x0){
                            actual = actual ->HijoDerecho;
                        }else{
                            continuar = 1;
                        }
                    }
                }
                return actual;
            };

            /**
             * @brief Funcion que devuelve el hijo mas pequeño a la derecha
             */
            TypeNodo *smallesToTheRight ( TypeNodo &nodoInicial){
                ClassNode<Data> *actual;
                actual = &nodoInicial;
                //cout << "el valor de actual es " << ~  *actual->valor << endl;
                if (actual -> HijoDerecho != 0x0){
                    actual = actual -> HijoDerecho;
                    int continuar = 0;
                    while (continuar == 0){
                        if (actual -> HijoIzquierdo != 0x0){
                            actual = actual ->HijoIzquierdo;
                        }else{
                            continuar = 1;
                        }
                    }
                }
                return actual;
            };


            /**
             * @brief funcion que devuelve el nodo de un dato
             */
            TypeNodo * NodeOf(Data &elDato){
                ClassNode<Data> *actual = this->raiz;
                TypeNodo * resultado;
                resultado = actual;
                /*cout << "\n\n\n\nmemoria de el dato" << &elDato << endl;
                cout << "dato de el dato " << elDato.dato << endl;
                cout << "memoria de la raiz" << this->raiz << endl;
                cout << "dato de la raiz " <<~ *this->raiz->valor << endl;
                cout << "memoria de la actual" << actual << endl;
                cout << "dato de actual " << ~ *actual->valor << endl;*/
                int parar = 0;
                while (parar == 0)
                {
                    if (elDato.dato == ~ *actual->valor){
                        resultado = actual;
                        //cout << "el nodo es igual al actual" << endl;
                        parar  = 1;
                    }else if (elDato.dato > ~*actual->valor){
                        if (actual->HijoDerecho != 0x0){
                            actual = actual->HijoDerecho;
                        }else{
                            //cout << "El nodo no existe" << endl;
                        }  
                    }else if (elDato.dato < ~*actual->valor){
                        if (actual->HijoIzquierdo != 0x0){
                            actual = actual->HijoIzquierdo;
                        }else{
                            //cout << "El nodo no existe" << endl;
                        }
                    }
                }
                return resultado;

            };






            /**
             * @brief funcion que devuelve el dato de un nodo
             */
            Data * dataIn(TypeNodo &elNodo){
                //cout << "\n\n\ndata in" << endl;
                ClassNode<Data> *actual = this->raiz;
                Data * resultado;
                resultado = actual->valor;
                /*cout << "memoria de el nodo" << &elNodo << endl;
                cout << "dato de el nodo " << ~ *elNodo.valor << endl;
                cout << "memoria de la raiz" << this->raiz << endl;
                cout << "dato de la raiz " <<~ *this->raiz->valor << endl;
                cout << "memoria de la actual" << actual << endl;
                cout << "dato de actual " << ~ *actual->valor << endl;
                system ("sleep 1");*/

                int parar = 0;
                while (parar == 0)
                {
                    if (&elNodo == actual){
                        resultado = actual->valor;
                        //cout << "el nodo es igual al actual" << endl;
                        parar  = 1;
                    }else if (~ *elNodo.valor > ~*actual->valor){
                        if (actual->HijoDerecho != 0x0){
                            actual = actual->HijoDerecho;
                        }else{
                            //cout << "El nodo no existe" << endl;
                        }  
                    }else if (~ *elNodo.valor < ~*actual->valor){
                        if (actual->HijoIzquierdo != 0x0){
                            actual = actual->HijoIzquierdo;
                        }else{
                            //cout << "El nodo no existe" << endl;
                        }
                    }
                }
                return resultado;


                /*if (&elNodo == actual){
                    cout << "el nodo es igual al actual" << endl;
                    resultado = actual->valor;
                    return resultado;
                }else if (~ *elNodo.valor > ~*actual->valor){
                    cout << "es mayor" << endl;
                    if (actual->HijoDerecho != 0x0){
                        actual = actual->HijoDerecho;
                        resultado = dataIn(*actual);
                    }else{
                        cout << "El nodo no existe" << endl;
                    }
                }else if (~ *elNodo.valor < ~*actual->valor){
                    cout << "es menor" << endl;
                    if (actual->HijoIzquierdo != 0x0){
                        actual = actual->HijoIzquierdo;
                        resultado = dataIn(*actual);
                    }else{
                        cout << "El nodo no existe" << endl;
                    }
                }

                return resultado;*/


            };


            /**
             * @brief funcion que borra el nodo de un arbol
             */
            void remove(Data &datoABorrar){
                ClassNode<Data> *actual = this->raiz;
                ClassNode<Data> *anterior = this->raiz;
                ClassNode<Data> * elNodoBorrado = NodeOf(datoABorrar);
                Data * elvalor = dataIn(*elNodoBorrado);
                ClassNode<Data> * resultado = actual;
                resultado = resultado;
                ClassNode<Data> * mayorALaIzquierda = actual;
                ClassNode<Data> * menorALaDerecha = actual;


                int identificadorSoyRaiz = 0;
                if (this->raiz == elNodoBorrado){
                    cout << "el if del identificador" << endl;
                    identificadorSoyRaiz = 1;
                }
                cout << "el dato es " << ~ datoABorrar << endl;
                cout << "la direccion de la raiz  " << this->raiz << endl;
                cout << "la direccion del dato es " << elNodoBorrado << endl;
                mayorALaIzquierda = this->largesToTheLeft(*elNodoBorrado);
                cout << "el mayor a la izquierda de " << datoABorrar.dato << " es "<< ~ *mayorALaIzquierda->valor << endl;
                menorALaDerecha = this->smallesToTheRight(*elNodoBorrado);
                cout << "el menor a la derecha de " << datoABorrar.dato << " es "<< ~ *menorALaDerecha->valor << endl;
                //en esta parte se borra un nodo sin hijos
                if (~ *mayorALaIzquierda->valor == ~ *menorALaDerecha->valor){
                    cout << "el if de iguales " << endl;
                    if (identificadorSoyRaiz == 1){
                        this->raiz = 0x0;         
                    }else{
                        int continuar = 0;
                        while (continuar == 0){
                            if (elNodoBorrado == actual){
                                if (datoABorrar.dato > ~ * anterior->valor ){
                                    anterior->HijoDerecho = 0x0;
                                    delete(anterior->HijoDerecho);
                                }else{
                                    anterior->HijoIzquierdo = 0x0;
                                    delete(anterior->HijoIzquierdo);
                                }
                                continuar = 1;
                            }else{
                                if (datoABorrar.dato > ~ *actual->valor){
                                    anterior = actual;
                                    actual  = actual ->HijoDerecho;
                                }else{
                                    anterior = actual;
                                    actual = actual ->HijoIzquierdo;
                                }
                            }

                        }
                    }
                }else if (~ *mayorALaIzquierda->valor != datoABorrar.dato){//se borra un nodo con hijos izquierdos
                    cout << "el if de mayor izquierda " << endl;
                    cout << "este es el valor " << ~ * elvalor << endl;
                    elvalor = dataIn(*mayorALaIzquierda);
                    cout << " ahora este es el valor " << ~ * elvalor << endl;
                    int continuar = 0;
                    while (continuar == 0){
                        if (elNodoBorrado == actual){
                            if (identificadorSoyRaiz == 1){
                                this->remove(*elvalor);//se aplica el mismo proceso al nodo que se va a borrar
                                this->raiz->valor = elvalor;         
                            }else{
                                if (datoABorrar.dato > ~ * anterior->valor ){   
                                    this->remove(*elvalor);//se aplica el mismo proceso al nodo que se va a borrar
                                    anterior->HijoDerecho->valor = elvalor;
                                }else{
                                    this->remove(*elvalor);//se aplica el mismo proceso al nodo que se va a borrar
                                    anterior->HijoIzquierdo->valor = elvalor;
                                    //delete(anterior->HijoIzquierdo);
                                }
                            }
                            continuar = 1;
                        }else{
                            if (datoABorrar.dato > ~ *actual->valor){
                                anterior = actual;
                                actual  = actual ->HijoDerecho;
                            }else{
                                anterior = actual;
                                actual = actual ->HijoIzquierdo;
                            }
                        }

                    }
                }else if (~ *menorALaDerecha->valor != ~datoABorrar.dato){
                    cout << "el if de menor derecha " << endl;
                    cout << "este es el valor " << ~ * elvalor << endl;
                    elvalor = dataIn(*menorALaDerecha);
                    cout << " ahora este es el valor " << ~ * elvalor << endl;
                    int continuar = 0;
                    while (continuar == 0){
                        if (elNodoBorrado == actual){
                            if (identificadorSoyRaiz == 1){
                                this->remove(*elvalor);//se aplica el mismo proceso al nodo que se va a borrar
                                this->raiz->valor = elvalor;         
                            }else{
                                if (datoABorrar.dato > ~ * anterior->valor ){   
                                    this->remove(*elvalor);//se aplica el mismo proceso al nodo que se va a borrar
                                    anterior->HijoDerecho->valor = elvalor;
                                }else{
                                    this->remove(*elvalor);//se aplica el mismo proceso al nodo que se va a borrar
                                    anterior->HijoIzquierdo->valor = elvalor;
                                    //delete(anterior->HijoIzquierdo);
                                }
                            }
                            continuar = 1;
                        }else{
                            if (datoABorrar.dato > ~ *actual->valor){
                                anterior = actual;
                                actual  = actual ->HijoDerecho;
                            }else{
                                anterior = actual;
                                actual = actual ->HijoIzquierdo;
                            }
                        }

                    }
                }else{
                    cout << "el else " << endl;
                }
                /*cout << "\n\n\n\nmemoria de el dato" << &elDato << endl;
                cout << "dato de el dato " << elDato.dato << endl;
                cout << "memoria de la raiz" << this->raiz << endl;
                cout << "dato de la raiz " <<~ *this->raiz->valor << endl;
                cout << "memoria de la actual" << actual << endl;
                cout << "dato de actual " << ~ *actual->valor << endl;*/
                /*int parar = 0;
                while (parar == 0)
                {
                    if (elDato.dato == ~ *actual->valor){
                        resultado = actual;
                        //cout << "el nodo es igual al actual" << endl;
                        parar  = 1;
                    }else if (elDato.dato > ~*actual->valor){
                        if (actual->HijoDerecho != 0x0){
                            actual = actual->HijoDerecho;
                        }else{
                            //cout << "El nodo no existe" << endl;
                        }  
                    }else if (elDato.dato < ~*actual->valor){
                        if (actual->HijoIzquierdo != 0x0){
                            actual = actual->HijoIzquierdo;
                        }else{
                            //cout << "El nodo no existe" << endl;
                        }
                    }
                }
                return resultado;*/

            };

            ClassNode<Data> *raiz;
            //private :
            int items =0;



            /**
             * @brief funcion que devuelve si el dato existe o no
             * return bandera 1 si existe 0 si no
             */
            int Existe(Data &elDato){
                ClassNode<Data> *actual = this->raiz;
                int parar = 0;
                int bandera = 0;
                while (parar == 0)
                {
                    if (elDato.dato == ~ *actual->valor){
                        bandera = 1;
                        parar  = 1;
                    }else if (elDato.dato > ~*actual->valor){
                        if (actual->HijoDerecho != 0x0){
                            actual = actual->HijoDerecho;
                        }else{
                            parar = 1;
                        }  
                    }else if (elDato.dato < ~*actual->valor){
                        if (actual->HijoIzquierdo != 0x0){
                            actual = actual->HijoIzquierdo;
                        }else{
                            parar = 1;
                        }
                    }
                }
                return bandera;

            };




















            void preorden(ClassNode<Data> *n){
                cout<<~*n->valor<<"-";

                if (n->HijoIzquierdo != 0x0){
                     preorden(n->HijoIzquierdo);
                }
                if (n->HijoDerecho != 0x0){
                     //cout<<~*n->HijoDerecho->valor;
                     preorden(n->HijoDerecho);
                }
            }

            void InOrden(ClassNode<Data> *n){
                int RaizImpresa=0;

                if (n->HijoIzquierdo != 0x0){
                     InOrden(n->HijoIzquierdo);
                }
                if (n->HijoIzquierdo == 0x0){
                     cout<<~*n->valor<<"-";
                     RaizImpresa=1;

                }
                if (RaizImpresa==0){
                     cout<<~*n->valor<<"-";
                }
                if (n->HijoDerecho != 0x0){
                     InOrden(n->HijoDerecho);
                }


            }

            void PostOrden(ClassNode<Data> *n){
                int RaizImpresa=0;

                if (n->HijoIzquierdo != 0x0){
                     PostOrden(n->HijoIzquierdo);
                }
                if (n->HijoIzquierdo == 0x0){
                     cout<<~*n->valor<<"-";
                     RaizImpresa=1;

                }
                if (n->HijoDerecho != 0x0){
                     PostOrden(n->HijoDerecho);
                }

                if (RaizImpresa==0){
                     cout<<~*n->valor<<"-";
                }


            }




            /**
             * @brief funcion recursiva que calcula la cantidad de niveles a partir de un nodo
             * @param inicio es un puntero a la direccion de memoria
             */
            int calcularNiveles(ClassNode<Data> *inicio){
                int cantidadNivel = 0;
                int numeroHijos = 0;
                int nivelesIzquierda = 0;
                int nivelesDerecha =0;
                //calcula el numero de hijos
                if ((inicio->HijoIzquierdo !=0x0)&&(inicio->HijoDerecho!= 0x0)){
                    numeroHijos = 2;
                }else if ((inicio->HijoIzquierdo !=0x0)||(inicio->HijoDerecho!= 0x0)){
                    numeroHijos =1;
                }else if ((inicio->HijoIzquierdo ==0x0)&&(inicio->HijoDerecho== 0x0)){
                    numeroHijos = 0;
                }

                //devuelve el numero de niveles
                if (numeroHijos == 0){
                    cantidadNivel=1;
                    return cantidadNivel;
                }else if(numeroHijos == 1){
                    cantidadNivel++;
                    if (inicio->HijoDerecho != 0x0){
                        inicio = inicio->HijoDerecho;
                    }else{
                        inicio = inicio->HijoIzquierdo;
                    }
                    cantidadNivel = cantidadNivel + calcularNiveles(inicio);
                    return cantidadNivel;
                }else if(numeroHijos == 2){
                    cantidadNivel++;
                    nivelesIzquierda = calcularNiveles(inicio->HijoIzquierdo);
                    nivelesDerecha = calcularNiveles(inicio->HijoDerecho);
                    if ((nivelesIzquierda == 1)&&(nivelesDerecha == 1)){
                        cantidadNivel = cantidadNivel +1;
                    }else if (nivelesIzquierda > nivelesDerecha){
                        cantidadNivel = cantidadNivel + nivelesIzquierda;
                    }else{
                        cantidadNivel = cantidadNivel + nivelesDerecha;
                    }
                    return cantidadNivel;
                }else{
                    cout << "no deberia estar aqui" << endl;
                    return cantidadNivel;
                }
            };


            /**
             * @brief funcion recursiva que calcula la cantidad de nodos en un nivel
             * @param inicio es un puntero a la direccion de memoria
             * @param nivel es el nivel que se quiere
             */
            int calcularNodos(ClassNode<Data> *inicio , int nivel){
                int sumaNodos = 0;
                int numeroHijos = 0;
                //calcula el numero de hijos
                if ((inicio->HijoIzquierdo !=0x0)&&(inicio->HijoDerecho!= 0x0)){
                    numeroHijos = 2;
                }else if ((inicio->HijoIzquierdo !=0x0)||(inicio->HijoDerecho!= 0x0)){
                    numeroHijos =1;
                }else if ((inicio->HijoIzquierdo ==0x0)&&(inicio->HijoDerecho== 0x0)){
                    numeroHijos = 0;
                }

                //devuelve los nodos de una raiz
                if (nivel == 1){
                    return 1;
                }else{
                    nivel--;
                    if (numeroHijos == 0){
                        return 0;
                    }else if (numeroHijos == 1){
                        if (inicio->HijoDerecho != 0x0){
                            inicio = inicio->HijoDerecho;
                        }else{
                            inicio = inicio->HijoIzquierdo;
                        }
                        sumaNodos = sumaNodos + calcularNodos(inicio , nivel);
                        return sumaNodos;
                    }else if (numeroHijos == 2){
                    sumaNodos = sumaNodos + calcularNodos(inicio->HijoIzquierdo,nivel);
                    sumaNodos = sumaNodos + calcularNodos(inicio->HijoDerecho,nivel);
                    return sumaNodos;
                    }else{
                        cout << "no deberia estar aqui" << endl;
                        return 0;
                    }
                }
            }
            /**
             * @brief funcion recursiva que devuelve la representacion de texto de un nivel
             * @param inicio es un puntero a la direccion de memoria
             * @param nivel es el nivel que se quiere
             */
            string devolverStringNivel(ClassNode<Data> *inicio , int nivel ,  int cantidadDatos){
                string linea = "";
                int numeroHijos = 0;
/*                if (nivel == 1){
                    linea = linea + to_string(~ *inicio->valor);
                    return linea;
                }else if(nivel == 2){
                    if ((inicio->HijoIzquierdo !=0x0)&&(inicio->HijoDerecho!= 0x0)){
                        linea = linea + to_string(~ *inicio->HijoIzquierdo->valor) + this->tabMI+this->tabMD + to_string(~ *inicio->HijoDerecho->valor);
                    }else if ((inicio->HijoIzquierdo !=0x0)||(inicio->HijoDerecho!= 0x0)){
                        if ((inicio->HijoIzquierdo == 0x0 )){
                            linea = linea + "++" + this->tabMI+this->tabMD + to_string(~ *inicio->HijoDerecho->valor);
                        }else{
                            linea = linea + to_string(~ *inicio->HijoIzquierdo->valor) + this->tabMI+this->tabMD + "++";
                        }
                    }else if ((inicio->HijoIzquierdo ==0x0)&&(inicio->HijoDerecho== 0x0)){
                    }
                    
                }else{
                    if ((inicio->HijoIzquierdo !=0x0)&&(inicio->HijoDerecho!= 0x0)){
                        numeroHijos = 2;
                    }else if ((inicio->HijoIzquierdo !=0x0)||(inicio->HijoDerecho!= 0x0)){
                        numeroHijos =1;
                    }else if ((inicio->HijoIzquierdo ==0x0)&&(inicio->HijoDerecho== 0x0)){
                        numeroHijos = 0;
                    }  

                    if (numeroHijos == 0){
                        //linea = linea + this->tabMI;
                        return linea;
                    }else if (numeroHijos == 1){
                        if (inicio->HijoDerecho != 0x0){
                            inicio = inicio->HijoDerecho;
                            //linea = linea + this->tabMI;
                        }else{
                            //inicio = inicio->HijoIzquierdo;
                        }
                        linea = linea + devolverStringNivel(inicio , nivel,cantidadDatos);
                       // cout << "tengo un hijo devuelvo " << linea << endl;
                        return linea;
                    }else if (numeroHijos == 2){
                        linea = linea + devolverStringNivel(inicio->HijoIzquierdo,nivel,cantidadDatos);
                        //linea = linea + this->tabMI + this->tabMD + this->tabMI+ this->tabMD;
                        linea = linea + devolverStringNivel(inicio->HijoDerecho,nivel,cantidadDatos);
                       // cout << "tengo dos hijos devuelvo " << linea << endl;
                        return linea;
                    }else{
                        cout << "no deberia estar aqui" << endl;
                        return linea;
                    }
                }
*/
                if ((inicio->HijoIzquierdo !=0x0)&&(inicio->HijoDerecho!= 0x0)){
                    numeroHijos = 2;
                }else if ((inicio->HijoIzquierdo !=0x0)||(inicio->HijoDerecho!= 0x0)){
                    numeroHijos =1;
                }else if ((inicio->HijoIzquierdo ==0x0)&&(inicio->HijoDerecho== 0x0)){
                    numeroHijos = 0;
                }


                //cout << "nodo " << ~ *inicio->valor << endl;
                //devuelve los nodos de una raiz
                if (nivel == 1){
                    linea = linea + to_string(~ *inicio->valor);
                   // cout << "el nivel es uno entonces devuelvo " << linea << endl;
                    return linea;
                }else{
                    //cantidadDatos = calcularNodos(inicio,nivel-1);
                    nivel--;
                    if (numeroHijos == 0){
                        linea = linea + this->tabMI;
                        return linea;
                    }else if (numeroHijos == 1){
                        if (inicio->HijoDerecho != 0x0){
                            inicio = inicio->HijoDerecho;
                            linea = linea + this->tabMI;
                        }else{
                            inicio = inicio->HijoIzquierdo;
                        }
                        linea = linea + devolverStringNivel(inicio , nivel,cantidadDatos);
                       // cout << "tengo un hijo devuelvo " << linea << endl;
                        return linea;
                    }else if (numeroHijos == 2){
                        linea = linea + devolverStringNivel(inicio->HijoIzquierdo,nivel,cantidadDatos);
                        linea = linea + this->tabMI + this->tabMD + this->tabMI+ this->tabMD;
                        linea = linea + devolverStringNivel(inicio->HijoDerecho,nivel,cantidadDatos);
                       // cout << "tengo dos hijos devuelvo " << linea << endl;
                        return linea;
                    }else{
                        cout << "no deberia estar aqui" << endl;
                        return linea;
                    }
                }

            }
            /**
             * @brief funcion que imprime un arbol
             */
            void print(){
                int cantidadNiveles = 0;
                int cantidadNodos = 0;
                cantidadNiveles = calcularNiveles(this->raiz);
                int contador = 1;
                string impresionFinal= "";
                int indicadrorEspacios = cantidadNiveles;
                while(contador <= cantidadNiveles){
                    for (int i = 0; i < indicadrorEspacios; i++){
                        impresionFinal = impresionFinal + this->tabMI + this->tabMD;
                    }
                    cantidadNodos = calcularNodos(this->raiz , contador);
                    // cout << "en el nivel: " << cantidadNiveles << " tengo: " << cantidadNodos << " nodos" << endl;
                    impresionFinal = impresionFinal + devolverStringNivel(this->raiz,contador, cantidadNodos);
                    cout << impresionFinal << endl;
                    //cantidadNiveles--;
                    contador++;
                    impresionFinal = "";
                    indicadrorEspacios --;
                    
                }
                
                //cout << "fin funcion print" << endl;
            //     ClassNode<Data> *last = raiz;
            //     if (numeroDeEspacio != 0){
            //         for (int i =0; i< numeroDeEspacio; i++){
            //             cout << "+";
            //         }
            //         cout << ~ * last->valor << endl;
            //         print((numeroDeEspacio-5) , nivel+1);
            //     }
            // }

            };

            void preorden(ClassNode<Data> *n){
                system("clear");
                cout<<~*n->valor<<"-";

                if (n->HijoIzquierdo != 0x0){
                     preorden(n->HijoIzquierdo);
                }
                if (n->HijoDerecho != 0x0){
                     //cout<<~*n->HijoDerecho->valor;
                     preorden(n->HijoDerecho);
                }
            }
<<<<<<< HEAD

              void InOrden(ClassNode<Data> *n){
                int RaizImpresa=0;

                if (n->HijoIzquierdo != 0x0){
                     InOrden(n->HijoIzquierdo);
                }
                if (n->HijoIzquierdo == 0x0){
                     cout<<~*n->valor<<"-";
                     RaizImpresa=1;

                }
                if (RaizImpresa==0){
                     cout<<~*n->valor<<"-";
                }
                if (n->HijoDerecho != 0x0){
                     InOrden(n->HijoDerecho);
                }


            }

               void PostOrden(ClassNode<Data> *n){
                int RaizImpresa=0;

                if (n->HijoIzquierdo != 0x0){
                     PostOrden(n->HijoIzquierdo);
                }
                if (n->HijoIzquierdo == 0x0){
                     cout<<~*n->valor<<"-";
                     RaizImpresa=1;

                }
                if (n->HijoDerecho != 0x0){
                     PostOrden(n->HijoDerecho);
                }

                if (RaizImpresa==0){
                     cout<<~*n->valor<<"-";
                }


            }



            ClassNode<Data> *raiz;
            //private :
            int items =0;
=======
            string tabMI = "   ";
            string tabMD = "   ";
>>>>>>> 935a4563387060d893a2578eff95c4ee7a80a738
    };


    // ...
#endif
