#ifndef DATONOPRIMITIVO_H
#define DATONOPRIMITIVO_H

#include "./Includes.h"

template <typename TipoDato>
    class DatoNoPrimitivo{
    public:
        DatoNoPrimitivo(TipoDato valor){
            this->dato = valor;
        };
        ~DatoNoPrimitivo(){
            this->dato = 0;
            //cout << "destructor dato no primitivo" << endl;
        };

        TipoDato operator~ (){
            return this->dato;
        };

        TipoDato operator+(TipoDato elOtro){
            if (dato > elOtro){
                return dato;
            }else{
                return elOtro;
            }
        }
        
        TipoDato dato;
    };

#endif