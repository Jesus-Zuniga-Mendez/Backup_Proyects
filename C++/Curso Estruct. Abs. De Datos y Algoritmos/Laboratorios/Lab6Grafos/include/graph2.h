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
        ClassNode * Nodo5 = new ClassNode(6, 6);


        // de esta forma se crean las aristas , muy similar al metodo de Lemon:
            //ListDigraph::Arc _00 = grafoN.addArc(f, g);
        ClassArista Arista1_2 = ClassArista(Nodo1, Nodo2, "1_2"); //Va de 1 a 2
        ClassArista Arista2_3 = ClassArista(Nodo2, Nodo3,"2_3"); //Va de 2 a 3
        ClassArista Arista2_4 = ClassArista(Nodo2, Nodo4,"2_4");
        ClassArista Arista2_5 = ClassArista(Nodo2, Nodo5,"2_5");
        ClassArista Arista5_6 = ClassArista(Nodo5, Nodo6,"5_6");

        //nodos de regresion(Van en un orden que no es ascendente al ID del Nodo)
        ClassArista Arista1_6 = ClassArista(Nodo1, Nodo6,"1_6");
        ClassArista Arista3_6 = ClassArista(Nodo3, Nodo6,"3_6");
        ClassArista Arista6_1 = ClassArista(Nodo6, Nodo1,"6_1");

        Grafo (){
        };
        ~Grafo (){};
};
