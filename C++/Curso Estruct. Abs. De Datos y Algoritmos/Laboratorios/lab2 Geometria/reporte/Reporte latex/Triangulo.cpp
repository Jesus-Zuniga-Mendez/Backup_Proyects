#include "../include/Includes.hpp"

using namespace std;


/**
 * @brief Constructor de tringulo
*/
triangulo::triangulo(){}

double triangulo::perimetro(){
  return ((this->lado1)+(this->lado2)+(this->lado3));
}
/**
 * @brief Destructor de tringulo
*/
triangulo::~triangulo(){}

/**
 * @brief sobrecarga del operador ~ para trinagulo
 */
string triangulo::operator~(){
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
             "Mi lado 1 es "+to_string(this->lado1)+ " \n"
             "Mi lado 2 es "+to_string(this->lado2)+ " \n"
             "Mi lado 3 es "+to_string(this->lado3)+ " \n"
             );
  return retorno;
}


//########################################################


//Especializaciones de triangulo

//No se añaden las foo perimetro, pues, eso está en la superclase triangulo

//########################################################
/**
 * @brief Constructor de equilatero
 * @param temp es un puntero de un arreglo de vertices
 */
Equilatero::Equilatero(Vertice *temp){
  this->puntos=temp;
  this->lado1=puntos[0]>>puntos[1];
  this->lado2=puntos[1]>>puntos[2];
  this->lado3=puntos[2]>>puntos[0];
  cout << "Lado 1:" << this->lado1 << endl;
  cout << "Lado 2:" << this->lado2 << endl;
  cout << "Lado 3:" << this->lado3 << endl;
  this->area = this->superficie();
  this->perimetrofig = this->perimetro();
  cout << "el area es: " << this->area << endl;
  cout << "el perimetro es: " << this ->perimetrofig << endl;

}
/**
 * @brief calcula la superficie
 */
double Equilatero::superficie(){
  return ((sqrt(3)/2) * pow(this->lado1,2));
}
Equilatero::~Equilatero(){}

/**
 * @brief sobrecarga del operador ~ para equilatero
 */
string Equilatero::operator~(){
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
             "Mi lado 1 es "+to_string(this->lado1)+ " \n"
             "Mi lado 2 es "+to_string(this->lado2)+ " \n"
             "Mi lado 3 es "+to_string(this->lado3)+ " \n"
             "Soy un Equilatero" + " \n"
             );
  return retorno;
}
//########################################################


//########################################################
/**
 * @brief Constructor de Escaleno
 * @param temp es un puntero de un arreglo de vertices
 */
Escaleno::Escaleno(Vertice *temp){
  cout <<"Dennispurador: Constructor por defecto de Escaleno";
  cout << endl;
  this->puntos=temp;
  this->lado1=puntos[0]>>puntos[1];
  this->lado2=puntos[1]>>puntos[2];
  this->lado3=puntos[2]>>puntos[0];
  cout << "Lado 1:" << this->lado1 << endl;
  cout << "Lado 2:" << this->lado2 << endl;
  cout << "Lado 3:" << this->lado3 << endl;
  this->area = this->superficie();
  this->perimetrofig = this->perimetro();
  cout << "el area es: " << this->area << endl;
  cout << "el perimetro es: " << this ->perimetrofig << endl;
}

/**
 * @brief destructor de Escaleno
 */
Escaleno::~Escaleno(){
    this->semiperimetro=(lado1+lado2+lado3)/2;
}
/**
 * @brief calcula la superficie de un Escaleno
 */
double Escaleno::superficie(){
  return (sqrt(abs( semiperimetro * (s-this->lado1) * (s-this->lado2) * (s-this->lado3))));
}

/**
 * @brief sobrecarga del operador ~ para Escaleno
 */
string Escaleno::operator~(){
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
             "Mi lado 1 es "+to_string(this->lado1)+ " \n"
             "Mi lado 2 es "+to_string(this->lado2)+ " \n"
             "Mi lado 3 es "+to_string(this->lado3)+ " \n"
             "Soy un Escaleno" + " \n"
             );
  return retorno;
}

//########################################################


//########################################################

/**
 * @brief Constructor de Isosceles
 * @param temp es un puntero de un arreglo de vertices
 */
Isosceles::Isosceles(Vertice *temp){
    cout <<"Dennispurador: Constructor por defecto de Isosceles";
    cout << endl;
    this->puntos=temp;
    float distancias[3];
    distancias[0]=puntos[0]>>puntos[1];
    distancias[1]=puntos[1]>>puntos[2];
    distancias[2]=puntos[2]>>puntos[0];
    for (int i=0; i<3; i++){ //tres porque son los vertices restantes con los que debe comparar la distancia
        if (i==0){

            if (distancias[i] > distancias[i+1] && distancias[i] > distancias[i+2]){
                    this->lado1=distancias[i+1];
                    this->lado2=distancias[i+2];
                    this->lado3=distancias[i];
            }
        }
        if (i==1){
            if (distancias[i] > distancias[i-1] && distancias[i] > distancias[i+1]){
                    this->lado1=distancias[i-1];
                    this->lado2=distancias[i+1];
                    this->lado3=distancias[i];
            }
        }

        if (i==2){
            if (distancias[i] > distancias[i-2]  && distancias[i] > distancias[i-1]){
                    this->lado1=distancias[i-2];
                    this->lado2=distancias[i-1];
                    this->lado3=distancias[i];
            }
        }
    }
    cout << "Lado 1:" << this->lado1 << endl;
    cout << "Lado 2:" << this->lado2 << endl;
    cout << "Lado 3:" << this->lado3 << endl;
    this->area = this->superficie();
    this->perimetrofig = this->perimetro();
    cout << "el area es: " << this->area << endl;
    cout << "el perimetro es: " << this ->perimetrofig << endl;
}
/**
 * @brief calcula la superficie
 */
double Isosceles::superficie(){
  return ( ((this->lado1)*(this->lado2))/2 );
}
Isosceles::~Isosceles(){}

/**
 * @brief sobrecarga del operador ~ para Isosceles
 */
string Isosceles::operator~(){
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
             "Mi lado 1 es "+to_string(this->lado1)+ " \n"
             "Mi lado 2 es "+to_string(this->lado2)+ " \n"
             "Mi lado 3 es "+to_string(this->lado3)+ " \n"
             "Soy un Isosceles" + " \n"
             );
  return retorno;
}
//########################################################


