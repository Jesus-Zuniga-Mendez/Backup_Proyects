
#@file ARN_Comparator.c
#@Author Dennis Chavarria
#@date 22/8/2019
#@brief Programa con capacidad de comparar una cadena de ARN introducida, 
# con una base de datos, para asi, devolver el nombre de las tripletas que la componen


from numpy import array
#Print("Dasio Software Solutions (C)\n")

#@brief Comparator: Esta funcion debe comparar el codon con el elemento de la primera
#  columna de el archivo ARN_TABLE y devolver un resultado sobre si corresponde a una 
# proteina conocida o no
#@param Codon corresponde a tres letras, de la linea introducida al inicio.
#  Este parametro es el que se compara con los datos de la tabla
#@return 0 De este modo sale de la funcion sin tener que anadir mas logica al programa

def comparator(codon):
    file=open("ARN_TABLE.txt", "r")
    counter=0
    print(codon)
    for j in range (0,64):
        file_row=file.readline()
        line_elements=file_row.split(';')
        for i in range (0,3):
            if codon[i]==line_elements[0][i]:
                counter+=1
        if counter==3:
            print("El codon anterior corresponde a: %s" %line_elements[2])
            return(line_elements[1])  #This return is required because, by this, we dont 
        need to add extra lines if the codon matches with any of the list. 
        else:
            counter=0
    print("El codon %s no corresponde a ningun aminoacido" %codon)
    file.close()
#@brief Main: Esta parte de el codigo constituye el eje central y se encarga de solicitar
#  la cadena de ARN e invocar la foo Comparator. Ademas, determina si la cadena es analizable o no 



arn=input("Introduzca la cadena de ARN\n")
arn_row=arn.upper()
print("\n")
arn_verifier=len(arn_row)%3
codon=[]
codon_translate=[]

if (arn_verifier == 0):
    ordenador=0
    repeater=int(len(arn_row)/3) #remember, it starts at zero      
    for i in range (0, repeater): #Ciclo para estudiar toda la fila
        for i in range (0, 3): #Ciclo para crear el codon por analizar
            codon.append(arn_row[i+(ordenador*3)])
        ordenador+=1
        codon_translate.append(comparator(codon))
        codon=[]
    print("\nEntonces, la cadena es %s" %codon_translate)
else:
    print("Debe introducir una cadena con una cantidad de letras que sea multiplo de 3")