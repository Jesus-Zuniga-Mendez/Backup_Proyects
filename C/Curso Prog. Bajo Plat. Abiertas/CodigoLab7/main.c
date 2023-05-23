/**
 * @file main.c
 * @author Jesus Zuñiga Mendez
 * @brief Archivo pricipal, laboratorio que trata sobre listas enlazadas
 * @version 1.0
 * @date 20 de junio de 2019
 * @copyright Copyleft (l) 2019
 */
#include "./include/includes.h"

/**
 * @brief Función que imprime una bienvenida para el usuario
 */
void Bienvenida(){
    printf("  ____   _                                 _      _          _  _  _ \n |  _ \\ (_)                               (_)    | |        | || || |\n | |_) | _   ___  _ __ __   __ ___  _ __   _   __| |  ___   | || || |\n |  _ < | | / _ \\| '_ \\\\ \\ / // _ \\| '_ \\ | | / _` | / _ \\  | || || |\n | |_) || ||  __/| | | |\\ V /|  __/| | | || || (_| || (_) | |_||_||_|\n |____/ |_| \\___||_| |_| \\_/  \\___||_| |_||_| \\__,_| \\___/  (_)(_)(_)\n"); 
    printf("\n");
    printf("\n");
}
/**
 * @brief Funcion que imprime el menu
 * @return seleccion Es la opcion escogida por el usuario
 */
int Menu(){
    printf("Digite el numero de la opcion que quiere realizar.\n\n\n");
    printf("1. Crear un laberinto aleatorio nuevo.\t\n");
    printf("2. Seleccionar laberinto.\t\n");
    printf("3. Recorrer laberinto.\t\n");
    printf("0. SALIR.\t\n\n\n");
    int seleccion = 0;
    int s = scanf("%d",&seleccion);
    return seleccion;
}
/**
 * @brief Funcion que se encarga de ejecurar los comandos para crear laberinto nuevo
 */
void OpcionUno(){
    int s = 0;
    matriz *laberinto = (matriz*) malloc (sizeof(matriz));
    laberinto->posicion[0] = 0;
    laberinto->posicion[1] = 0;
//   printf("Digite el tamaño maximo de FILAS\n");
//    s=scanf("%d",&laberinto->filas);
    laberinto->filas=21;
//    laberinto->filas = NumeroRandom(laberinto->filas);
//    printf("Digite el tamaño maximo de COlLUMNAS\n");
//    s=scanf("%d",&laberinto->columnas);
    laberinto->columnas=21;
//    printf("Digite la seed del camino\n");
//    s=scanf("%d",&laberinto->semilla);
    laberinto->semilla = 1215611;
//    laberinto->columnas = NumeroRandom(laberinto->columnas);
    laberinto->tablero = CrearTablero(laberinto->filas,laberinto->columnas);
    LlenarGatos(laberinto);
    HacerCamino(laberinto);
    ImprimirMatriz(laberinto);
    //GuardarLaberinto(laberinto);
    //LimpiarTablero(nuevoTablero);
}

/**
 * @brief Funcion que se encarga de ejecurar los comandos para recorrer un laberinto
 * @param Archivo es la ubicacion del archivo
 */
void OpcionTres(char** Archivo){
    matriz *laberinto = (matriz*) malloc (sizeof(matriz));
    LLenarLaberinto(laberinto, Archivo);
    printf("Segui los siguientes pasos\n\n\n");
    ImprimirLista(laberinto->pasos);
    free(laberinto);
}


/**
 * @brief Funcion Principal, contiene el codigo que ejecuta las demas acciones
 */
int main(int argc, char** argv){
    Bienvenida();
    int opcion = 0;
    int s = 0;
    char ruta[300];
    do{
        opcion = Menu();
        switch (opcion)
        {
        case 1:
            //OpcionUno();
        case 2:
            printf("Ruta actual %s\n",argv[1]);
            printf("Digite la ruta donde se encuentra el archivo\n");
            s=scanf("%s",ruta);
            argv[1]=ruta;
            printf("Ruta nueva %s\n",argv[1]);
            break;
        case 3:
            OpcionTres(argv);
            break;
        case 0:
            printf("cero\n");
            break;
        default:
            printf("seleccione un numero correcto\n");
            break;
        }
    }while (opcion !=0);
    return 0;
}