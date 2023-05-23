#ifndef SIMPLEPOSITION_H
#define SIMPLEPOSITION_H


#include "./Includes.h"
// ...
template <typename Dato>
    class SimplePosition {
        public :
            SimplePosition (Dato *valor){
                this->valor = valor;
            };
            ~SimplePosition(){};
        
            SimplePosition<Dato> * siguiente = 0x0;
            Dato *valor;
    };
#endif