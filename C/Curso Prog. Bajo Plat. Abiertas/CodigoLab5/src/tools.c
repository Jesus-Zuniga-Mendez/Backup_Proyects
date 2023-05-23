/**
 * @file tools.c
 * @brief Archivo que contiene las funciones a las cuales invoca main.c
 */
# include "../incl/matriz.h"
/**
 * @brief Funcion que imprime el rotulo de bienvenida
 * @param no recibe parametros
 * @return no devuelve ningun valor
 */
void Bienvenido(){
    printf("  ____   _                                 _      _          _  _  _ \n |  _ \\ (_)                               (_)    | |        | || || |\n | |_) | _   ___  _ __ __   __ ___  _ __   _   __| |  ___   | || || |\n |  _ < | | / _ \\| '_ \\\\ \\ / // _ \\| '_ \\ | | / _` | / _ \\  | || || |\n | |_) || ||  __/| | | |\\ V /|  __/| | | || || (_| || (_) | |_||_||_|\n |____/ |_| \\___||_| |_| \\_/  \\___||_| |_||_| \\__,_| \\___/  (_)(_)(_)\n"); 
    printf("\n");
    printf("\n");
}
/**
 * @brief Funcion que imprime el menu
 * @param no recibe parametros
 * @return devuelve la opcion escogida por el usuario
 */
int Menu(){
    printf("Digite el numero de la opcion que quiere realizar.\n\n\n");
    printf("1. Crear una matriz de N × M .\t\n");
    printf("2. Limpiar una matriz de N × M .\t\n");
    printf("3. Borrar una matriz.\t\n");
    printf("4. Sumar matrices.\t\n");
    printf("5. Multiplicar matrices.\t\n");
    printf("6. Sumar escalar y matriz.\t\n");
    printf("7. Multiplicar escalar y matriz.\t\n");
    printf("8. Transponer una matriz.\t\n");
    printf("9. Imprimir una matriz.\t\n");
    printf("0. SALIR.\t\n\n\n");
    int seleccion = 0;
    int s = scanf("%d",&seleccion);
    return seleccion;
}
