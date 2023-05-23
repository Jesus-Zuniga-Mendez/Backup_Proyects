Importante: El codigo está escrito en python y probado en su versión 3.11.3 en un sistema operativo Windows 10

Para compilar el programa se debe:

0 Descomprimir el archivo JesusZuñigaTarea1B59084.zip 
1 En una terminal entrar en el PATH de la carpeta descomprimida "JesusZuñigaTarea1B59084"
2 Escribir en la terminal >> python branch_predictor.py, por defecto se ejecutará el predictor propuesto
3 Puede usar los siguientes argumentos:
                        -n "numero": cantidad de perceptrones dado por 2^numero 
                        -g "numero": tamaño del registro de historia global
                      --bp "numero": 0 para el predictor de perceptrones, 1 para predictor propuesto
                          -t "PATH": puede cambiar el Trace File colocando un path distinto por defecto 
                                     se utiliza el branch-trace-gcc.trace.gz proporcionado en el archivo zip

4 Si ve los mensajes:
No se pudo importar el predictor bimodal.py
No se pudo importar el predictor gshared.py
no existe ningun problema el codigo trabaja perfectamente

El predictor basado en Perceptrones es una implementacion propia basada en el paper Dynamic Branch Prediction with Perceptrons de Daniel A. JimCnez