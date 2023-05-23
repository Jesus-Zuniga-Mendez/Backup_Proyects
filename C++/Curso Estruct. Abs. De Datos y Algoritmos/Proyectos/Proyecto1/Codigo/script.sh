#!/bin/bash 
CONTADOR=0
#for i in `seq 1 12`
#do
#    while [  $CONTADOR -lt 1 ]; do
#        echo $conta
#        ./binaries/proyecto1 ../../../../imagenesProyecto1/tiempos/rectangulos/$i.png M 0 >> ./tiempos/rectangulo$i.txt
#        let CONTADOR=CONTADOR+1 
#    done
#    echo $i
#done

V1=7
for ((v1 = 1; v1 <= 7; v1++)); do
 
    echo "Start $v1:"
 
    for ((v2 = 1; v2 <= 100; v2++)); do
 
        ./binaries/proyecto1 ../../../../imagenesProyecto1/tiempos/fractales/frc2_$v1.png S 0 >> ./tiempos/fractalesSquareO2$v1.txt

    done
 
done