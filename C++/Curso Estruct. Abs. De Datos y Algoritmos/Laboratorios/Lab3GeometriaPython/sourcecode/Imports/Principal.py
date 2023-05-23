#@file Principal.py
from .Vertice import Vertice
from .Rectangulo import Rectangulo
from .Figura import Figura
from .Circulo import Circulo
from .Triangulo import Triangulo
from .Triangulo import Equilatero
from .Triangulo import Isosceles
from .Triangulo import Escaleno
from .Impresora import Impresora

class Principal:
    
    #@brief constructor, imprimime una bienvenida
    def __init__(self):
        print("\033[1;34m"+" _____  _                           _    _      ")
        print("| __  ||_| ___  ___  _ _  ___  ___ |_| _| | ___ ")
        print("| __ -|| || -_||   || | || -_||   || || . || . |")
        print("|_____||_||___||_|_| \\_/ |___||_|_||_||___||___|"+'\033[0;m')
        self.entrada=0
        self.instancia_creada=0
    
    #@brief despliega las opciones del menu
    def menu(self):
        #print("Yo soy universalid: ",Figura.universalid)
        print("Digite la opcion que desea realizar")
        print("   1: Ingresar un .....Rectangulo")
        print("   2: Ingrear un ......Triangulo")
        print("   3: Ingresar un .....Circulo")

        print("   0: SALIR")
        self.entrada=int(input())
        return self.entrada

    #@brief ejecuta el codigo para cada opcion escogida
    def opcion(self):
        if (self.entrada==1):
            self.MTDRECTANGULO()
            return
        
        if (self.entrada==2):
            self.MTDTRIANGULO()
            return
        
        if (self.entrada==3):
            self.MTDCIRCULO()
            return
        
                      
            #if (entrada2==2):
                
            #if (entrada2==3):


            


            
    #@brief Crea un arreglo de vertices
    #@param cantidad es la cantidad de vertices de la figura
    def HacerArregloVertices(self, cantidad):
            x = 0
            y = 0
            print("Digite los vertices en orden siguiendo las manecillas del reloj")
            for i in range (0, cantidad):
                print("\033[4m"+"Vertice #"+'\033[0;m',(i+1)) 
                x=float(input("Digite la coordenada en X\n"))
                y=float(input("Digite la coordenada en Y\n"))
                self.arregloVertices[i].x = x
                self.arregloVertices[i].y = y
            
    #@brief Crea un objeto de tipo rectangulo
    def MTDRECTANGULO(self):
        self.arregloVertices=[Vertice(), Vertice(), Vertice(), Vertice()]
        self.HacerArregloVertices(4)
        figura = Rectangulo(self.arregloVertices)
        figura.nombre=input("Digite el nombre de la figura ")
        figura.color=input("Digite el color de la figura ")
        ~figura
        imprimir = Impresora(figura)
        print("Desea construir una copia de esta figura?")
        self.arregloVertices=[]
        respuesta=int(input("1/Si; 2/No"))
        if (respuesta==1):
            figura2=figura
            figura2==figura
            imprimir = Impresora(figura2)
            print("Copiado con el id: ", Figura.universalid-1)


        return(figura)

    #@brief Crea un objeto de tipo circulo
    def MTDCIRCULO(self):
        self.arregloVertices=[Vertice(), Vertice()]
        self.HacerArregloVertices(2)
        figura = Circulo(self.arregloVertices)
        figura.nombre=input("Digite el nombre de la figura ")
        figura.color=input("Digite el color de la figura ")
        ~figura
        imprimir = Impresora(figura)
        return(figura)



    #@brief Crea un objeto de tipo triangulo
    def MTDTRIANGULO(self):
        self.arregloVertices=[Vertice(), Vertice(), Vertice()]
        self.HacerArregloVertices(3)
        self.distancias = [0,0,0]
        self.distancias[0]=round(self.arregloVertices[0]>>self.arregloVertices[1],5)
        self.distancias[1]=round(self.arregloVertices[1]>>self.arregloVertices[2],5)
        self.distancias[2]=round(self.arregloVertices[2]>>self.arregloVertices[0],5)
        if ((self.distancias[0] == self.distancias[1]) and (self.distancias[0] == self.distancias[2])):
            print("Equilatero")
            figura =Equilatero(self.arregloVertices, self.distancias)
            figura.nombre=input("Digite el nombre de la figura ")
            figura.color=input("Digite el color de la figura ")
            ~figura
            imprimir = Impresora(figura)
            return(figura)

            
        elif ((self.distancias[0] == self.distancias[1]) or (self.distancias[0] == self.distancias[2]) or (self.distancias[1] == self.distancias[2])):
            print("Isoseles")
            figura =Isosceles(self.arregloVertices, self.distancias)
            figura.nombre=input("Digite el nombre de la figura ")
            figura.color=input("Digite el color de la figura ")
            ~figura
            imprimir = Impresora(figura)
            return(figura)
        
        else:
            print("Escaleno")
            figura =Escaleno(self.arregloVertices, self.distancias)
            figura.nombre=input("Digite el nombre de la figura ")
            figura.color=input("Digite el color de la figura ")
            ~figura
            imprimir = Impresora(figura)
            return(figura)
