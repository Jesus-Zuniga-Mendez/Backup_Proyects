/**
 *@file Triangulo.hpp/
 */
#ifndef TRIANGULO_H
#define TRIANGULO_H

    #include "./Includes.hpp"

    using namespace std;


    /**
     * @brief calse tringulo
     */
    class triangulo : public Figura{
        public:
            float lado1;
            float lado2;
            float lado3;
            triangulo();
            triangulo(const triangulo& f);
            ~triangulo();
            double perimetro();
            virtual string operator~();

    };

    /**
     * @brief calse Escaleno
     */

    class Escaleno : public triangulo{
        public:
            float semiperimetro; //Se completa en el menu (ecuacion=(lado1+lado2+lado3)/2)
            Escaleno(Vertice *puntos);
            Escaleno(const Escaleno& f);
            ~Escaleno();
            double superficie();
            string operator~();

    };

    /**
     * @brief calse equilatero
     */
    class Equilatero : public triangulo{
        public:
            Equilatero(Vertice *puntos);
            Equilatero(const Equilatero& f);
            ~Equilatero();
            double superficie();
            string operator~();

    };



    /**
     * @brief calse Isosceles
     */
    class Isosceles : public triangulo{
        public:
            Isosceles(Vertice *puntos);
            Isosceles(const Isosceles& f);
            ~Isosceles();
            double superficie();
            string operator~();

    };

#endif
