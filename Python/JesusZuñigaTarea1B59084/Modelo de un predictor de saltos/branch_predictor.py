#Estructuras de computadoras 2
#Jesus Zuñiga Mendez
#B59084
#Tarea # 1 Branch predictor
#Escuela de ING ELECTRICA I Ciclo 2023 UCR

from optparse import OptionParser
import gzip
from time import *
from io import *
import time

try:
    from perceptron import *
except:
    print("No se pudo importar el predictor de perceptrones perceptron.py")
try:
    from ie0521_bp import *
except:
    print("No se pudo importar el predictor propuesto ie0521_bp.py")
try:
    from bimodal import *
except:
    print("No se pudo importar el predictor bimodal.py")
try:
    from gshared import *
except:
    print("No se pudo importar el predictor gshared.py")


# Los argumentos de entrada serán los siguientes:
# 1. La cantidad de bits del PC utilizados para indexar (-n) la tabla de perceptrones. Es
# decir, la cantidad de perceptrones está dada por 2^n.
# 2. Tamaño del registro de historia global (-g). Es decir, la cantidad de bits en el registro de
# historia es g.
# 3. Tipo de predictor (--bp). Será un número entero y puede ser 0, para denotar el predictor
# de saltos basado en perceptrones o 1 para denotar el predictor de saltos propuesto por
# cada persona estudiante

#para medir el tiempo de ejecucion mide el inicio
inicio = time.time()
#
#define parametros de ejecucion
parser = OptionParser()
parser.add_option("-n", dest="bits_to_index")
parser.add_option("--bp", dest="branch_predictor_type")
parser.add_option("-g", dest="global_history_size")
parser.add_option("-t", dest="TRACE_FILE", default="./branch-trace-gcc.trace.gz")
#
#recibe paramentros de consola
(options, args) = parser.parse_args()
#
#bloque if selecciona el predictor deseado, por defecto se escoge el propuesto
if options.branch_predictor_type == "0":
    try:
        branch_predictor = perceptron(int(options.bits_to_index),int(options.global_history_size))
        branch_predictor.print_info()
    except:
        print("Error al cargar el predictor de perceptrones, asegurese que el archivo perceptron.py esté en su PATH")
        exit()
elif options.branch_predictor_type == "1":
    try:
        branch_predictor = ie0521_bp()
        branch_predictor.print_info()
    except:
        print("Error al cargar el predictor propuesto, asegurese que el archivo ie0521_bp.py esté en su PATH")
        exit()
elif options.branch_predictor_type == "2":
    try:
        branch_predictor = bimodal(int(options.bits_to_index))
        branch_predictor.print_info()
    except:
        print("Error al cargar el predictor bimodal, asegurese que el archivo bimodal.py esté en su PATH")
        exit()
elif options.branch_predictor_type == "3":
    try:
        branch_predictor = gshared(int(options.bits_to_index),int(options.global_history_size))
        branch_predictor.print_info()
    except:
        print("Error al cargar el predictor ghared, asegurese que el archivo gshared.py esté en su PATH")
        exit()
else:
    try:
        branch_predictor = ie0521_bp()
        branch_predictor.print_info()
    except:
        print("Error al cargar el predictor propuesto, asegurese que el archivo ie0521_bp.py esté en su PATH")
        exit()
#
#devuelve el numero de lineas del archivo a evaluar con el fin de hacer la ejecucion más amigable
def contarLineas():
    try:
        print("Cargando Archivo Tracer...")
        with gzip.open(options.TRACE_FILE,'rt') as trace_fhcopia:
            total_lines = sum(1 for line in trace_fhcopia)
    except:
            print("Error, el archivo Tracer " + options.TRACE_FILE + " se encuentra dañado o es inexistente")
            total_lines = 0
            exit()
    return total_lines
#
##Calcula cuanto contribuye cada linea del archivo al porcentaje de avance
##para dar una ejor experiencia al usuario esto se despliega y asi se sabe cuanto 
##avance lleva
lineasTotales = 16416279
lineasTotales = contarLineas()
pesoPorLinea = 100/lineasTotales
#
#Inicializa variables necesarias para ejecucion
total = 0
totalRedondeado = 0
totalRedondeadoAnterior = 0
avance = "█"
#
#Imprime la referencia de avance
print("Tracer cargado con éxito!!!")
print("Prediciendo saltos:...")
print(avance + str(totalRedondeado)+"%", end='\r')
avance = avance + "█"
detener = 0
#####
#En esta sección se recorre el Tracer
contador = 0
with gzip.open(options.TRACE_FILE,'rt') as trace_fh:
    for line in trace_fh:
        #sirve para terminar el programa a cierta cantiodad de lineas computadas
        contador = contador +1
        if contador == 0:
            exit()
        #quita espacios en blanco en los extremos
        line = line.rstrip()
        #separa las dos palabras
        PC,result = line.split(" ")
        #metodos para ejecutar el predictor
        prediction = branch_predictor.predict(PC)
        branch_predictor.update(PC, result, prediction)
        #Calcula e imprime el porcentaje de avance
        total = total + pesoPorLinea
        totalRedondeado = round(total)
        if totalRedondeado > totalRedondeadoAnterior:
            print(avance + str(totalRedondeado)+"%", end='\r')
            avance = avance + "█"
            totalRedondeadoAnterior = totalRedondeado
    #imprime una salto en la linea para salir de la linea de carga
    print("", end='\n')    

#imprime la info del predictor
branch_predictor.print_stats()
#para medir el tiempo de ejecucion
fin = time.time() - inicio
#imprime el tiempo de ejecucion
print("Predictor evaluado con "+str(lineasTotales)+" lineas en "+str(fin)+" segundos.")
