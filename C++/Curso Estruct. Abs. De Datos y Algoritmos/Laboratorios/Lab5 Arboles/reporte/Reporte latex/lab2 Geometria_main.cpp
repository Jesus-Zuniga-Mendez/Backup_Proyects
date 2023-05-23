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



/*     int num_vertices;
    cout << endl;
//Segmento de pruebas
    cout << "Ingrese la cantidad de vertices con la quedesea trabajar #"<< endl;
    cin>>num_vertices;

    Vertice arreglo_depuntos[num_vertices];
    Vertice *Pntr=arreglo_depuntos;
    cout << "Dennispurador: Dirección de memoria del puntero: "<<Pntr<< endl;


    //Segmento con funcion utilizable para su menu tipo Foo Insertar
    for (int i=0; i<num_vertices; i++){
        int k=i;
        cout << "Ingrese la coordenada x del vértice #"<<k+1<< endl;
            cin>>arreglo_depuntos[i].x;
        cout << "Ingrese la coordenada y del vértice #"<<k+1<< endl;
            cin>>arreglo_depuntos[i].y;
    }
       for (int i=0; i<num_vertices; i++){
        cout<<~arreglo_depuntos[i]<< endl;
    }
//////////////////////////////////////////Fin de segmento de menu

    rectangulo poligono = rectangulo(Pntr); //Cambiar aqui para probar circulo, rectangulo
    float superficie22 = poligono.superficie();
    float perimetro22 = poligono.perimetro();
    cout<<"Dennispurador: Mi superficie: "<<superficie22<< endl;
    cout<<"Dennispurador: Mi perimetro: "<<perimetro22<< endl;




    //esto.perimetro();
    //esto.superficie(); */



    return 0;
}
