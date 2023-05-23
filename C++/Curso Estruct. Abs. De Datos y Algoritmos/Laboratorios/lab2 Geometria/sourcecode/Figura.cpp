/**
 *@file Figura.cpp/
 */
#include "../include/Includes.hpp"

using namespace std;

/**
 * @brief constructor por defecto
 */
Figura::Figura(){
    //this->identificadorEstatico = this->identificadorEstatico + 1;
}
/**
 * @brief destructor por defecto
 */
Figura::~Figura(){
}
/**
 * @brief constructor por copia
 * @param f es un objeto
 */
Figura::Figura(const Figura& f){
    this->area = f.area;
    this->perimetrofig = f.perimetrofig;
    this->nombre = f.nombre;
    this->color = f.color;
    this->identificadorEstatico = f.identificadorEstatico;

}

/**
 * @brief metodo que calcula una superficie generica
 */
double Figura::superficie(){
    double superficie = this->x * this->y;
    return superficie;
}

/**
 * @brief metodo que calcula un perimetro generico
 */
double Figura::perimetro(){
    double perimetro = 4*x;
    return perimetro;
}

/**
 * @brief sobrecarga del operador ~ 
 */
string Figura::operator~(){
    string retorno;
    string strpuntos = "";
    for (int i=0; i < this->cantidadPuntos; i++){
        strpuntos = strpuntos + ~puntos[i];
        strpuntos = strpuntos + "\n";
    }
    retorno = strpuntos + "\n";
    retorno = retorno + ("Mi nombre es "+this->nombre + "  \n" +
               "Mi color es "+this->color + " \n" +
               "Mi superficie es "+to_string(this->superficie())+ " \n" +
               "Mi perimetro es "+to_string(this->perimetro())+ " \n"
               );
    return retorno;
};
