#@file Vertice.py

#@brief Clase que crea vertices en el espacio 2D
class Vertice:
    #@brief constructor de vertice
    def __init__(self):
        self.x=0 #Valor para la coordenada x en la que se encuentra el vertice
        self.y=0 #Valor para la coordenada y en la que se encuentra el vertice
        self.identificador = 0
    
    #@brief Sobrecarca de operador  ">>" calcula la distancia entre dos vertices
    #@param other es el otro vertice
    def __rshift__(self, other): 
        distancia = 0
        xcuadrado = (self.x - other.x)
        ycuadrado = (self.y - other.y)
        xcuadrado = (xcuadrado)**2
        ycuadrado = (ycuadrado)**2
        distancia = (xcuadrado + ycuadrado)**(1/2)
        return distancia

    #@brief Sobrecarca de operador  "~" representacion de texto de un vertice 
    #@return Devuelve la representacion en texto de un vertice
    def __invert__(self):
        respuesta = "Coordenada en X es:" + str(self.x) + " y mi Coordenada en Y es:" + str(self.y)
        return respuesta