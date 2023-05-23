#Estructuras de computadoras 2
#Jesus Zuñiga Mendez
#B59084
#Tarea # 1 Branch predictor
#Escuela de ING ELECTRICA I Ciclo 2023 UCR

class perceptron:
    def __init__(self,bitsPC,bitsHistoria):
        #se declara la variable yout
        self.yout=0
        ##se define la cantidad de bits del PC
        self.bits_to_index = bitsPC
        #se define el tamaño de la historia
        self.global_history_size = bitsHistoria
        #inicializa el vector de historia segun los bits indicados
        self.global_branch_history = []
        for i in range(self.global_history_size):
            self.global_branch_history.append(-1)
        #self.Xi = np.array(self.global_branch_history)
        self.Xi = self.global_branch_history
        #se crea el vector de pesos
        self.pesosV = []
        for i in range(self.global_history_size):
            self.pesosV.append(1)
        #self.Wi = np.array(self.pesosV)
        self.Wi = self.pesosV
        #se calcula el tamaño de la tabla
        self.size_of_branch_table = 2**self.bits_to_index
        ##se crea la tabla
        vectorPrueba = self.Wi.copy() 
        self.branch_table = [vectorPrueba for i in range(self.size_of_branch_table)]
        #se define h
        h = self.global_history_size
        #se caclula el umbral
        self.umbral = ((1.93 * h)+ 14) 
        #variables para arrojar resultados
        self.total_predictions = 0
        self.total_taken_pred_taken = 0
        self.total_taken_pred_not_taken = 0
        self.total_not_taken_pred_taken = 0
        self.total_not_taken_pred_not_taken = 0
    def print_info(self):
        print("Parámetros del predictor:")
        print("\tTipo de predictor:\t\t\tPerceptron")
        print("\tBits del PC para indexar:\t\t\t"+str(self.bits_to_index))
        print("\tTamaño de los registros de historia global:\t"+str(self.global_history_size))

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

    def predict(self, PC):
        salida = "T"
        #se calcula el indice del PC
        PC_index = int(PC) % self.size_of_branch_table
        PesoEnIndex = self.branch_table[PC_index]
        #se obtiene la salida
        #self.yout = PesoEnIndex[0] + (PesoEnIndex[1:len(PesoEnIndex)].dot(self.Xi[1:len(PesoEnIndex)])>self.umbral)
        self.yout = PesoEnIndex[0]
        aux = 0
        for i in range(len(PesoEnIndex)):
            if i > 0:
                aux = aux + PesoEnIndex[i] * self.Xi[i]
        self.yout = self.yout + aux
        if self.yout >= 0:
            salida = "T"
        else:
            salida = "N"
        return salida
  

    def update(self, PC, result, prediction):
        #se actualiza la hostoria global con un registro deslizante
        nuevo = 0
        if (result == "T"):
            nuevo = 1
        for i in range(self.global_history_size):
            if i ==  self.global_history_size -1:
                self.Xi[i] = nuevo
            else:
                self.Xi[i] = self.Xi[i+1]
        self.Xi[0] = 1
        #se calcula el indice del PC
        PC_index = int(PC) % self.size_of_branch_table
        TPesoEnIndex = self.branch_table[PC_index]
        PesoEnIndex = TPesoEnIndex.copy()
        #se define el valor de t
        t=0
        if (result == "T"):
            t = 1
        else:
            t = -1
        #entrenamiento del perceptron
        #se actualiza el peso de la tabla
        if ((prediction != result) or (abs(self.yout) < self.umbral)):
            for i in range(0,len(PesoEnIndex)):
                PesoEnIndex[i] = PesoEnIndex[i] +  (t * self.Xi[i])
        self.branch_table[PC_index] = PesoEnIndex
        #se actualiza el xi segun sea la prediccion
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

