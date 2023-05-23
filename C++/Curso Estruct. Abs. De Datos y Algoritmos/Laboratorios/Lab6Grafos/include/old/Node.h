#ifndef NODE_H
#define NODE_H


#include "./Includes.h"
using namespace std;
// ...
template <typename Dato>
    class ClassNode {
        public :
            ClassNode (Dato *valor){
                this->valor = valor;
            };
            ~ClassNode(){
                this -> valor = 0x0;
                //cout << "destructor del nodo" << endl;
            };
        
            ClassNode<Dato> * HijoIzquierdo = 0x0;
            ClassNode<Dato> * HijoDerecho = 0x0;
            Dato *valor;
    };
#endif