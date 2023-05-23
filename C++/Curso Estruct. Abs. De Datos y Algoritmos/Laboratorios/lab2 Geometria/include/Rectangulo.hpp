/**
 *@file Rectangulo.hpp/
 */
#ifndef RECTANGULO_H
#define RECTANGULO_H


    #include "./Includes.hpp"
    using namespace std;

    /**
     * @brief Clase rectangulo
     */
    class rectangulo : public Figura{
        public:
            float altura; //lo definiremos cuando tengamos el menu, pero los metodos ya depende de "este altura"
            float base; //lo definiremos cuando tengamos el menu, pero los metodos ya depende de "este base"
            rectangulo(Vertice *puntos);
            rectangulo(const rectangulo& f);
            ~rectangulo();
            double superficie();
            double perimetro();
            string operator~();
    };
#endif
