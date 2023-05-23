/**
 *@file Figura.hpp/
 */
#ifndef FIGURA_HPP
#define FIGURA_HPP

#include "./Includes.hpp"

using namespace std;

    /**
     * @brief clase que se encarga de crear una figura en 2D
     */
    class Figura : public Vertice
    {
        public:
            Figura();
            ~Figura();
            Figura(const Figura& f);
            Vertice *puntos;
            virtual double superficie()=0;
            virtual double perimetro()=0;
            virtual string operator~()=0;
            float area;
            float perimetrofig;
            string nombre;
            string color;
            static int identificadorEstatico;
            int cantidadPuntos;
            string impresion;
    };
#endif
