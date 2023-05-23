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
//using namespace std::chrono;



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
 * @brief Imprime Un menu
 */
int Menu(){
    int respuesta;
    cout << "Escoja la opcion\n\n" << endl;
    cout << "1:  Insertar Elemento" << endl;
    cout << "2:  LargeToTheLefth" << endl;
    cout << "3:  SmallesToTheRigth" << endl;
    cout << "4:  NodeOf" << endl;
    cout << "5:  DataIn" << endl;
    cout << "6:  Remove" << endl;
    cout << "7:  PreOrden" << endl;
    cout << "8:  InOrden" << endl;
    cout << "9:  PosOrden" << endl;
    cout << "10: Imprimir" << endl;
    cout << "0:  Salir" << endl;
    cout << endl;
    cin >> respuesta;
    return (respuesta);
}

/**
 * @brief Funcion main del codigo
 */
int main(int argc, char** argv){

    int dimensionArregloMasUno = argc;
    int arregloParaElArbol[dimensionArregloMasUno - 1];
    BinarySearchTree<DatoNoPrimitivo<int>, ClassNode<DatoNoPrimitivo<int>>> arbol;
    if(dimensionArregloMasUno > 1){
        for (int i = 1; i< dimensionArregloMasUno ; i++){
            //cout << argv[i] << endl;
            arregloParaElArbol[i-1] = stoi(argv[i]);
            //cout << arregloParaElArbol[i-1] << endl;
        }
        for (int i = 0; i < (dimensionArregloMasUno - 1); i++){
            DatoNoPrimitivo<int> dato(arregloParaElArbol[i]);
            arbol.insert(dato);
        }
    }
    arbol.print();
    int seguir = 1;
    int datoLeido;
    do{
        seguir = Menu();
        if (seguir == 1){
            cout << "Digite el dato que quiere insertar" << endl;
            cin >> datoLeido;
            DatoNoPrimitivo<int> dato(datoLeido);
            if (arbol.Existe(dato) == 1){
                cout << "El dato ya existe en el arbol" << endl;
            }else{
                arbol.insert(dato);
            }
        }
        if (seguir == 2){
            cout << "A partir de la raiz el dato es" << endl;
            ClassNode<DatoNoPrimitivo<int>> *elNodo = arbol.largesToTheLeft(*arbol.raiz);
            cout << ~ *elNodo->valor << endl;
        }
        if (seguir == 3){
            cout << "A partir de la raiz el dato es" << endl;
            ClassNode<DatoNoPrimitivo<int>> *elOtroNodo = arbol.smallesToTheRight(*arbol.raiz);
            cout <<  ~ *elOtroNodo->valor << endl;
        }
        if (seguir == 4){
            cout << "Digite el dato que quiere buscar" << endl;
            cin >> datoLeido;
            DatoNoPrimitivo<int> dato(datoLeido);
            if (arbol.Existe(dato) == 0){
                cout << "El dato no existe en el arbol" << endl;
            }else{
                ClassNode<DatoNoPrimitivo<int>> *elNodoDelDato = arbol.NodeOf(dato);
                cout << "la memoria del nodo es " << elNodoDelDato << endl;
            }
        }
        if (seguir == 5){
            DatoNoPrimitivo<int> *eldato =  arbol.dataIn(*arbol.raiz);
            cout << "el dato en la raiz es " << ~ *eldato << endl;
        }
        if (seguir == 6){
            cout << "Digite el dato que quiere borrar" << endl;
            cin >> datoLeido;
            DatoNoPrimitivo<int> dato(datoLeido);
            if (arbol.Existe(dato) == 0){
                cout << "El dato no existe en el arbol" << endl;
            }else{
                arbol.remove(dato);
            }            
        }
        if (seguir == 7){
            arbol.preorden(arbol.raiz);
            cout << endl;
        }
        if (seguir == 8){
            arbol.InOrden(arbol.raiz);
            cout << endl;
        }
        if (seguir == 9){
            arbol.PostOrden(arbol.raiz);
            cout << endl;
        }
        if (seguir == 10){
            arbol.print();
        }
        /*switch (seguir)
        {
        case 1:
            break;
        case 2:
            cout << "Large" << endl;
            break;
        case 3:
            cout << "Small" << endl;
            break;
        case 4:
            cout << "Node" << endl;
            break;
        case 5:
            cout << "Data" << endl;
            break;
        case 6:
            cout << "Remove" << endl;
            break;
        case 7:
            cout << "Pre" << endl;
            break;
        case 8:
            cout << "In" << endl;
            break;
        case 9:
            cout << "Pos" << endl;
            break;
        case 10:
            cout << "imprimir" << endl;
            break;
        default:
            break;
        }*/

    }while (seguir != 0);



    /*int arreglodatos[14] = {20,8,25,2,15,10,17,9,11,100,50,75,40,30};
    BinarySearchTree<DatoNoPrimitivo<int>, ClassNode<DatoNoPrimitivo<int>>> arbol;
    cout << "Llenando el arbol" << endl;
    for (int i = 0; i < 14; i++){
        DatoNoPrimitivo<int> dato(arreglodatos[i]);
        arbol.insert(dato);
<<<<<<< HEAD
    }
    arbol.print();//espaciado inicial para aegurarse de que quede bien impreso, el niver que se desea imprimir
    cout << "finalizando" << endl;
    cout <<endl<<endl<<endl<<endl<<endl;
    arbol.PostOrden(arbol.raiz);
   // return 0;
=======
    }*/
//    cout << "Imprimiendp el arbol" << endl;
//    arbol.print();//espaciado inicial para aegurarse de que quede bien impreso, el niver que se desea imprimir
//    cout << "finalizando" << endl;
//    cout << "larges to the left de la raiz" << endl;
//    ClassNode<DatoNoPrimitivo<int>> *elNodo = arbol.largesToTheLeft(*arbol.raiz);
//    cout << "el mayor a la izquierda es " << ~ *elNodo->valor << endl;
//    ClassNode<DatoNoPrimitivo<int>> *elOtroNodo = arbol.smallesToTheRight(*arbol.raiz);
//    cout << "el menor a la derecha es " << ~ *elOtroNodo->valor << endl;
    // DatoNoPrimitivo<int> *eldato =  arbol.dataIn(*arbol.raiz);
    // cout << "el dato en el nodo es " << ~ *eldato << endl;
    // DatoNoPrimitivo<int> datoABuscar(17);
    // ClassNode<DatoNoPrimitivo<int>> *elNodoDelDato = arbol.NodeOf(datoABuscar);
    // eldato = arbol.dataIn(*elNodoDelDato);
    // cout << "la memoria del nodo es " << elNodoDelDato << endl;
    //cout << "el dato en el nodo es " << ~ *eldato << endl;
    // cout << "posorden" << endl;
    // arbol.PostOrden(arbol.raiz);
    // cout << "inorden" << endl;
    // arbol.InOrden(arbol.raiz);
    // cout << "preorden" << endl;
    // arbol.preorden(arbol.raiz);


    //for (int i = 0; i < 14; i++){
        // cout << "borrare" << endl << endl << endl << endl;
        // DatoNoPrimitivo<int> datoABorrar(20);
        // arbol.remove(datoABorrar);
        // cout << endl << endl;
    //}
    // cout << "voy a imprmir" << endl;
    // arbol.print();
    return 0;
>>>>>>> 935a4563387060d893a2578eff95c4ee7a80a738
}
