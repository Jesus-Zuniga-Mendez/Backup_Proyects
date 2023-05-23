/**
 *@file Vertice.cpp/
 */
#include "../include/Includes.hpp"
using namespace std;

/**
 * @brief constructor por defecto
 */
Vertice::Vertice(){
}
/**
 * @brief desconstructor por defecto
 */
Vertice::~Vertice(){
}
/**
 * @brief constructor por copia
 * @param v es un objeto
 */
Vertice::Vertice(const Vertice& v){
    this->x=v.x;
    this->y=v.y;
    this->identificador = v.identificador;
}
/**
 * @brief sobrecarga operador ~ para convertir a texto
 */
string Vertice::operator~(){
    string respuesta = "";
    string strX = to_string(x);
    string strY = to_string(y);
    string identi = to_string(identificador);
    respuesta = ("punto: " + identi + " Coordenada X "+ strX +" coordenada Y "+ strY);
    return respuesta;
}
/**
 * @brief sobrecarga operador ~ para convertir a texto
 */
double Vertice::operator>>(const Vertice& rhs){
    float distancia = 0;
    float xcuadrado = (this->x - rhs.x);
    float ycuadrado = (this->y - rhs.y);
    xcuadrado = pow(xcuadrado,2);
    ycuadrado = pow(ycuadrado,2);
    distancia = sqrt (xcuadrado + ycuadrado);
    return distancia;
}
