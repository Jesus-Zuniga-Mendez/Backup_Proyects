#ifndef VERTICE_H
#define VERTICE_H

#include "./Includes.hpp"

using namespace std;

/**
 * @brief clase que modela un punto en el espacio
 */
    class Vertice
    {
        public:
            Vertice();
            ~Vertice();
            Vertice(const Vertice& v);
            string operator~();
            double operator>>(const Vertice& rhs);
            float x;
            float y;
            int identificador;//uint
        //private:

    };
#endif
