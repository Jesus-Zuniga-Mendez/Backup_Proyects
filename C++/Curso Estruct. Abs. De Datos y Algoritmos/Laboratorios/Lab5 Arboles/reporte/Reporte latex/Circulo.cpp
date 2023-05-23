#include "../include/Includes.hpp"



/**
 * @brief Constructor de circulo
 * @param temp es un puntero de un arreglo de vertices
 */
Circulo::Circulo(Vertice *temp){
    this->puntos=temp;
    this->radio=puntos[0]>>puntos[1];
    this->perimetrofig = this->perimetro();
    this->area = this->superficie();
    cout<< "El radio es: " << this->radio<< endl;
    this->area = this->superficie();
    this->perimetrofig = this->perimetro();
    cout << "el area es: " << this->area << endl;
    cout << "el perimetro es: " << this ->perimetrofig << endl;
}

/**
 * @brief Calcula el perimetro
 */
double Circulo::perimetro(){
  this->perimetrofig = ( 2*PI*(this->radio));
  return(this->perimetrofig);

}

/**
 * @brief Calcula la superficie
 */
double Circulo::superficie(){
  this->area = ( PI*pow((this->radio),2) );
  return(this->area);
}

/**
 * @brief sobrecarga del operador ~ para circulo
 */
string Circulo::operator~(){
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
             "Mi radio es "+to_string(this->radio)+ " \n"
             );
  return retorno;
}

/**
 * @brief destructor de la clase
 */
Circulo::~Circulo(){};


