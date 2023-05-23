/**
 * @file tools.c
 * @author Jesus Zuñiga Mendez
 * @brief Archivo pricipal, laboratorio que permite refrescar conceptos basicos
 * @version 1.0
 * @date 26 de agosto de 2019
 * @copyright Copyleft (l) 2019
 */
#include "../include/includes.h"

using namespace std;
/*@brief Funcion que lee un archivo linea por linea y compara la proteina recibida contra la del archivo
 *@param proteina es la proteina que se debe comparar
 *@return devuelve la letra correspondiente a la proteina
 */
string CompararProteina(string proteina){
    ifstream archivo;
    string ruta= "./DB/listaAminoacidos";
    string linea;
    string resultado = "";
    archivo.open(ruta.c_str(),std::ios::in);
    if (archivo.fail()){
        std::cout << "No se pudo abrir el archivo "  << ruta << " CalcularGesto " << std::endl;
        exit(1);
    }

    while (!archivo.eof()){
        getline(archivo,linea);
        char coma = ',';
        string aminoacido = "";
        string letra = "";
        string nombre = "";
        int contadorComas = 0;
        for (unsigned int i = 0; i < linea.length() ; i++){
            if (linea[i] == coma){
                contadorComas++;
            }else{
                if (contadorComas == 0){
                    aminoacido = aminoacido + linea[i];
                }else if (contadorComas == 1){
                    letra = letra + linea[i];
                }else if (contadorComas == 2){
                    nombre = nombre + linea[i];
                }
            }
        }
        if (strcmp(aminoacido.c_str(), proteina.c_str()) == 0){
            resultado = letra;
        }
    }

    archivo.close();
    return resultado;
}