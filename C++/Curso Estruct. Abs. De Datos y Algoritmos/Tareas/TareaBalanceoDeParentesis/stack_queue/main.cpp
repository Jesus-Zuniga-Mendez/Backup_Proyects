#include "./Includes/Includes.h"


using namespace std;
#define Data Element<string> // vagancia
#define DataEntero Element<int> // vagancia



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
 * @brief funcion que imprime un menu
 * @return devuelve la seleccion del usuario
 */
int Menu(){
    int respuesta=0;
    cout << "Digite la opcion que quiere probar" << endl;
    cout << "1: Parentesis" << endl;
    cout << "2: Prioridad" << endl;
    cout << "0: Salir" << endl;
    cin >> respuesta;
    return respuesta;
}

/**
 * @brief Funcion que revisa que los parentesis esten valanceados
 */
void Balanceo(string cadena){
    Stack<Data> laPila;
    string laCadena = cadena;
    string elCaracter = "";
    cout << "Revisando: " << laCadena << endl;
    int tamanioArregloValidos = 3;
    string arregloValidosApertura[tamanioArregloValidos] = {"{","[","("};
    string arregloValidosCerradura[tamanioArregloValidos] = {"}","]",")"};
    int estaBalanceado = 1;
    //en este for se gusrda en una pila solo los parentesis de la cadena
    for (uint i = 0; i < laCadena.size(); i++){
        int esParentesisApertura=0;
        int esParentesisCerradura=0;
        int indexParentesis = 0;
        elCaracter = laCadena[i];
        for (int j = 0; j < tamanioArregloValidos; j++){
            if (arregloValidosApertura[j] == elCaracter){
                esParentesisApertura = 1;
            }
            if (arregloValidosCerradura[j] == elCaracter){
                esParentesisCerradura = 1;
                indexParentesis = j;
            }
        }
        if (esParentesisApertura == 1){
            cout << "es apertura" << endl;
            laPila.push(Data(elCaracter));
        }
        if (esParentesisCerradura == 1){
            cout << "es cerradura" << endl;
            Data e = laPila.pop();
            if (e.isValid())
            {
                cout << "comparo" << e.get() << " con " << arregloValidosApertura[indexParentesis] << endl;
                if (e.get() != arregloValidosApertura[indexParentesis]){
                    cout << "entre" << endl;
                    estaBalanceado = 0;
                }
            }      
        }
    }

    if (estaBalanceado == 0){
        cout << "Hilera no valida" << endl;
    }else{
        cout << "Hilera valida" << endl;
    }
}


/**
 * @brief funcion que hace cola de prioridades
 */
void Prioridad(string cadena){
    string laCadena = cadena;
    cout << "Voy a proccesar " << laCadena << endl;
    string prioridad = "";
    string espacio = " ";
    string caracter = "";
    string numeros = "1234567890";
    string numero = "";
    string cantidadColasCadena = "";
    int cantidadColas = 0;
    int yaEmpezeCadenaColas = 0;

    //sacamos el numero de colas
    for (uint i = 0; i < laCadena.size(); i++){
        caracter = laCadena[i];
        if (caracter != " "){
            for (uint j = 0; j < numeros.size(); j++){
                numero = numeros[j];
                if (caracter == numero){
                    cantidadColasCadena = cantidadColasCadena + numero;
                    yaEmpezeCadenaColas = 1;
                }
            }
        }else if (yaEmpezeCadenaColas == 1){
            i = laCadena.size();
            cantidadColas = stoi(cantidadColasCadena);
        }
    }
    

    //llenamos el arreglo con la cantidad de colas
    Queue<DataEntero> *ArregloColas[cantidadColas];
    Queue<DataEntero> *ArregloColasRespaldo[cantidadColas];
    int generadoAlestorio = 0;
    for (int i = 0; i < cantidadColas; i++){
        int cantidadNumerosEnLaCola = numeroRandom(1,10);
        Queue<DataEntero> *cola = new (Queue<DataEntero>);
        Queue<DataEntero> *colaRespaldo = new (Queue<DataEntero>);
        for (int j = 0; j < cantidadNumerosEnLaCola; j++){
            generadoAlestorio = numeroRandom(1,100);
            cola->enqueue(DataEntero(generadoAlestorio));
            colaRespaldo->enqueue(DataEntero(generadoAlestorio));
        }
        ArregloColas[i] = cola;
        ArregloColasRespaldo[i] = colaRespaldo;
    }

    //se imprimen las colas hechas
    for (int i = 0; i < cantidadColas; i++)
    {
        Queue<DataEntero> *cola = ArregloColas[i];
        string impresion = "Cola " + to_string(i+1) + " : ";
        int seguir = 0;
        while (seguir == 0){
            DataEntero e = cola->dequeue();
            if (e.isValid())
            {
                impresion = impresion +  to_string(e.get()) + ",";
            }else{
                seguir = 1;
            }
        }

        cout << impresion << endl;  
    }

    //hacemos un arreglo con las prioridades
    int arregloPrioridades[cantidadColas];
    int contadorEspacios = 0;
    string cantidadPrioridad = "";
    int contador = 0;
    for (uint i =0; i < laCadena.size(); i++){
        cout << laCadena << endl;
        caracter = laCadena[i];
        if ((caracter != " ") && (contadorEspacios == 0)){
            contadorEspacios = 1;
        }else if ((caracter != " ") && (contadorEspacios == 1)){
            if ((caracter == ":") || (i == (laCadena.size() - 1))){
                if (i == (laCadena.size() - 1)){
                    cantidadPrioridad = cantidadPrioridad + caracter;
                }
                if (contador < cantidadColas){
                    //cout << "aqui" << endl;
                    arregloPrioridades[contador] = stoi(cantidadPrioridad);                    
                    //cout << "ahora" << endl;
                    contador++;
                }else{
                    i = laCadena.size();
                }
                cantidadPrioridad = "";
            }else{
                cantidadPrioridad = cantidadPrioridad + caracter;
            }
        }
    }


    //calculamos el resultado
    int seguir = 0;
    string resultado = "Salidas: ";
    while (seguir == 0){
        for (int i = 0; i < cantidadColas; i++){
            int cantidad = arregloPrioridades[i];
            Queue<DataEntero> *cola = ArregloColasRespaldo[i];
            for (int j = 0; j < cantidad; j++){
                if (ArregloColasRespaldo[i] == 0x0){
                    int contador = 0;
                    for (int k = 0; k < cantidadColas; k++){
                        if (ArregloColasRespaldo[k] == 0x0){
                            contador ++;
                        }
                    }
                    if (contador == cantidadColas){
                        seguir = 1;
                    }
                }else{
                    DataEntero e = cola->dequeue();
                    if (e.isValid())
                    {
                        resultado = resultado +  to_string(e.get()) + ",";
                    }else{
                        ArregloColasRespaldo[i] = 0x0;
                    }
                }
            }

        }

    }

    cout << resultado << endl;

//Queue<Data> laCola;

//laCola.enqueue(Data(elCaracter));

//Data e = laCola.dequeue();
        /*for (uint i = 0; i < laCadena.size(); i++)
    {
        Data e = laCola.dequeue();
        if (e.isValid())
        {
            cout << e.get() << endl;
        }
    }*/

    //Stack<Data> laPila;
    //laPila.push(elCaracter);
    // Data e = laPila.peek();
    // if (e.isValid())
    //     cout << "peeking: " << e.get() << endl;

    // for (uint i = 0; i < laCadena.size(); i++)
    // {
    //     Data e = laPila.pop();
    //     if (e.isValid())
    //     {
    //         cout << e.get() << endl;
    //     }
    // }

}


int main(int argc, char** argv)
{
    int seleccion = 0;
    string laCadena = argv[1];
    do{
        seleccion = Menu();
        if (seleccion == 1){
            cout << "Balanceo" << endl;
            Balanceo(laCadena);
        }

        if (seleccion == 2){
            cout << "Prioridad" << endl;
            Prioridad(laCadena);
        }
    }while (seleccion != 0);
    return 0;
}
