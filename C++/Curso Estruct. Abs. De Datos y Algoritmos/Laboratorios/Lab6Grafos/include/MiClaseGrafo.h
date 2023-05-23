#ifndef MICLASEGRAFO_H
#define MICLASEGRAFO_H

#include "./Includes.h"

using namespace std;

class Grafo{
    public:
        SingleLinkedList<ClassNode, SimplePosition<ClassNode>> listaNodos;
        SingleLinkedList<ClassArista, SimplePosition<ClassArista>> listaAristas;
        int contadorNodos = 0;
        int contadorAristas = 0;




        Grafo (){
        };
        ~Grafo (){};
        void agregarNodo(int valor, int ID){
            ClassNode * nodo = new ClassNode(valor, ID);
            listaNodos.insert(*nodo);
            contadorNodos++;
        }
        void agregarArista(int origen, int destino, string ID){
            ClassNode * nodoOrigen;
            nodoOrigen =  listaNodos.getDireccion(origen);
            ClassNode * nodoDestino;
            nodoDestino = listaNodos.getDireccion(destino);
            ClassArista * arista = new ClassArista(nodoOrigen,nodoDestino,ID);
            listaAristas.insert(*arista);
            contadorAristas++;
        }
        void printNodos(){
            listaNodos.print();
        };
        void printAristas(){
            listaAristas.print();
        };

        bool hayAristas(int origen, int destino){
            //cout << FORMATO_ANSI_COLOR_PURPLE;
            //cout << "compruebo " << origen << " y " << destino << endl; 
            //cout << FORMATO_ANSI_COLOR_RESET;
            bool respuesta = false;
            ClassNode * nodoOrigen;
            nodoOrigen =  listaNodos.getDireccion(origen);
            ClassNode * nodoDestino;
            nodoDestino = listaNodos.getDireccion(destino);
            respuesta = listaAristas.verificar(nodoOrigen, nodoDestino);
            return respuesta;
        }



        int ** matrizAdyacencia(){
            int **retorno;
            int arregloNodos[contadorNodos];
            for (int i = 0; i < contadorNodos; i++){
                arregloNodos[i] = listaNodos.devolverPosicion(i+1)->valor->valor;
            } 
            retorno = new int * [contadorNodos+1];
            for (int i = 0; i < (contadorNodos + 1) ; i++){
                retorno[i] = new int [contadorNodos+1];
            }
            for (int f = 0; f < contadorNodos+1; f++){
                for (int c = 0; c < contadorNodos+1; c++){
                    if (((f == 0) && (c!=0))){
                        retorno[f][c] = arregloNodos[c-1];
                    }else if (((f != 0) && (c==0))){
                        retorno[f][c] = arregloNodos[f-1];;
                    }else if (c == f){
                        retorno[f][c] = 0;    
                    }else{
                        //vamos a ver si hay enlaces
                        if (hayAristas(arregloNodos[f-1] , arregloNodos[c-1]) == true){
                            //cout << FORMATO_ANSI_COLOR_PURPLE;
                            //cout << "entre " << arregloNodos[f-1] << " y " <<  arregloNodos[c-1] << "si hay" << endl;
                            //cout << FORMATO_ANSI_COLOR_RESET;
                            //cout << " en " << f << " , " << c << endl;
                            retorno[f][c] = 1;
                        }else{
                            retorno[f][c] = 0;
                        }
                    }
                }
            }
            return retorno;
        };



        string ** matrizAdyacenciaTexto(){
            string **retorno;
            int arregloNodos[contadorNodos];
            for (int i = 0; i < contadorNodos; i++){
                arregloNodos[i] = listaNodos.devolverPosicion(i+1)->valor->valor;
            } 
            retorno = new string * [contadorNodos+1];
            for (int i = 0; i < (contadorNodos + 1) ; i++){
                retorno[i] = new string [contadorNodos+1];
            }
            for (int f = 0; f < contadorNodos+1; f++){
                for (int c = 0; c < contadorNodos+1; c++){
                    if (((f == 0) && (c!=0))){
                        retorno[f][c] = to_string(arregloNodos[c-1]);
                    }else if (((f != 0) && (c==0))){
                        retorno[f][c] = to_string(arregloNodos[f-1]);
                    }else if (c == f){
                        retorno[f][c] = "d";    
                    }else{
                        //vamos a ver si hay enlaces
                        if (hayAristas(arregloNodos[f-1] , arregloNodos[c-1]) == true){
                            //cout << FORMATO_ANSI_COLOR_PURPLE;
                            //cout << "entre " << arregloNodos[f-1] << " y " <<  arregloNodos[c-1] << "si hay" << endl;
                            //cout << FORMATO_ANSI_COLOR_RESET;
                            //cout << " en " << f << " , " << c << endl;
                            retorno[f][c] = "S";
                        }else{
                            retorno[f][c] = "n";
                        }
                    }
                }
            }
            return retorno;
        };

        void printMatriz(int ** matriz){
            int dimension = contadorNodos+1;
            int contadorLinea = 1;
            for (int f = 0; f < (dimension) ; f++){
                for (int c = 0; c < (dimension) ; c++){
                    if (((f%2) == 0) && ((c % 2) == 0)){
                        cout << FORMATO_ANSI_COLOR_LIGHT_BLUE;
                    }else{
                        cout << FORMATO_ANSI_COLOR_LIGHT_GREEN;
                    }
                    if ((*(*(matriz+f)+c) == 0) && ((f > 0) && (c > 0))){
                        cout << FORMATO_ANSI_COLOR_RED;
                    }else if ((*(*(matriz+f)+c) == 1) && ((f > 0) && (c > 0))){
                        cout << FORMATO_ANSI_COLOR_RESET;
                    }

                    if ((c == f) && (c > 0)){
                        cout << FORMATO_ANSI_COLOR_LIGTH_GRAY;
                    }
                    cout << "   " << *(*(matriz+f)+c);
                }
                cout << endl;
                contadorLinea++;
            }
            cout << FORMATO_ANSI_COLOR_RESET;
        };


        void printMatrizTexto(string ** matriz){
            int dimension = contadorNodos+1;
            int contadorLinea = 1;
            for (int f = 0; f < (dimension) ; f++){
                for (int c = 0; c < (dimension) ; c++){
                    if (((f%2) == 0) && ((c % 2) == 0)){
                        cout << FORMATO_ANSI_COLOR_LIGHT_BLUE;
                    }else{
                        cout << FORMATO_ANSI_COLOR_LIGHT_GREEN;
                    }
                    if ((*(*(matriz+f)+c) == "n") && ((f > 0) && (c > 0))){
                        cout << FORMATO_ANSI_COLOR_LIGTH_GRAY;
                    }else if ((*(*(matriz+f)+c) == "S") && ((f > 0) && (c > 0))){
                        cout << FORMATO_ANSI_COLOR_BROWN;
                    }else if ((*(*(matriz+f)+c) == "D") && ((f > 0) && (c > 0))){
                        cout << FORMATO_ANSI_COLOR_GREEN;
                    }

                    if ((c == f) && (c > 0)){
                        cout << FORMATO_ANSI_COLOR_LIGHT_RED;
                    }
                    cout << "   " << *(*(matriz+f)+c);
                }
                cout << endl;
                contadorLinea++;
            }
            cout << FORMATO_ANSI_COLOR_RESET;
        };



        int aLoAncho(int origen){
            int retorno = 0;
            int **matriz = this->matrizAdyacencia();
            string **matrizBandera = this->matrizAdyacenciaTexto();
            int **matrizResultado;
            matrizResultado = new int * [contadorNodos+1];
            for (int i = 0; i < (contadorNodos + 1) ; i++){
                matrizResultado[i] = new int [contadorNodos+1];
            }

        




            /*int retorno = 0;
            Queue<Element<int>> *cola =  new (Queue<Element<int>>);


            int **matriz = this->matrizAdyacencia();
            string **matrizBandera = this->matrizAdyacenciaTexto();
            int **matrizResultado;
            matrizResultado = new int * [contadorNodos+1];
            for (int i = 0; i < (contadorNodos + 1) ; i++){
                matrizResultado[i] = new int [contadorNodos+1];
            }

            cout << "Imprimo la matriz adyacente" << endl;
            this->printMatriz(matriz);
            cout << endl << endl;
            cout << "Imprimo la matriz Texto" << endl;
            this->printMatrizTexto(matrizBandera);
            cout << endl << endl;
            cout << "Imprimo la matriz Resultado" << endl;
            this->printMatriz(matrizResultado);
            cout << endl << endl;



            int dimension = contadorNodos+1;
            int contadorLinea = 1;


            for (int f = 0; f < (dimension) ; f++){
                if (*(*(matriz+f)+0) == origen){
                    for (int colTemp = 1; colTemp < (dimension) ; colTemp++){
                        if ((*(*(matriz+f)+colTemp) == 1) && (*(*(matrizBandera+f)+colTemp)) == "S") {
                            *(*(matrizBandera+f)+colTemp) = "D";
                        cout << "Cambie s a d" << endl;    
                        cout << "Imprimo la matriz adyacente" << endl;
                        this->printMatriz(matriz);
                        cout << endl << endl;
                        cout << "Imprimo la matriz Texto" << endl;
                        this->printMatrizTexto(matrizBandera);
                        cout << endl << endl;
                        cout << "Imprimo la matriz Resultado" << endl;
                        this->printMatriz(matrizResultado);
                        cout << endl << endl;
                        }
                    }
                    /*bool seguir = true;
                    while (seguir == true){
                        Element<int> e = cola->dequeue();
                        if (e.isValid())
                        {
                            origen = e.get();
                            aLoAncho(origen);
                        }else
                        {
                            seguir = false;
                        }
                        
                    }
                }
            }*/
            return retorno;
        }
};

#endif