#include "../include/Includes.hpp"

using namespace std;


/**
 * @brief contructor de la clase rectangulo
 * @param recibe un puntero a los vertices
 */
rectangulo::rectangulo(Vertice *temp){
    float distancias[3];
    float distancia_calc;
    this->puntos=temp;

    for (int i=0; i<3; i++){
        distancia_calc=puntos[0]>>puntos[i+1];
        distancias[i]=distancia_calc;
    }
    for (int i=0; i<3; i++){ //tres porque son los vertices restantes con los que debe comparar la distancia
        if (i==0){
            if (distancias[i] > distancias[i+1] && distancias[i] > distancias[i+2]){
                if (distancias[i+1] > distancias[i+2]){
                    this->base=distancias[i+1];
                    this->altura=distancias[i+2];
                }else{
                    this->base=distancias[i+2];
                    this->altura=distancias[i+1];
                }
            }
        }
        if (i==1){
            if (distancias[i] > distancias[i-1] && distancias[i] > distancias[i+1]){
                if (distancias[i-1] > distancias[i+1]){
                    this->base=distancias[i-1];
                    this->altura=distancias[i+1];
                }else{
                    this->base=distancias[i+1];
                    this->altura=distancias[i-1];
                }

            }
        }

        if (i==2){
            if (distancias[i] > distancias[i-2]  && distancias[i] > distancias[i-1]){
                 if (distancias[i-2] > distancias[i-1]){
                    this->base=distancias[i-2];
                    this->altura=distancias[i-1];
                }else{
                    this->base=distancias[i-1];
                    this->altura=distancias[i-2];
                }
            }

        }

    }
    cout<< "La base es: " << this->base<< endl;
    cout<< "La altura es: " << this->altura<< endl;
    this->area = this->superficie();
    this->perimetrofig = this->perimetro();
    cout << "el area es: " << this->area << endl;
    cout << "el perimetro es: " << this ->perimetrofig << endl;

}

/**
 * @brief Calcula la superficie
 */
double rectangulo::superficie(){
  this->area=(this->altura)*(this->base);
  return (this->area);

}

/**
 * @brief Calcula el perimetro
 */
double rectangulo::perimetro(){
  this->perimetrofig=(2*(altura)+2*(this->base));
  return (this->perimetrofig);

}

/**
 * @brief destructor de la clase
 */
rectangulo::~rectangulo(){}

/**
 * @brief sobrecarga del operador ~ para circulo
 */
string rectangulo::operator~(){
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
             "Mi base es "+to_string(this->base)+ " \n"
             "Mi altura es "+to_string(this->altura)+ " \n"
             );
  return retorno;
}
