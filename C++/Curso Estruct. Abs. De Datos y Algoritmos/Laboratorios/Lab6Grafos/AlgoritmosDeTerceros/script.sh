#!/bin/bash 
CONTADOR=0
while [  $CONTADOR -lt 1000 ]; do
	./binaries/binario $CONTADOR >> tiemposX.txt
	echo $CONTADOR >> tiemposY.txt
	let CONTADOR=CONTADOR+1 
done
