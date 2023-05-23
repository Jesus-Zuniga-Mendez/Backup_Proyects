#@file Circulo.py
from .Figura import Figura
from math import pi

#@brief clase que modela un circulo
class Circulo (Figura):
    #@brief constructor de la clase
    def __init__(self, arregloVertices):
        self.cantidadPuntos=2
        self.listaVertices=arregloVertices
        self.radio = self.listaVertices[0]>>self.listaVertices[1]
        self.superficie()
        self.perimetro()
        self.identificador=Figura.universalid
        Figura.universalid=Figura.universalid+1
        self.paraImprimir = "Soy un circulo.\n Mi radio es: "  + str(self.radio) + "\nMi id es: "  + str(self.identificador)
        
    #@brief calcula el area de un circulo
    def superficie(self):
        self.area = pi*(self.radio)**(2)
        return(self.area)

    #@brief calcula el perimetro de un circulo        
    def perimetro(self):
        self.perimetrofig = (2*pi*(self.radio))
        return(self.perimetrofig)

def __eq__(self,objeto):
        self.puntos = objeto.puntos
        self.radio = objeto.radio
        self.perimetrofig = objeto.perimetrofig
        self.nombre = objeto.nombre
        self.color = objeto.color
        self.identificador = objeto.identificador
    