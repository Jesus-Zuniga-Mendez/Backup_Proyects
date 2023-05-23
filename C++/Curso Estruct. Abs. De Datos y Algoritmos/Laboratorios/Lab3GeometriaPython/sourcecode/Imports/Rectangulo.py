#@file Rectangulo.py
from .Figura import Figura

#@brief clase paramanejar figuras de tipo rectangulo
class Rectangulo(Figura):

    #@brief constructor de la clase
    def __init__(self, arregloVertices):
        distancias=[0, 0, 0]
        distancia_calc=0
        self.base=0
        self.altura=0
        self.cantidadPuntos=4
        self.listaVertices = arregloVertices
        self.identificador=Figura.universalid
        Figura.universalid=Figura.universalid+1
        
                 
        for i in range (0, 3):
            distancia_calc=self.listaVertices[0]>>self.listaVertices[i+1]
            distancias[i]=distancia_calc
        
        for i in range (0, 3): #tres porque son los vertices restantes con los que debe comparar la distancia
            if (i==0):
                if (distancias[i] > distancias[i+1] and distancias[i] > distancias[i+2]):
                    if (distancias[i+1] > distancias[i+2]):
                        self.base=distancias[i+1]
                        self.altura=distancias[i+2]
                    else:
                        self.base=distancias[i+2]
                        self.altura=distancias[i+1]
                    
            if (i==1):
                if (distancias[i] > distancias[i-1] and distancias[i] > distancias[i+1]):
                    if (distancias[i-1] > distancias[i+1]):
                        self.base=distancias[i-1]
                        self.altura=distancias[i+1]
                    else:
                        self.base=distancias[i+1]
                        self.altura=distancias[i-1]
                    
    
            if (i==2):
                if (distancias[i] > distancias[i-2]  and distancias[i] > distancias[i-1]):
                    if (distancias[i-2] > distancias[i-1]):
                        self.base=distancias[i-2]
                        self.altura=distancias[i-1]
                    else:
                        self.base=distancias[i-1]
                        self.altura=distancias[i-2]
        self.paraImprimir = "Soy un rectangulo.\n Mi base es: "  + str(self.base) + "\nMi altura es " + str(self.altura) + "\n" + "Mi id es: "  + str(self.identificador)
        self.superficie()
        self.perimetro()
    
    def __eq__(self, other):
        self.base=other.base
        self.altura=other.altura
        self.cantidadPuntos=other.cantidadPuntos
        self.listaVertices = other.listaVertices
        self.identificador=Figura.universalid
        Figura.universalid=Figura.universalid+1 
        self.nombre=other.nombre
        self.color=other.color     
        return
    
    
    #@brief calcula el area de un rectangulo
    def superficie(self):
        self.area = (self.altura*self.base)
        return(self.area)
    
    #@brief calcula el perimetro de un rectangulo
    def perimetro(self):
         self.perimetrofig = (self.altura*2)+(self.base*2)
         return(self.perimetrofig)
         