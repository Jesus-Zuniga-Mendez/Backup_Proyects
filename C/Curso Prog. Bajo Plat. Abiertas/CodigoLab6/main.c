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
    printf("1. Crear una lista.\t\n");
    printf("2. Eliminar lista.\t\n");
    printf("3. Vaciar lista.\t\n");
    printf("4. Agregar elemento.\t\n");
    printf("5. Eliminar elemento.\t\n");
    printf("6. Imprimir lista.\t\n");
    printf("7. Buscar dato\t\n");
    printf("8. Buscar posicion.\t\n");
    printf("0. SALIR.\t\n\n\n");
    int seleccion = 0;
    int s = scanf("%d",&seleccion);
    return seleccion;
}

/**
 * @brief Funcion que libera la memoria utilizada por la lista que contiene las demas listas
 * @param listaListas es la lista que contiene las demas listas
 * @param cantidad es la cantidad de listas que creo el usuario
 */
void LiberarListaListas(lista** listaListas, int cantidad){
    for (int i = 0; i < cantidad; i++){
        free(listaListas[i]);
    }
    free(listaListas);
}


/**
 * @brief Funcion Principal, contiene el codigo que ejecuta las demas acciones
 */
int main(int argc, char** argv){
    Bienvenida();
    int cantidadListas = 1;
    int seleccion = 0;
    int s = 0;
    int dato =0;
    posicion* laPosicion;
    //lista que contendra las demas listas
    lista** listaListas = (lista**) malloc (1*sizeof(lista));
    int opcion = 0;
    lista* ls = NULL;
    do{
        opcion = Menu();
        switch (opcion)
        {
        case 1:
            listaListas = Estirar(listaListas, cantidadListas, (cantidadListas + 1));
            listaListas[cantidadListas-1] = CrearLista ();
            printf("Lista %d creada,  Consultela con este identificador:\n", cantidadListas);
            cantidadListas++;
            break;
        case 2:
            printf("¿Cual lista desea eliminar?:\n");
            s = scanf("%d",&seleccion);
            if (listaListas[seleccion-1]==NULL){
                printf("La lista no existe\n");
            }else{
                EliminarLista(listaListas[seleccion-1]);
                listaListas[seleccion-1] = NULL;
                printf("Lista Eliminada satisfactoriamente.\n");
            }
            break;
        case 3:
            printf("¿Cual lista desea vaciar?:\n");
            s = scanf("%d",&seleccion);
            if (listaListas[seleccion-1]==NULL){
                printf("La lista no existe\n");
            }else{
                Vaciar(listaListas[seleccion-1]);
                printf("Lista Vaciada satisfactoriamente.\n");
            }
            break;
        case 4:
            printf("¿A cual lista le desea agregar elementos?:\n");
            s = scanf("%d",&seleccion);
            if (listaListas[seleccion-1]==NULL){
                printf("La lista no existe\n");
            }else{
                printf("Digite el numero que desea agregar\n");
                s = scanf("%d", &dato);
                AgregarElemento(listaListas[seleccion-1],dato);
                printf("Lista actualizada correctamente.\n");
            }
            break;
        case 5:
            printf("¿A cual lista le desea eliminar elementos?:\n");
            s = scanf("%d",&seleccion);
            if (listaListas[seleccion-1]==NULL){
                printf("La lista no existe\n");
            }else{
                printf("Digite el elemnto que desea eliminar\n");
                s = scanf("%d", &dato);
                EliminarElemento(listaListas[seleccion-1],dato);
                printf("Lista actualizada correctamente.\n");
            }
            break;
        case 6:
            printf("¿Cual lista desea Imprimir?:\n");
            s = scanf("%d",&seleccion);
            if (listaListas[seleccion-1]==NULL){
                printf("La lista no existe\n");
            }else{
                ImprimirLista(listaListas[seleccion-1]);
            }
            break;
        case 7:
            printf("¿En cual lista desea buscar elementos?:\n");
            s = scanf("%d",&seleccion);
            if (listaListas[seleccion-1]==NULL){
                printf("La lista no existe\n");
            }else{
                printf("Digite el elemnto que desea buscar\n");
                s = scanf("%d", &dato);
                laPosicion = BuscarDato(listaListas[seleccion-1],dato);
                if (laPosicion != 0x0){
                    printf("Lista revisada correctamente el dato se encuentra en la posicion %p.\n",laPosicion);
                }else{
                    printf("Lista revisada correctamente No se encontraron coincidencias\n");
                }
                
            }
            break;
        case 8:
            printf("¿En cual lista desea buscar la posicion?:\n");
            s = scanf("%d",&seleccion);
            if (listaListas[seleccion-1]==NULL){
                printf("La lista no existe\n");
            }else{
                printf("Digite la posicion que desea buscar\n");
                s = scanf("%p", &laPosicion);
                printf("Lei esto %p\n",laPosicion);
                dato = 0;
                dato = BuscarK(listaListas[seleccion-1],laPosicion);
                if (dato != 0){
                    printf("Lista revisada correctamente en la posicion se encuentra el elemento %d\n",dato);
                }else{
                    printf("Lista revisada correctamente No se encontraron coincidencias\n");
                }
                
            }
            break;
        case 0:
            printf("cero\n");
            break;
        default:
            printf("seleccione un numero correcto\n");
            break;
        }
    }while (opcion !=0);
    LiberarListaListas(listaListas, (cantidadListas-1));
    return 0;
}