#@file Figura.py
from abc import *
from .Vertice import Vertice


#@brief Clase que crea Figuras en el espacio 2D
class Figura(Vertice):
    universalid=0
    #@brief constructor de figura
    def __init__(self,vertices):
        
        
        self.nombre=""
        self.color=""
        self.paraImprimir = ""; 
        self.identificador=Figura.universalid
        Figura.universalid=Figura.universalid+1
        self.listaVertices = []
        self.lado=0
        self.area=0
        self.perimetrofig=0
        self.cantidadPuntos = 0
        self.superficie()
        self.perimetro()
        
    #@brief calcula el area de una figura por defecto
    @abstractmethod
    def superficie(self):
        self.area=self.lado**2
        return (self.area)

    #@brief calcula el perimetro de una figura por defecto
    @abstractmethod
    def perimetro(self):
        self.perimetrofig=self.lado*(self.cantidadPuntos)
        return (self.perimetro)
    
    #@brief Sobrecarga del operador ~ 
    #@return Devuelve la representacion en texto de una Figura
    def __invert__(self):
        respuesta = "Lista de vertices \n"
        for i in range(0,self.cantidadPuntos):
            respuesta = respuesta + "Vertice " + str(i+1) + "\n"
            respuesta = respuesta + ~self.listaVertices[i] + "\n"
        respuesta = respuesta + "\n"
        respuesta = respuesta + "Mi nombre es: " + str(self.nombre) + "\n"
        respuesta = respuesta + "Mi color es: " + str(self.color) + "\n"
        respuesta = respuesta + "Mi superfice es: " + str(self.area) + "\n"
        respuesta = respuesta + "Mi perimetro es: " + str(self.perimetrofig) + "\n"
        self.paraImprimir = self.paraImprimir + "\n" + respuesta
        return respuesta
    