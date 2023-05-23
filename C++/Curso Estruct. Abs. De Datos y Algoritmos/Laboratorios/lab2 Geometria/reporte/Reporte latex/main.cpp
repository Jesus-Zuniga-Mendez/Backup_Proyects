/**
 * @file main.c
 * @author Jesus Zuñiga Mendez
 * @author Dennis Chavarria Soto
 * @brief Archivo pricipal, Laboratorio sobre herencia representada con geometria
 * @version 1.0
 * @date 24 de setiembre de 2019
 * @copyright Copyleft (l) 2019
 */

#include "./include/Includes.hpp"

using namespace std;


/**
 * @brief Funcion main del codigo
 */
int main(int argc, char** argv){
    Principal clasePrincipal;
    clasePrincipal.Bienvenido();
    int opcion = 0;
    do{
        clasePrincipal.Menu();
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            clasePrincipal.MtdRectangulo();
            break;
        case 2:
            clasePrincipal.MtdTriangulo();
            break;
        case 3:
            clasePrincipal.MtdCirculo();
            break;
        case 4:
            clasePrincipal.MtdCualquierFigura();
            break;
        default:
            break;
        }
    }while (opcion != 0);

    return 0;
}
