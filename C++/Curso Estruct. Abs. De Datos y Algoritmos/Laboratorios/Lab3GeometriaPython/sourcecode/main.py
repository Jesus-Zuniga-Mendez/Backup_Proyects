
#@brief modulo donde se ejecuta el codigo 

#from Imports.Vertice import Vertice
#from Imports.Figura import Figura
from Imports.Principal import Principal
#from Imports.Rectangulo import Rectangulo
#from Imports.Circulo import Circulo
#from Imports.Triangulo import Triangulo


controlador = Principal()
respuesta = 1
while respuesta != 0:
    respuesta = controlador.menu()
    controlador.opcion()
