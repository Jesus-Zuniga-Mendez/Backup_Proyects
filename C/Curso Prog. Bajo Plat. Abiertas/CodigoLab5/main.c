/**
 * @file main.c
 * @author Jesus Zuñiga Mendez
 * @brief Archivo pricipal, laboratorio que trata sobrememoria dinamica para la creacion de matrices
 * @version 1
 * @date 27 de mayo de 2019
 * @copyright Copyleft (l) 2019
 */
#include "./incl/matriz.h"
/**
 * @brief Funcion pricipal donde se llmaran las funciones creadas en matriz.c
 * @param argc cantidad de argumentos enviados por teclado
 * @param argv puntero a los argumentos enviados por teclado
 * @return devuelve 0 al finalizar el programa
 */
int main(int argc, char** argv)
{
    int s = 0;
    int seleccion = 0;
    int temporal = 0;
    int filasA;
    int columnasA;
    int filasB;
    int columnasB;
    int filasR;
    int columnasR;
    float** matrizA = NULL;
    float** matrizB = NULL;
    float** matrizResultado = NULL;
    int existeA = 0;
    int existeB = 0;
    int AB = 0;
    float escalar = 0;
    Bienvenido();
    do{
        printf("\n\n");
        seleccion = Menu();
        switch (seleccion)
        {
        case 1:
            printf("Seleccione la matriz que desea crear\n\t Digite:\n\t\t1 para matriz A\n\t\t2 para matriz B\n\t\t");
            s = scanf("%d",&AB);
            if (AB == 1){
                printf("Digite el numero de Filas\n");
                int s = scanf("%d",&filasA);
                printf("Digite el numero de Columnas\n");
                s = scanf("%d",&columnasA);
                if ((filasA ==0) || (columnasA ==0)){
                    printf("Error algun dato es cero");
                }else{
                    matrizA = CrearMatriz(filasA, columnasA);
                }
                if (matrizA == NULL){
                    printf("Error al crear la matriz A\n");
                }else{
                    printf("Matriz A creada con exito\nLLene los campos de la matriz\n\n");
                    existeA = 1;
                    matrizA = LlenarMatriz(matrizA,filasA,columnasA);
                }
            }else if (AB == 2){
                printf("Digite el numero de Filas\n");
                int s = scanf("%d",&filasB);
                printf("Digite el numero de Columnas\n");
                s = scanf("%d",&columnasB);
                if ((filasB ==0) || (columnasB ==0)){
                    printf("Error algun dato es cero");
                }else{
                    matrizB = CrearMatriz(filasB, columnasB);
                }
                if (matrizB == NULL){
                    printf("Error al crear la matriz A\n");
                }else{
                    printf("Matriz B creada con exito\nLLene los campos de la matriz\n\n");
                    existeB = 1;
                    matrizB = LlenarMatriz(matrizB,filasB,columnasB);
                }
            }
            break;
        case 2:
            printf("Seleccione la matriz que desea Limpiar\n\t Digite:\n\t\t1 para matriz A\n\t\t2 para matriz B\n\t\t");
            s = scanf("%d",&AB);
            if ((AB == 1) && (existeA == 1)){
                    matrizA = LimpiarMatriz(matrizA,filasA,columnasA);
                
            }else if ((AB == 2) && (existeB == 1)){
                    matrizB = LimpiarMatriz(matrizB,filasB,columnasB);
            }
            break;
        case 3:
            printf("Seleccione la matriz que desea Borrar\n\t Digite:\n\t\t1 para matriz A\n\t\t2 para matriz B\n\t\t");
            s = scanf("%d",&AB);
            if ((AB == 1) && (existeA == 1)){
                    free(matrizA);
                    filasA = 0;
                    columnasA = 0;
                    existeA = 0;
                
            }else if ((AB == 2) && (existeB == 1)){
                    free(matrizB);
                    filasB = 0;
                    columnasB = 0;
                    existeB = 0;
            }
            break;
        case 4:
            if((filasA == filasB) && (columnasA == columnasB) && (existeA ==1) && (existeB == 1)){
                matrizResultado = SumarMatrices(matrizA,matrizB,filasA,columnasA);
                ImprimirMatriz(matrizResultado,filasA,columnasA);
                free(matrizResultado);
            }else{
                printf("Imposible sumar matrices de diferentes dimensiones");
            }
            break;
        case 5:
            if((columnasA == filasB) && (existeA == 1) && (existeB == 1)){
                matrizResultado = MultiplicarMatrices(matrizA,matrizB,filasA,columnasA,filasB,columnasB);
                ImprimirMatriz(matrizResultado,filasA,columnasB);
                free(matrizResultado);
            }else{
                printf("Error en la dimension, las matrices deben ser m*N y N*c");
            }
            break;
        case 6:
            printf("Seleccione la matriz a la que desea sumar\n\t Digite:\n\t\t1 para matriz A\n\t\t2 para matriz B\n\t\t");
            s = scanf("%d",&AB);
            if ((AB == 1) && (existeA == 1)){
                printf("Digite el escalar\n");
                s = scanf("%f",&escalar);
                matrizA = SumarEscalar(matrizA,filasA,columnasA,escalar);
                ImprimirMatriz(matrizA,filasA,columnasA);
            }else if ((AB == 2) && (existeB == 1)){
                printf("Digite el escalar\n");
                s = scanf("%f",&escalar);
                matrizB = SumarEscalar(matrizB,filasB,columnasB,escalar);
                ImprimirMatriz(matrizB,filasB,columnasB);
            }
            break;
        case 7:
            printf("Seleccione la matriz a la que desea multiplicar\n\t Digite:\n\t\t1 para matriz A\n\t\t2 para matriz B\n\t\t");
            s = scanf("%d",&AB);
            if ((AB == 1) && (existeA == 1)){
                printf("Digite el escalar\n");
                s = scanf("%f",&escalar);
                matrizA = MultiplicarEscalar(matrizA,filasA,columnasA,escalar);
                ImprimirMatriz(matrizA,filasA,columnasA);
            }else if ((AB == 2) && (existeB == 1)){
                printf("Digite el escalar\n");
                s = scanf("%f",&escalar);
                matrizB = MultiplicarEscalar(matrizB,filasB,columnasB,escalar);
                ImprimirMatriz(matrizB,filasB,columnasB);
            }
            break;
        case 8:
            printf("Seleccione la matriz que desea Trasponer\n\t Digite:\n\t\t1 para matriz A\n\t\t2 para matriz B\n\t\t");
            s = scanf("%d",&AB);
            if ((AB == 1) && (existeA == 1)){
                matrizA = Transpuesta(matrizA,filasA,columnasA);
                temporal = filasA;
                filasA = columnasA;
                columnasA = temporal;
                ImprimirMatriz(matrizA,filasA,columnasA);
            }else if ((AB == 2) && (existeB == 1)){
                matrizB = Transpuesta(matrizB,filasB,columnasB);
                temporal = filasB;
                filasB = columnasB;
                columnasB = temporal;
                ImprimirMatriz(matrizB,filasB,columnasB);
            }
            break;      
        case 9:
            printf("Seleccione la matriz que desea imprimir\n\t Digite:\n\t\t1 para matriz A\n\t\t2 para matriz B\n\t\t");
            s = scanf("%d",&AB);
            if ((AB == 1) && (existeA == 1)){
                ImprimirMatriz(matrizA,filasA,columnasA);
            }else if ((AB == 2) && (existeB == 1)){
                ImprimirMatriz(matrizB,filasB,columnasB);
            }
            break;
        default:
            seleccion = 0;
            break;
        }
    }while (seleccion != 0);
/*
    int* matriz = MCrearMatriz(1,1);
    /*matriz[0] = 0;
    matriz[1] = 1;
    matriz[2] = 1;
    matriz[3] = 1;
    printf("tamaño: %ld",sizeof(matriz));
    printf("%d\n",matriz[0]);
    printf("%d\n",matriz[3]);
*/
    return 0;
}