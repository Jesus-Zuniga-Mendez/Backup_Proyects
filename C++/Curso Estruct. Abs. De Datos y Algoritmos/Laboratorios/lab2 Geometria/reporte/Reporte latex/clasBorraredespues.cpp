/* #include "../include/includes.h"


circulo::circulo(){}

void circulo::perimetro(){
  return ( 2*PI*(this->radio));
}

void circulo::superficie(){
  return ( PI*pow((this->radio),2) );
}

circulo::~circulo(){}


//########################################################

void rectangulo::superficie(Vertice &lista_vertices){
  return ((this->altura)*(this->base));

}

void rectangulo::perimetro(Vertice &lista_vertices){
  return (2*(this->altura)+2*(this->base));

}

rectangulo::rectangulo(){}
rectangulo::~rectangulo(){}

//########################################################

void triangulo::perimetro(){
  return ((this->lado1)+(this->lado2)+(this->lado3));

}

//Especializaciones de triangulo

class Equilatero : public triangulo{
    public:
        triangulo(){}
        ~triangulo(){}
        bool equilatero=false;

}

class Isosceles : public triangulo{
    public:
        float semiperimetro;
        triangulo(){}
        ~triangulo(){}
        bool equilatero=false;

}

class Escaleno : public triangulo{
    public:
        triangulo(){}
        ~triangulo(){}
        bool equilatero=false;

}

 */