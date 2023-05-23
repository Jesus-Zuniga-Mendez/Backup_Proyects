#ifndef SINGLEDLINKEDLIST_H
#define SINGLEDLINKEDLIST_H

#include "./Includes.h"

using namespace std;
// ...
template <typename Element , typename SinglePosition >
    class SingleLinkedList : public List<Element , SinglePosition >{
        public :
            SingleLinkedList (){};
            SingleLinkedList ( const SingleLinkedList & orig ){

            };
            ~ SingleLinkedList (){};
            void emptyList (){};
            void insert (SinglePosition* nuevaPosicion, SinglePosition* viejaPosicion){
                SimplePosition<Element> *actual = this->first;
                int encontado = 0;
                while ((encontado == 0) && (actual != 0x0)){
                    if (viejaPosicion == actual){
                        actual->siguiente= nuevaPosicion;
                        encontado = 1;
                    }else{
                        actual = actual->siguiente;
                    }
                }

            };
            void insert (Element dato, SinglePosition* posicion){
                SimplePosition<Element> *actual = this->first;
                int encontado = 0;
                while ((encontado == 0) && (actual != 0x0)){
                    if (posicion == actual){
                        *actual->valor = dato;
                        encontado = 1;
                    }else{
                        actual = actual->siguiente;
                    }
                }

            };
            SinglePosition &insert (const Element &dato)
            {
                if (this->items == 0)
                {   
                    first = new SimplePosition<Element>(new int(dato));
                    this->items++;
                    return *first;
                }
                else
                {
                    SimplePosition<Element> *last = first;
                    while (last->siguiente)
                    {
                        last = last->siguiente;
                    }
                    last->siguiente = new SimplePosition<Element>(new int(dato));
                    this->items++;
                    return *(last->siguiente);
                }
            };

            void remove ( Element dato){
                SimplePosition<Element> *actual = this->first;
                SimplePosition<Element> *respaldo = this->first;
                int encontado = 0;
                int elemento = 1;
                while ((encontado == 0) && (actual != 0x0)){
                    if (dato == *actual->valor){
                        if (elemento == 1){
                            cout << "primer elemento" << endl;
                            this->first = actual->siguiente;
                            this->items--;
                        }else if (elemento == this->items){
                            cout << "ultimo elemento" << endl;
                            respaldo = this->prev(actual);
                            respaldo->siguiente = 0x0;
                            this->items--;
                        }else{
                            cout << "intermedio elemento" << endl;
                            respaldo = this->prev(actual);
                            respaldo->siguiente = actual->siguiente;
                            this->items--;
                        }
                        encontado = 1;
                    }else{
                        actual = actual->siguiente;
                        elemento++;
                    }
                }
                
            };
            void remove ( SinglePosition* posicion){
                SimplePosition<Element> *actual = this->first;
                SimplePosition<Element> *respaldo = this->first;
                int encontado = 0;
                int elemento = 1;
                while ((encontado == 0) && (actual != 0x0)){
                    if (posicion == actual){
                        if (elemento == 1){
                            cout << "primer elemento" << endl;
                            this->first = actual->siguiente;
                            this->items--;
                        }else if (elemento == this->items){
                            cout << "ultimo elemento" << endl;
                            respaldo = this->prev(actual);
                            respaldo->siguiente = 0x0;
                            this->items--;
                        }else{
                            cout << "intermedio elemento" << endl;
                            respaldo = this->prev(actual);
                            respaldo->siguiente = actual->siguiente;
                            this->items--;
                        }
                        encontado = 1;
                    }else{
                        actual = actual->siguiente;
                        elemento++;
                    }
                }

            };
            Element getElement ( SinglePosition* posicion){
                SimplePosition<Element> *actual = this->first;
                int encontado = 0;
                while ((encontado == 0) && (actual != 0x0)){
                    if (posicion == actual){
                        encontado = 1;
                    }else{
                        actual = actual->siguiente;
                    }
                }
                return *actual->valor;
            };
            SinglePosition* find ( Element elemento ){
                SimplePosition<Element> *actual = this->first;
                int encontado = 0;
                while ((encontado == 0) && (actual != 0x0)){
                    if (elemento == *actual->valor){
                        encontado = 1;
                    }else{
                        actual = actual->siguiente;
                    }
                }
                return actual;
            };
            SinglePosition* next ( SinglePosition * posicion){
                SimplePosition<Element> *actual = posicion;
                actual = actual->siguiente;
                return actual;
            };
            /**
             * @brief Funcion que imprime la posicion previa de una posicion
             */
            SinglePosition* prev (SinglePosition * posicion){
                SimplePosition<Element> *actual = this->first;
                SimplePosition<Element> *previa = 0x0;
                //cout << actual << endl;
                //cout << posicion << endl;
                //cout << *actual->valor << endl;
                //cout << *posicion->valor << endl;
                int encontrado = 0;
                while (encontrado == 0 ){
                    if (actual == posicion){
                        encontrado = 1;
                    }else{
                        previa = actual;
                        actual = actual->siguiente;
                    }
                }
                return previa;
            };
            /**
             * @brief Funcion que imprime los datos de la lista
             */
            void print (){
                cout << "Total de datos " << this->items << endl;
                int contador = 1;
                if (this->items > 0){
                    SimplePosition<Element> *actual = this->first;
                    while (actual != 0x0){
                        cout << "Posicion " << contador << "   :  ";
                        contador ++;
                        cout << "Puntero " << "   :  ";
                        cout << actual;
                        cout << "     "; 
                        cout << "Tengo " << *actual->valor << endl;
                        actual = actual->siguiente;
                    }
                }else{
                    cout << "Lista Vacia" << endl;
                }
            };
            SinglePosition * ultimo (){
                SimplePosition<Element> *actual = this->first;
                while (actual->siguiente != 0x0){
                    actual = actual->siguiente;
                }
                return actual;
            };
            void actualizarItems (){
                SimplePosition<Element> *actual = this->first;
                int contador = 0;
                while (actual != 0x0){
                    actual = actual->siguiente;
                    contador++;
                }
                this->items = contador;
            };
            //--------------------------------------------------

            SimplePosition<Element> *first;

        //private :
            int items =0;

         // ...

    };
    // ...
#endif