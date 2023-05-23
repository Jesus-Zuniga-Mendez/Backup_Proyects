#ifndef CIRCULO_H
#define CIRCULO_H

    #include "./Includes.hpp"
    /**
     * @brief clase que se encarga e modelar un circulo
     */
    class Circulo : public Figura{
        public:
           Circulo(Vertice *puntos);
           ~Circulo();
           double perimetro();
           double superficie();
           string operator~();
           double radio;
    };

#endif
