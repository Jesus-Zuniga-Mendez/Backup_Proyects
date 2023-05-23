#ifndef SINGLEDLINKEDLIST_H
#define SINGLEDLINKEDLIST_H

#include "./Includes.h"

using namespace std;
// ...
template <typename Element , typename SinglePosition >
    class SingleLinkedList{// : public List<Element , SinglePosition >{
        public :
            SingleLinkedList (){};
//            SingleLinkedList ( const SingleLinkedList & orig ){

//            };
            ~ SingleLinkedList (){};

            SinglePosition &insert (const Element &dato)
            {
                if (this->items == 0)
                {   
                    first = new SimplePosition<Element>(new Element(dato));
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
                    last->siguiente = new SimplePosition<Element>(new Element(dato));
                    this->items++;
                    return *(last->siguiente);
                }
            };

            Element* getDireccion (int elemento){
                SimplePosition<Element> *actual = this->first;
                ClassNode* elNodo = 0x0;
                int encontado = 0;
                while ((encontado == 0) && (actual != 0x0)){
                    if (elemento == actual->valor->valor){
                        encontado = 1;
                        elNodo = actual->valor;
                    }else{
                        actual = actual->siguiente;
                    }
                }
                return elNodo;
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
                        cout << "Tengo " << actual->valor->valor << endl;
                        actual = actual->siguiente;
                    }
                }else{
                    cout << "Lista Vacia" << endl;
                }
            };


            //sirve para lista de nodos
            SinglePosition * devolverPosicion(int item){
                SimplePosition<Element> *laPosicion = this->first;
                for (int i = 1; i < item; i++){
                    laPosicion = laPosicion->siguiente;
                }
                return laPosicion;
            }
            //sirve para lista de aristas
            bool verificar(ClassNode *origen, ClassNode *destino){
                bool respuesta = false;
                SimplePosition<Element> *laPosicion = this->first;
                while (laPosicion != 0x0)
                {
                    if ((laPosicion->valor->NodoA == origen) && (laPosicion->valor->NodoB == destino)){
                        respuesta = true;
                        laPosicion = 0x0;
                    }else{
                        laPosicion = laPosicion->siguiente;
                    }
                }
                return respuesta;

            }

            SinglePosition * devolverPosicionDesdeValor(int valor){
                SimplePosition<Element> *laPosicion = this->first;
                bool encontrado = false;
                for (int i =1; i < this->items; i++){
                    if (laPosicion->valor->valor == valor){
                        i = this->items;
                        encontrado = true;
                    }else{
                        laPosicion = laPosicion->siguiente;
                    }
                }
                if (encontrado == false){
                    laPosicion = 0x0;
                }
                return laPosicion;
            }
/*
















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

            SinglePosition* next ( SinglePosition * posicion){
                SimplePosition<Element> *actual = posicion;
                actual = actual->siguiente;
                return actual;
            };
            /
             * @brief Funcion que imprime la posicion previa de una posicion
             */
/*            SinglePosition* prev (SinglePosition * posicion){
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
*/
            SimplePosition<Element> *first;

        //private :
            int items =0;

         // ...

    };
    // ...
#endif