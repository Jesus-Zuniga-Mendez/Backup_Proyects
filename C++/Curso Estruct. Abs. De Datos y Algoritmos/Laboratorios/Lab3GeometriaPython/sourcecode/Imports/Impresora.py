#@file Impresora.py

#@brief clase que imprmime objetos
class Impresora:    
    #@brief constructor creado mediante template
    #@param fig es el objeto recibido por parametro
    def __init__(self, figura):
        self.imprimirPantalla(figura)
        self.imprimirArchivo(figura)

    #@brief metodo que permite imprmir la pantalla
    #@param objeto es el objeto que debe imprimir 
    def imprimirPantalla(self, figura):
        print(figura.paraImprimir)
    
    #@brief metodo que permite imprmir a un archivo
    #@param objeto es el objeto que debe imprimir 
    def imprimirArchivo(self, objeto):
        rutaArchivo= "./"+objeto.nombre
        archivo = open(rutaArchivo, "w")
        archivo.write(objeto.paraImprimir)
        print("se creo el archivo " + rutaArchivo)
        archivo.close()
