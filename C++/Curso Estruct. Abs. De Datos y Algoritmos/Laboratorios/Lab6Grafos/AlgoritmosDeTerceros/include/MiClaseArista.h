#ifndef MICLASEARISTA_H
#define MICLASEARISTA_H

#include "./Includes.h"

using namespace std;

class ClassArista{
    public:
        ClassNode * NodoA=0x0;//Nodo Anterior
        ClassNode * NodoB=0x0;//Nodo Posterior
        float peso; //Valor de peso/calidad de la arista
        string AristaID;
        string valor;
        ClassArista(ClassNode * NodoA, ClassNode * NodoB, string AristaID){

            this->NodoA = NodoA;
            this->NodoB = NodoB;
            this->AristaID = AristaID;
            cout<<"Creada la arista: "<<this->AristaID<<endl;
            valor = "Union del Nodo " + to_string(this->NodoA->valor)  + " con el nodo " + to_string(this->NodoB->valor);
        };
        ~ClassArista(){};
};

#endif