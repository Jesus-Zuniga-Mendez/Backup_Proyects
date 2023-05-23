/**
 * @file main.c
 * @author Jesus Zuñiga Mendez
 * @brief Archivo pricipal, laboratorio que permite refrescar conceptos basicos
 * @version 1.0
 * @date 26 de agosto de 2019
 * @copyright Copyleft (l) 2019
 */
#include "./include/includes.h"

using namespace std;
/**
 * @brief Función que imprime una bienvenida para el usuario
 */
void Bienvenida(){
    printf("  ____   _                                 _      _          _  _  _ \n |  _ \\ (_)                               (_)    | |        | || || |\n | |_) | _   ___  _ __ __   __ ___  _ __   _   __| |  ___   | || || |\n |  _ < | | / _ \\| '_ \\\\ \\ / // _ \\| '_ \\ | | / _` | / _ \\  | || || |\n | |_) || ||  __/| | | |\\ V /|  __/| | | || || (_| || (_) | |_||_||_|\n |____/ |_| \\___||_| |_| \\_/  \\___||_| |_||_| \\__,_| \\___/  (_)(_)(_)\n"); 
    printf("\n");
    printf("\n");
}

/**
 * @brief Funcion Principal
 */
int main(int argc, char** argv){
    Bienvenida();
    string codon;
    string analizar = "";
    string resultado = "";
    if (argc >1){
        for (int i =1;i < argc; i++){
            analizar =  argv [i];
            if ((analizar.length() % 3) == 0){
                for (unsigned int i =0; i< analizar.length(); i++){
                    codon = codon + analizar[i];
                    if (((i+1) % 3) == 0){
                        resultado = resultado + CompararProteina(codon);
                        codon = "";
                    }
                }
                cout << resultado << endl;
                resultado = "";
            }else{
                cout << "la lista " << analizar << " no tiene una extension correcta" << endl;
            }
        }
    }
    return 0;
}