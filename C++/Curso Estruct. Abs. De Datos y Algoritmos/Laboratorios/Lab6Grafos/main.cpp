/**
 * @file main.c
 * @author Jesus Zuñiga Mendez
 * @author Dennis Chavarria Soto
 * @brief Archivo pricipal, Laboratorio sobre Grafos
 * @version 1.0
 * @date 01 de diciembre de 2019
 * @copyright Copyleft (l) 2019
 */

#include "./include/Includes.h"

using namespace std;
//using namespace std::chrono;

/**
 * @brief funcion que imprime un menu
 * @return devuelve la seleccion del usuario
 */
int Menu(){
    int respuesta=0;
    cout << FORMATO_ANSI_COLOR_RESET;
    cout << "Digite la opcion que quiere probar" << endl;
    cout << "2: Recorrido a lo ancho" << endl;
    cout << "0: Salir" << endl;
    cin >> respuesta;
    return respuesta;
}



int main(int argc, char** argv)
{
     /*Grafo grafo1;
     //Se crean los nodos
     grafo1.agregarNodo(1,1);
     grafo1.agregarNodo(2,2);
     grafo1.agregarNodo(3,3);
     grafo1.agregarNodo(6,6);
     grafo1.agregarNodo(4,4);
     grafo1.agregarNodo(5,5);
     //Se crean las aristas
     // de esta forma se crean las aristas , muy similar al metodo de Lemon:
     //ListDigraph::Arc _00 = grafoN.addArc(f, g);
     grafo1.agregarArista(1,2, "1_2"); //Va de 1 a 2
     grafo1.agregarArista(2,3,"2_3"); //Va de 2 a 3
     grafo1.agregarArista(3,4,"3_4");
     grafo1.agregarArista(4,5,"4_5");
     //nodos de regresion(Van en un orden que no es ascendente al ID del Nodo)
     grafo1.agregarArista(5,2,"5_2");
     grafo1.agregarArista(3,1,"3_1");
     grafo1.agregarArista(1,3,"1_3");

     grafo1.printNodos();
     grafo1.printAristas();
     cout << grafo1.contadorNodos << endl;
     cout << grafo1.contadorAristas << endl;

     int dimension = grafo1.contadorNodos;
     int **matrizAdyacencia;
     matrizAdyacencia = grafo1.matrizAdyacencia();
     grafo1.printMatriz(matrizAdyacencia,dimension+1);





     Grafo grafo2;
     //Se crean los nodos
     grafo2.agregarNodo(1,1);
     grafo2.agregarNodo(2,2);
     grafo2.agregarNodo(3,3);
     grafo2.agregarNodo(4,4);
     //Se crean las aristas
     // de esta forma se crean las aristas , muy similar al metodo de Lemon:
     //ListDigraph::Arc _00 = grafoN.addArc(f, g);
     grafo2.agregarArista(1,4, "1_2"); //Va de 1 a 2
     grafo2.agregarArista(4,1, "1_2");
     grafo2.agregarArista(1,3,"2_3"); //Va de 2 a 3
     grafo2.agregarArista(1,2,"3_4");
     grafo2.agregarArista(2,4,"4_5");
     grafo2.agregarArista(2,3,"5_2");
     grafo2.agregarArista(4,3,"3_1");

     grafo2.printNodos();
     grafo2.printAristas();
     cout << grafo2.contadorNodos << endl;
     cout << grafo2.contadorAristas << endl;

      dimension = grafo2.contadorNodos;
     // **matrizAdyacencia;
     matrizAdyacencia = grafo2.matrizAdyacencia();
     grafo2.printMatriz(matrizAdyacencia,dimension+1);*/



     Grafo grafo3;
     //Se crean los nodos
     grafo3.agregarNodo(1,1);
     grafo3.agregarNodo(2,2);
     grafo3.agregarNodo(3,3);
     grafo3.agregarNodo(4,4);
     grafo3.agregarNodo(5,5);
     grafo3.agregarNodo(6,6);
     //Se crean las aristas
     grafo3.agregarArista(1,2, "1_2");
     grafo3.agregarArista(1,6, "1_6");
     grafo3.agregarArista(2,5,"2_5");
     grafo3.agregarArista(6,5,"6_5");
     grafo3.agregarArista(5,4,"5_a");

     grafo3.printNodos();
     grafo3.printAristas();
     cout << grafo3.contadorNodos << endl;
     cout << grafo3.contadorAristas << endl;
     // **matrizAdyacencia;
     int **matrizAdyacencia = grafo3.matrizAdyacencia();
     grafo3.printMatriz(matrizAdyacencia);
     


     int seleccion = 0;
     int resultado = 0;
     do{
          seleccion = Menu();
          if (seleccion == 1){
          }
          if (seleccion == 2){
               resultado = grafo3.aLoAncho(1);
               cout << "El resulatado de grafo 1 a lo ancho es " << resultado << endl; 
          }
     }while (seleccion != 0);






/*     for (int f = 0; f < (dimension+2) ; f++){
          for (int c = 0; c < (dimension+2) ; c++){
               cout << "   " << *(*(matrizAdyacencia+f)+c);;
          }
          cout << endl;
     }
*/


     /*
     // de esta forma se crean los nodos, muy similar al metodo de Lemon:
         //ListDigraph::Node _00 = grafoN.addNode();
     ClassNode * Nodo1 = new ClassNode(1, 1);
     ClassNode * Nodo2 = new ClassNode(2, 2);
     ClassNode * Nodo3 = new ClassNode(3, 3);
     ClassNode * Nodo4 = new ClassNode(4, 4);
     ClassNode * Nodo5 = new ClassNode(5, 5);
     // de esta forma se crean las aristas , muy similar al metodo de Lemon:
         //ListDigraph::Arc _00 = grafoN.addArc(f, g);
     ClassArista Arista1_2 = ClassArista(Nodo1, Nodo2, "1_2"); //Va de 1 a 2
     ClassArista Arista2_3 = ClassArista(Nodo2, Nodo3,"2_3"); //Va de 2 a 3
     ClassArista Arista3_4 = ClassArista(Nodo3, Nodo4,"3_4");
     ClassArista Arista4_5 = ClassArista(Nodo4, Nodo5,"4_5");
     //nodos de regresion(Van en un orden que no es ascendente al ID del Nodo)
     ClassArista Arista5_2 = ClassArista(Nodo5, Nodo2,"5_2");
     ClassArista Arista3_1 = ClassArista(Nodo3, Nodo1,"3_1");
     ClassArista Arista1_3 = ClassArista(Nodo1, Nodo3,"1_3");
     */



  return 0;
}
