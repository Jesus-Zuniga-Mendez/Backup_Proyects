#@file Triangulo.py

from .Figura import Figura
from abc import *
import math
    
# @brief calse tringulo 
class Triangulo(Figura):
    def __init__(self):
        self.lado1 =0
        self.lado2 =0
        self.lado3 =0


    # @brief constructor por copia
    # @param objetp es un objeto 
    def __eq__ (self,objeto):
        self.puntos = objeto.puntos
        self.area = objeto.area
        self.perimetrofig = objeto.perimetrofig
        self.nombre = objeto.nombre
        self.color = objeto.color
        self.identificador = objeto.identificador
        self.lado1 = objeto.lado1
        self.lado2 = objeto.lado2
        self.lado3 = objeto.lado3
    
    # @brief calcula el perimetro
    def perimetro(self):
        return ((self.lado1)+(self.lado2)+(self.lado3))

# @brief clase Escaleno
     
class Escaleno(Triangulo):

    # @brief Constructor de Escaleno
    # # @param vertices es un arreglo de vertices
    def __init__(self, arregloVertices, lados):
        self.listaVertices = arregloVertices
        self.cantidadPuntos = 3
        self.lado1=lados[0]
        self.lado2=lados[1]
        self.lado3=lados[2]
        self.semiperimetro=(self.lado1+self.lado2+self.lado3)/2
        self.area = self.superficie()
        self.perimetrofig = self.perimetro()
        self.identificador=Figura.universalid
        Figura.universalid=Figura.universalid+1
        self.paraImprimir = "Soy un Triangulo.\n Mi lado 1 es : "  + str(self.lado1) + "\n Mi lado 2 es : "  + str(self.lado2)+ "\n Mi lado 3 es : "  + str(self.lado3)  + "\nMi id es: "  + str(self.identificador)


    # @brief constructor por copia
    # @param objeto es un objeto
    def __eq__(self,objeto):
        self.puntos = onjeto.puntos
        self.area = objeto.area
        self.perimetrofig = objeto.perimetrofig
        self.nombre = objeto.nombre
        self.color = objeto.color
        self.identificadorEstatico = objeto.identificador
        self.lado1 = objeto.lado1
        self.lado2 = objeto.lado2
        self.lado3 = objeto.lado3

    # @brief calcula la superficie de un Escaleno
    def superficie(self):
        s = self.semiperimetro
        return (math.sqrt(abs(self.semiperimetro * (s-self.lado1) * (s-self.lado2) * (s-self.lado3))))


# @brief calse equilatero
class Equilatero(Triangulo): 
    # @brief Constructor de equilatero
    # @param vertices es un arreglo de vertices
    def __init__(self, arregloVertices,lados):
        self.listaVertices = arregloVertices
        self.cantidadPuntos = 3
        self.lado1=lados[0]
        self.lado2=lados[1]
        self.lado3=lados[2]
        self.area = self.superficie()
        self.perimetrofig = self.perimetro()
        self.identificador=Figura.universalid
        Figura.universalid=Figura.universalid+1
        self.paraImprimir = "Soy un Triangulo.\n Mi lado 1 es : "  + str(self.lado1) + "\n Mi lado 2 es : "  + str(self.lado2)+ "\n Mi lado 3 es : "  + str(self.lado3) + "\nMi id es: "  + str(self.identificador)




    # @brief constructor por copia
    # @param objeto es un objeto
    def __eq__(self, objeto):
        self.puntos = objeto.puntos
        self.area = objeto.area
        self.perimetrofig = objeto.perimetrofig
        self.nombre = objeto.nombre
        self.color = objeto.color
        self.identificadorEstatico = objeto.identificador
        self.lado1 = objeto.lado1
        self.lado2 = objeto.lado2
        self.lado3 = objeto.lado3


    # @brief calcula la superficie        
    def superficie(self):
        return ((math.sqrt(3)/4) * pow(self.lado1,2))


# @brief calse Isosceles
class Isosceles(Triangulo):
    # @brief Constructor de Isosceles
    # # @param vertices es un puntero de un arreglo de vertices
    def __init__(self, arregloVertices, lados):
        self.listaVertices = arregloVertices
        self.cantidadPuntos = 3
        self.distancias = [0,0,0]
        self.distancias[0]=lados[0]
        self.distancias[1]=lados[1]
        self.distancias[2]=lados[2]
        self.identificador=Figura.universalid
        Figura.universalid=Figura.universalid+1

        for i in range(0,3):#tres porque son los vertices restantes con los que debe comparar la distancia
            if (i==0):
                if (self.distancias[i] > self.distancias[i+1] and self.distancias[i] > self.distancias[i+2]):
                        self.lado1=self.distancias[i+1]
                        self.lado2=self.distancias[i+2]
                        self.lado3=self.distancias[i]
            if (i==1):
                if (self.distancias[i] > self.distancias[i-1] and self.distancias[i] > self.distancias[i+1]):
                        self.lado1=self.distancias[i-1]
                        self.lado2=self.distancias[i+1]
                        self.lado3=self.distancias[i]
            if (i==2):
                if (self.distancias[i] > self.distancias[i-2]  and self.distancias[i] > self.distancias[i-1]):
                        self.lado1=self.distancias[i-2]
                        self.lado2=self.distancias[i-1]
                        self.lado3=self.distancias[i]

        self.paraImprimir = "Soy un Triangulo.\n Mi lado 1 es : "  + str(self.lado1) + "\n Mi lado 2 es : "  + str(self.lado2)+ "\n Mi lado 3 es : "  + str(self.lado3)  + "\nMi id es: "  + str(self.identificador)
        self.area = self.superficie()
        self.perimetrofig = self.perimetro()
        
    # @brief constructor por copia
    # @param objeto es un objeto
    def __eq__(self,objeto):
        self.puntos = objeto.puntos
        self.area = objeto.area
        self.perimetrofig = objeto.perimetrofig
        self.nombre = objeto.nombre
        self.color = objeto.color
        self.identificador = objeto.identificador
        self.lado1 = objeto.lado1
        self.lado2 = objeto.lado2
        self.lado3 = objeto.lado3
    
    
    # @brief calcula la superficie
    def superficie(self):
        return (((self.lado1)*(self.lado2))/2 )