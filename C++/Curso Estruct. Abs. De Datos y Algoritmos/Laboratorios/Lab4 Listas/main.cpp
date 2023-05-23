/**
 * @file main.c
 * @author Jesus Zuñiga Mendez
 * @author Dennis Chavarria Soto
 * @brief Archivo pricipal, Laboratorio sobre herencia representada con geometria
 * @version 1.0
 * @date 24 de setiembre de 2019
 * @copyright Copyleft (l) 2019
 */

#include "./include/Includes.h"

using namespace std;
using namespace std::chrono;



int numeroRandom(int minimo, int tope){
    //codigo tomado de https://es.stackoverflow.com/questions/148661/por-qu%C3%A9-el-n%C3%BAmero-que-me-genera-el-rand-siempre-es-el-mismo
    // Tenemos control sobre el algoritmo y distribución a usar.
    random_device device;
    // Se usa el algoritmo Mersenne twister
    // https://es.wikipedia.org/wiki/Mersenne_twister
    mt19937 generador(device());
    // Escogemos una distribucion uniforme entre 0 y 100
    uniform_int_distribution<> distribucion(minimo, tope);
    /* Generamos un número pseudo-aleatorio con el algoritmo
    mt19937 distribuido uniformemente entre 0 y 100 */
    int a = distribucion(generador);
    return a;
}

/**
 * @brief Funcion main del codigo
 */
int main(int argc, char** argv){



    ArrayList<string, int> MiArreglo;
    ArrayList<string, int> *Milista=&MiArreglo;//Puntero hacia el espacio
    //donde se encuentra el objeto MiArreglo; necesario para editar
    
    //Recuerde que no se puede usar int, int en la instancia del arreglo
    // en cambio puede utilizar float, int. Fundamentalmente funcionan igual
    SingleLinkedList<int, SimplePosition<int>> listaEnlazada;
    for (int pruebas = 5; pruebas < 100; pruebas++){
        int nRandom =0;
        for (int i = 1; i<= pruebas; i++){
            nRandom = numeroRandom(0,100);
            //listaEnlazada.insert(nRandom);
            MiArreglo.insertt(to_string(nRandom));
        }
        cout << "imprmiendo la lista" << endl;
        listaEnlazada.print();
        cout << "imprmiendo el arreglo" << endl;
        MiArreglo.print();


        //unsigned long long x = stoull(1);

        //time_t t0 = time(0);
        //steady_clock::time_point t0 = steady_clock::now();
        //f(0);
        //listaEnlazada.first = MergeSort(&listaEnlazada , 2);
        //BusquedaLineal(Milista);
        //steady_clock::time_point t1 = steady_clock::now();
        //time_t t1 = time(0);

        //unsigned long long tiempito = duration_cast<nanoseconds>(t1-t0).count();
        //time_t tiempito = t1-t0;

        //cout << tiempito << endl;
    }


    //cout<< nRandom << endl;
    //  cout << "sali" << endl;
    // listaEnlazada.insert(38); // insert(ll, 1); || ll.insert(1);
    // listaEnlazada.insert(27);
    // listaEnlazada.insert(43);
    // listaEnlazada.insert(3);
    // listaEnlazada.insert(9);
    // listaEnlazada.insert(82);
    // listaEnlazada.insert(10);
    // listaEnlazada.insert(15);
    // listaEnlazada.insert(24);
    // listaEnlazada.insert(69);
    // listaEnlazada.insert(54);
    // listaEnlazada.insert(78);
    //cout << "imprimiendo lista original" << endl;
    //listaEnlazada.print();
    //listaEnlazada.insert(4);
    //listaEnlazada.insert(5);
    // cout <<"prev" << endl; 
    // cout << listaEnlazada.prev(listaEnlazada.first) << endl;
    // cout <<"next" << endl; 
    // cout << listaEnlazada.next(listaEnlazada.first) << endl;
    // cout <<"next valor" << endl; 
    // cout << *listaEnlazada.next(listaEnlazada.first)->valor << endl;
    // cout <<"previo del 2" << endl; 
    // cout << *listaEnlazada.prev(listaEnlazada.next(listaEnlazada.first))->valor << endl;
    // cout <<"buscar 1" << endl; 
    // cout << listaEnlazada.find(1) << endl;
    // cout <<"buscar 3" << endl; 
    // cout << listaEnlazada.find(3) << endl;
    // cout << "valor primer campo" << endl;
    // cout << listaEnlazada.getElement(listaEnlazada.first) << endl;
    // cout << "valor segundo campo" << endl;
    // cout << listaEnlazada.getElement(listaEnlazada.first->siguiente) << endl;
    // cout << "borrar ultimo campo" << endl;
    // listaEnlazada.remove(listaEnlazada.find(5));
    // listaEnlazada.print();
    // cout << "borrar primer campo" << endl;
    // listaEnlazada.remove(listaEnlazada.find(1));
    // listaEnlazada.print();
    // cout << "borrar intermedio campo" << endl;
    // listaEnlazada.remove(listaEnlazada.find(3));
    // listaEnlazada.print();
    // cout << "borrar numer 2" << endl;
    // listaEnlazada.remove(2);
    // listaEnlazada.print();
    // cout << "insertar 8 en 4" << endl;
    // listaEnlazada.insert(8, listaEnlazada.find(4));
    // listaEnlazada.print();
    // cout << "lista original" << endl;
    // listaEnlazada.print();
    // listaEnlazada.first = MergeSort(&listaEnlazada , 2);
    // cout << "lista resultado" << endl;
    // listaEnlazada.print();



    //     int condicionparada=1;
    //     while(condicionparada==1){
    //         string dato;
    //         int respuesta;
    //         cout<<endl<<"Ingrese el numero que desea guardar";
    //         cin>>dato;
    //         MiArreglo.insertt(dato);
    //         cout<<endl<<"Desea seguir 2=No";
    //         cin>>respuesta;
    //         if (respuesta==2){
    //             condicionparada=34;
    //         }
    //     }
    //     MiArreglo.print();
    //     cout<<endl<<"Accion bubblesort";
    
    //     BubbleSort(Milista);
    //     MiArreglo.print();
    //     BusquedaBinaria(Milista);
        return 0;
}
