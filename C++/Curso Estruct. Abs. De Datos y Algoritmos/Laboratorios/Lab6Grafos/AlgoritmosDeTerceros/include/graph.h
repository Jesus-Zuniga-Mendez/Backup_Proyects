#include <iostream>
#include "node.h"

using namespace std;

class ClassArista{
    public:
        ClassNode * NodoA=0x0;//Nodo Anterior
        ClassNode * NodoB=0x0;//Nodo Posterior
        float peso; //Valor de peso/calidad de la arista
        string AristaID;

        ClassArista(ClassNode * NodoA, ClassNode * NodoB, string AristaID){

            this->NodoA = NodoA;
            this->NodoB = NodoB;
            this->AristaID = AristaID;
            cout<<"Creada la arista: "<<this->AristaID<<endl;
        };
        ~ClassArista(){};
};


using namespace std;

class Grafo{
    public:
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

        Grafo (){
        };
        ~Grafo (){};
};
