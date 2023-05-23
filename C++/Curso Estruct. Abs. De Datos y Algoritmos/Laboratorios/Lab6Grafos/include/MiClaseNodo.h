#ifndef MICLASENODO_H
#define MICLASENODO_H

#include "./Includes.h"

using namespace std;

class ClassNode{
    public:
        int valor;
        int NodeID;
        int *MiDireccion;


        
        ClassNode(int valor, int NodeID){
            this->valor = valor;
            this->NodeID = NodeID;

            cout<<"Nodo creado"<<endl;
        };
        ~ClassNode(){};
        void imprimir(){
            cout<<this->valor;
        };
};



#endif