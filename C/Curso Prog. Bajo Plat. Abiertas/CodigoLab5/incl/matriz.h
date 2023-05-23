/**
 * @file matriz.h
 * @brief Archivo que contiene lo headers de las funciones
 */
#include <stdlib.h>
#include <stdio.h>
//tools.c
void Bienvenido();
int Menu();
//matriz.c
void ImprimirMatriz(float**,int , int );
float** LlenarMatriz(float** ,int , int );
float** CrearMatriz (int, int);
float** LimpiarMatriz(float** ,int , int );
float** SumarMatrices(float** ,float** ,int , int );
float** MultiplicarMatrices(float** ,float** ,int , int ,int ,int);
float** SumarEscalar(float** ,int , int ,float );
float** MultiplicarEscalar(float** ,int , int ,float );
float** Transpuesta(float** ,int , int );