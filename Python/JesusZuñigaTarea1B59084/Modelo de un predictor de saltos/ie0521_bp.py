#Estructuras de computadoras 2
#Jesus Zuñiga Mendez
#B59084
#Tarea # 1 Branch predictor
#Escuela de ING ELECTRICA I Ciclo 2023 UCR


#Predictor propuesto JZM2023
#Explicacion del predictor
        #Sabemos que los saltos por lo general no se toman frecuentemente o se toman muy frecuentemente, 
        #como por ejemplo en los bucles donde solo una vez de la n cantidad de veces que se hace el bucle 
        #no toma el salto, además en el TRACER de ejmplo las direcciones del pc son decimales pero si se 
        #convierten a binario se daran cuenta que son direcciones de 22 bits, por lo que este predictor
        #guarda en una tabla que se indexa segun los 12 ultimos bits de la palabra del pc si el salto
        #anterior se tomó o no y en otra tabla que indexa segun los 7 primeros bits de la palabra si se 
        #tomo el salto o no con esto se logra abarcar la mayporia de bits de la palabra con el fin 
        #de hacer un registro de pesos en el que se defina entre ambas tablas si el salto debe o no
        #ser tomado
class ie0521_bp:
    def __init__(self):
        self.auxiliar=0
        #Variables que ayudan a estimar el presupuesto utilizado
        self.presupuestoOtorgado = 65536
        self.presupuestoGastado = 0
        self.presupuestoSobrante = 0
        #variables que hardcodean el tamaño del predictor
        self.maxTamanioPC = 14         #Tamanio maximo de la palabra que se recibe en el pc, editar de ser necesario
        self.maxTamanioHistoria = 4          #Tamaño del forro del empaquetado
        #se calcula el tamanio de la tabla y se crea
        #|_____|Hisotria    |
        #|PC_i |HisotriaPC_i|
        #|   :      :       |
        #|   :      :       |
        #|PC_n |HisotriaPC_n|
        self.tamanioTablas = 2**self.maxTamanioPC        #cantidad de registros que se pueden almacenar en la tabla
        self.vectorHistoria = [0 for i in range(self.maxTamanioHistoria)]
        self.laTabla = [self.vectorHistoria for i in range(self.tamanioTablas)]
        #se calcula el presupuesgto
        self.presupuestoGastado = self.presupuestoGastado + (self.maxTamanioHistoria * self.tamanioTablas)
        self.presupuestoSobrante = self.presupuestoOtorgado - self.presupuestoGastado
        #Variables necesarias para devolver el resultado del predicto
        self.total_predictions = 0
        self.total_taken_pred_taken = 0
        self.total_taken_pred_not_taken = 0
        self.total_not_taken_pred_taken = 0
        self.total_not_taken_pred_not_taken = 0
        ###########
    def print_info(self):
        print("Parámetros del predictor:")
        print("\tTipo de predictor:\t\t\tJZMFilter2023BP")
        print("\tBits del PC para indexar:\t\t\t"+str(self.maxTamanioPC))
        print("\tTamaño de los registros de historia global:\t"+str(self.maxTamanioHistoria))
        print("Informacion sobre presupuesto: ")
        self.printPresupuesto()
    #########        
    def print_stats(self):
        print("Resultados de la simulación")
        print("\t# branches:\t\t\t\t\t\t"+str(self.total_predictions))
        print("\t# branches tomados predichos correctamente:\t\t"+str(self.total_taken_pred_taken))
        print("\t# branches tomados predichos incorrectamente:\t\t"+str(self.total_taken_pred_not_taken))
        print("\t# branches no tomados predichos correctamente:\t\t"+str(self.total_not_taken_pred_not_taken))
        print("\t# branches no tomados predichos incorrectamente:\t"+str(self.total_not_taken_pred_taken))
        perc_correct = 100*(self.total_taken_pred_taken+self.total_not_taken_pred_not_taken)/self.total_predictions
        formatted_perc = "{:.3f}".format(perc_correct)
        print("\t% predicciones correctas:\t\t\t\t"+str(formatted_perc)+"%")
    ##########
    def predict(self, PC):
        #se calcula el tamanio de la pc evaluada para ajustarla al maxTamanioPalabra
        indexPC = int(PC) % self.tamanioTablas
        ##se dezplaza el registro de historia actualizando  segun el resultado
        historiaPC = self.laTabla[indexPC]
        copiaHistoria= historiaPC.copy()
        prediccion = "N"
        rve = 5
        for i in range(len(copiaHistoria)):
            if i == 0:
                rve = copiaHistoria[i] + copiaHistoria[i+1]
            elif i > 1:
                rve = rve + copiaHistoria[i]

        if rve == 0:
            tamanioVector = len(copiaHistoria)
            final = tamanioVector - 1
            if (copiaHistoria[final] == -1) and (copiaHistoria[final-1] == -1):
                prediccion = "N"
            elif(copiaHistoria[final] == 1) and (copiaHistoria[final-1] == -1):
                prediccion = "N"
            elif(copiaHistoria[final] == -1) and (copiaHistoria[final-1] == 1):
                prediccion = "T"
            elif(copiaHistoria[final] == 1) and (copiaHistoria[final-1] == 1):
                prediccion = "T"
            else:
                prediccion = "N"
        elif rve > 0:
            prediccion = "T"
        else:
            prediccion = "N"
        return prediccion
    ##########
    def update(self, PC, result, prediction):
        #se calcula el tamanio de la pc evaluada para ajustarla al maxTamanioPalabra
        indexPC = int(PC) % self.tamanioTablas
        ##se dezplaza el registro de historia actualizando  segun el resultado
        historiaPC = self.laTabla[indexPC]
        copiaHistoria= historiaPC.copy()
        bitGuardar = 0
        if result == "T":
            bitGuardar = 1
        if result == "N":
            bitGuardar = -1
        for i in range(len(copiaHistoria)):
            if i < (len(copiaHistoria) - 1):
                copiaHistoria[i] = copiaHistoria[i+1]
            else:
                copiaHistoria[i] = bitGuardar
        self.laTabla[indexPC] = copiaHistoria
        #Update stats
        if result == "T" and result == prediction:
            self.total_taken_pred_taken += 1
        elif result == "T" and result != prediction:
            self.total_taken_pred_not_taken += 1
        elif result == "N" and result == prediction:
            self.total_not_taken_pred_not_taken += 1
        else:
            self.total_not_taken_pred_taken += 1
        self.total_predictions += 1

    #metodo auxiliar para ver el contenido de la historia en un index de la tabla
    def printTabla(self,index):
        print("imprimiendo la Historia en el indice "+str(index))
        print(self.laTabla[index])
    #metodo auxiliar para ver el presupuesto estimado
    def printPresupuesto(self):
        print("Otorgado:    ",end="")
        print(self.presupuestoOtorgado,end="    ")
        print("Gastado:    ",end="")
        print(self.presupuestoGastado,end="    ")
        print("Sobrante:    ",end="")
        print(self.presupuestoSobrante,end="\n")
    #preuab grafica de pesos 
    def pruebaPesos(self):
        lista = [
        [-1,-1,-1],
        [-1,-1,1],
        [-1,1,-1],
        [-1,1,1],
        [1,-1,-1],
        [1,-1,1],
        [1,1,-1],
        [1,1,1]]
        rve = 5
        for ii in range(len(lista)):
            vactor = lista[ii]
            for i in range(len(vactor)):
                if i == 0:
                    rve = vactor[i] + vactor[i+1]
                elif i > 1:
                    rve = rve + vactor[i]
            print (vactor, end=' ')
            print (rve, end='\n')
        exit()


