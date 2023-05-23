#ifndef LISTA_H
#define LISTA_H

#include "./Includes.h"

// ...
template <typename Data , typename Position >
    class List {
        public :
            List (){};
            List ( const List & orig ){};
            virtual ~ List (){};
            virtual void emptyList () = 0;
            virtual void insert (Data , Position* ) = 0;
            virtual Position & insert (const Data &d) = 0;
            virtual void remove ( Data ) = 0;
            virtual void remove ( Position* ) = 0;
            virtual Data getElement ( Position* ) = 0;
            virtual Position* find ( Data ) = 0;
            virtual Position* next ( Position* ) = 0;
            virtual Position* prev ( Position * ) = 0;
            virtual void print () = 0;
            // ...
        //private :
            int items = 0;

         // ...

    };
    // ...        
#endif