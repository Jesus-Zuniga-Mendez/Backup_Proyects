/**
 * @file main.c
 * @author Jesus Zuñiga Mendez
 * @author Dennis Chavarria Soto
 * @brief Archivo pricipal, Simulacion simplificada del juego de clue
 * @version 1.0
 * @date 08 de setiembre de 2019
 * @copyright Copyleft (l) 2019
 */

#include "./include/includes.h"

using namespace std;

/*@brief random: Método que recibe dos números y establece un intervalo a partir de ellos, para así determinar un número al azar.
 *@param menor: Límite izquierdo del intervalo lo incluye.
 *@param mayor: Límite derecho del intervalo lo incluye.
 *@return devuelve un número aleatorio
 */

int numRandom(int menor, int mayor){
    mayor++;
    //codigo tomado de https://en.cppreference.com/w/cpp/numeric/random/uniform_real_distribution
    random_device rd;  //Will be used to obtain a seed for the random number engine
    mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    uniform_real_distribution<> dis(menor, mayor);
    return(dis(gen));
}


/*@brief AutoName: Método que recibe la cantidad de jugadores;solo solicita y asigna la cantidad de nombres de jugador necesaria.
 *@param numJugadores: Cantidad de jugadores total.
 *@param *players: Arreglo de jugadores pasado por referencia, para asignarles nombre.
 */

void crearJugadores (int numJugadores, Jugador * jugadores){
    string nombre;
    for (int i=0; i<numJugadores; i++){
        cout<<"Ingrese el nombre del jugador "<<(i+1)<<endl;
        cin>>nombre;
        jugadores[i] = Jugador (nombre);
    }
}


/*@brief Mr_Vladimir: Este método, llamado así en honor a un repartidor de cartas, se encarga de eso mismo, pero las distribuye a cada jugador del tablero, de forma equitativa.
 *@param num_players: Cantidad de jugadores total.
 *@param *players: Arreglo de jugadores pasado por referencia para asignarles las cartas.
 *@param *received_array: Arreglo con elementos que van a ser asignados a las barajas de forma automática .
 *@param array_lenght: Tamaño del arreglo; funciona para determinar qué tantas cartas debe asignar o recorrer.
 *@param position_in_deck: Determina en cuál posición de la baraja asignará una carta.
 */

void Mr_Vladimir(int num_players, Jugador * players, string * received_array, int array_lenght, int position_in_deck){
    int work_lng=array_lenght; //Esta variable indica hasta donde, para el arreglo source, se deben agregar o tomar cartas.
    int work_lng2=array_lenght; //Esta variable será constante a lo largo del método, sirve para comparar la cantidad de elementos disponibles con los 0 que indican que no lo son
    int repeater; //Repetidor es la variable que permite al repartidor de cartas no saltarse la posicion igualada a 0, de la forma mas efectiva posible
    string source[work_lng]; //Source es el arreglo que contiene todas las cartas disponibles
    string general_array[work_lng];/*General array es muy similar a source, solo que este almacena unos valores
                                    de 0 temporales, que usa source para borrar las cartas que ya no están disponibles*/


    int card; //carta en uso
    for (int i=0; i<work_lng; i++){
        source[i]=received_array[i];
        general_array[i]=received_array[i];
    }
    for (int T=0; T<num_players; T++){
        repeater=0;
        card=numRandom(0, work_lng-1);
        general_array[card]="0";
        players[T].barajaJugador[position_in_deck]=source[card]; //T de turno, P de place
        for (int i=0; i<work_lng2; i++){
            if (general_array[i]!="0"){
                source[repeater]=general_array[i];
                repeater++; //Fundamental, si entro aquí, la posición se suma, sino, se almacenará un cero o se dejará la carta que source tiene.
            }
        }
        work_lng--; //Lo de abajo es imprescindible, sino se quedan las cartas viejas y el random puede retormarlas y crear incongruencias
        for (int i=0; i<work_lng; i++){
                general_array[i]=source[i]; //Actualiza el general con el source para seguir asignando 0 y cartas.
        }
    }

}

void imprimirArreglo (string* arreglo, int tamanio){
    for (int i=0;i< tamanio;i++){
        cout << arreglo[i] << "  ";
    }
    cout << endl;
}

/**
 * @brief Funcion que distribuye las cartas entre el total de jugadores
 * @param habitaciones es el arreglo que contiene las habitaciones
 * @param numhaHitaciones tamaño del arreglo habitaciones
 * @param armas es el arreglo que contiene las armas
 * @param numArmas es el tamaño del arreglo armas
 * @param nombreJugadores es el arreglo que contiene los nombres de los jugadores
 * @param jugadores es el arreglo que contiene los objetos de tipo jugador
 * @param numJugadores es el tamaño del arreglo jugadores
 * @param totalCartas es el total de cartas que se deben repartir
 */
void repartirCartas(string * habitaciones, int numHabitaciones, 
                    string * armas, int numArmas, 
                    string * nombresJugadores, Jugador* jugadores, 
                    int numJugadores, int totalCartas){

    int numAleatorio = 0;
    //primero creamos un arreglo que contendra las cartas ardenadas de forma aleatoria y lo
    //llenamos con caracteres vacios ademas de hacer otro arreglo de enteros que tendra un 
    //orden de almacenado de las cartas 
    string baraja[totalCartas];
    int ordenAcomodar[totalCartas];
    int existe = 0; //int que sirve como marcador de un numero que ya existe
    int contador = 0;
    //llenamos los arreglos con informacion para evitar errores
    for (int i=0; i < totalCartas; i++){
        baraja[i] = "";
    }
    for (int i=0; i < totalCartas; i++){
        ordenAcomodar[i] = -1;
    }
    //ciclo que llena el arreglo con numeros aleatorios
    while (contador < totalCartas){
        numAleatorio = numRandom(0,(totalCartas-1));
        //recorremos el arreglo de orden para ver si el numero existe
        for (int i=0;i< totalCartas;i++){
            if (ordenAcomodar[i] == numAleatorio){
                existe = 1;
            }
        }
        //si el numero existe no lo almacenamos
        if (existe == 0){
            ordenAcomodar[contador] = numAleatorio;
            contador ++;
        }else{
            existe = 0;
        }
    }

    //distriuimos las cartas segun el orden que se calculo
    contador = 0;
    for (int i = 0; i < numHabitaciones ; i++){
        if (habitaciones[i] != ""){
            baraja[ordenAcomodar[contador]] = habitaciones[i];
            contador++;
        }
    }
    for (int i = 0; i < numArmas ; i++){
        if (armas[i] != ""){
            baraja[ordenAcomodar[contador]] = armas[i];
            contador++;
        }
    }
    for (int i = 0; i < numJugadores ; i++){
        if (nombresJugadores[i] != ""){    
            baraja[ordenAcomodar[contador]] = nombresJugadores[i];
            contador++;
        }
    }

    int cartasPorJugador = totalCartas / numJugadores;
    contador = 0;
    //distrinuimos las cartas a cada jugador
    for (int i = 0; i < numJugadores; i++){
        for (int j =0; j < cartasPorJugador; j++){
            jugadores[i].barajaJugador[j] = baraja[contador];
            contador++;
        }
    }
    //dependiendo de la cantidad de jugadores las cartas se distribuyen de forma
    //desigual entonces con este ciclo repartimos el resto de las cartas
    int juga = 0;
    while (contador < totalCartas)
    {
        jugadores[juga].barajaJugador[cartasPorJugador] = baraja[contador];   
        contador++;
        juga++;
    }
}


/**
 * @brief Metodo que despliega las opciones para sospechar y ejecuta la accion
 * @param jugadores que es el arreglo de objetos jugador
 * @param cartas que es el objeto cartas
 */
void sospechar(Jugador* jugadores, Cartas cartas){
    //primero imprimimos la lista de habitaciones
    string habitacionSospechada = "";
    string armaSospechada = "";
    string jugadorSospechado = "";
    int seleccion = 0;
    cout << "Digite el numero de la habitacion" << endl;
    for (int i = 0; i < cartas.numHabitaciones; i++){
        cout << i+1 << ":  " << cartas.copiahabitaciones[i] << endl;
    }
    cin >> seleccion;
    if ((seleccion >= 0) && (seleccion <= cartas.numHabitaciones)){
        habitacionSospechada = cartas.copiahabitaciones[seleccion-1];
    }
    cout << "Digite el nnumero del Arma" << endl;
    for (int i = 0; i < cartas.numArmas; i++){
        cout << i+1 << ":  " << cartas.copiaarmas[i] << endl;
    }
    cin >> seleccion;
    if ((seleccion >= 0) && (seleccion <= cartas.numArmas)){
        armaSospechada = cartas.copiaarmas[seleccion-1];
    }
    cout << "Digite el nnumero del Jugador" << endl;
    for (int i = 0; i < cartas.numJugadores; i++){
        cout << i+1 << ":  "  << cartas.copianombresJugadores[i] << endl;
    }
    cin >> seleccion;
    if ((seleccion >= 0) && (seleccion <= cartas.numJugadores)){
        jugadorSospechado = cartas.copianombresJugadores[seleccion-1];
    }
    //Muestra una pista de los demas jugadores hasta que se encuentre con
    string encontrada = "";
    //cout << "la habitacion sispechada es " << habitacionSospechada << endl;
    //cout << "la arma sispechada es " << armaSospechada << endl;
    //cout << "la jugador sispechada es " << jugadorSospechado << endl;
    for (int i = 0; i < cartas.numJugadores; i++){
        for (int j = 0; j < 9 ; j++){
            if (jugadores[i].barajaJugador[j] == armaSospechada){
                encontrada = armaSospechada;
            }else if (jugadores[i].barajaJugador[j] == habitacionSospechada){
                encontrada = habitacionSospechada;
            }else if (jugadores[i].barajaJugador[j] == jugadorSospechado){
                encontrada = jugadorSospechado;
            }
        }
        if (encontrada != ""){
            cout << "El jugador " << i+1 << " tiene la pista " << encontrada << endl;
            i = cartas.numJugadores;
        }else{
            cout << "No se encontraron coincidencias en el jugador "<< i+1 << endl;
        }
    }
}


/**
 * @brief Metodo que despliega las opciones para acusar y ejecuta la accion
 * @param jugadores que es el arreglo de objetos jugador
 * @param cartas que es el objeto cartas
 * @return devuelve 3 si acerto en la sospecha
 */
int acusar(Jugador* jugadores, Cartas cartas){
    //primero imprimimos la lista de habitaciones
    string habitacionSospechada = "";
    string armaSospechada = "";
    string jugadorSospechado = "";
    int acierto = 0;
    int seleccion = 0;
    cout << "Digite el numero de la habitacion" << endl;
    for (int i = 0; i < cartas.numHabitaciones; i++){
        cout << i+1 << ":  " << cartas.copiahabitaciones[i] << endl;
    }
    cin >> seleccion;
    if ((seleccion >= 0) && (seleccion <= cartas.numHabitaciones)){
        habitacionSospechada = cartas.copiahabitaciones[seleccion-1];
    }
    cout << "Digite el nnumero del Arma" << endl;
    for (int i = 0; i < cartas.numArmas; i++){
        cout << i+1 << ":  " << cartas.copiaarmas[i] << endl;
    }
    cin >> seleccion;
    if ((seleccion >= 0) && (seleccion <= cartas.numArmas)){
        armaSospechada = cartas.copiaarmas[seleccion-1];
    }
    cout << "Digite el nnumero del Jugador" << endl;
    for (int i = 0; i < cartas.numJugadores; i++){
        cout << i+1 << ":  "  << cartas.copianombresJugadores[i] << endl;
    }
    cin >> seleccion;
    if ((seleccion >= 0) && (seleccion <= cartas.numJugadores)){
        jugadorSospechado = cartas.copianombresJugadores[seleccion-1];
    }
    //Muestra una pista de los demas jugadores hasta que se encuentre con
    //cout << "la habitacion sispechada es " << habitacionSospechada << endl;
    //cout << "la arma sispechada es " << armaSospechada << endl;
    //cout << "la jugador sispechada es " << jugadorSospechado << endl;
    if (habitacionSospechada == cartas.combinacionGanadora[0]){
        acierto++;
    }
    if (armaSospechada == cartas.combinacionGanadora[1]){
        acierto++;
    }
    if (jugadorSospechado == cartas.combinacionGanadora[2]){
        acierto++;
    }
    return acierto;
}

/**
 * @brief Funcion main del codigo
 */
int main(int argc, char** argv){
    Tablero juego = Tablero("clue.txt");
    int numJugadores;
    cout<<"Ingrese la cantidad de jugadores que van a jugar"<<endl;
    cin>>numJugadores;
    if ((numJugadores < 2) || (numJugadores > 6)){
        cout << "Este Juego debe ser jugado por un minimo de 2 jugadores" << endl;
        cout << "y un maximo de 6 jugadores" << endl;
    }else{
        Jugador jugadores[numJugadores];
        crearJugadores(numJugadores, jugadores);
        Cartas cartas = Cartas(numJugadores,jugadores);
        repartirCartas(cartas.habitaciones, cartas.numHabitaciones, cartas.armas , cartas.numArmas, cartas.nombresJugadores, 
        jugadores, numJugadores, (cartas.numHabitaciones+cartas.numArmas+cartas.numJugadores-3));

        // empezamos con las rondas del juego
        int ganar = 0;
        int jugador = 1;
        int dado = 0;
        int movimientos = 0;
        string lectura;
        char direccion[1];
        int rspMovimiento = 0;
        int seleccion;
        int viveomuere = 0;
        //se repite hasta que haya un ganador
        while(ganar == 0){
            char fichas[6] = {'1','2','3','4','5','6'};
            if (jugador > numJugadores){
                jugador = 1;
            }
            if (jugadores[jugador-1].estaVivo == 1){
                juego.imprimirTablero(fichas[jugador-1]);
                cout << "Jugador " << jugador << " es su turno, precione ALGUNA teclas para girar los dados" << endl;
                cin >> lectura;
                dado = numRandom (1,12);
                movimientos = dado;
                cout << "Sacó un " << dado << endl;
                while (movimientos > 0){
                    cout << "Le quedan " << movimientos << " movimientos" << endl;
                    cout << "Digite un movmiento (w = ↑, a = ← ,s = ↓ ,d = ➝)" << endl;
//                    cin >> direccion;
                    rspMovimiento = juego.moverFicha(fichas[jugador-1],direccion[0]);
                    juego.imprimirTablero(fichas[jugador-1]);
                    if (rspMovimiento == 1){
                        movimientos--;
                    }else if (rspMovimiento == -1){
                        cout << "***************************************************" << endl;
                        cout << "***************************************************" << endl;
                        cout << "***************************************************" << endl;
                        cout << "***************************************************" << endl;
                        cout << "Pueda sospechar(1) o acusar(2)" << endl;
                        cin >> seleccion;
                        if (seleccion == 1){;
                            sospechar(jugadores, cartas);
                            movimientos = 0; 
                        }else if (seleccion == 2){
                            cartas.imprimirArreglos();
                            viveomuere = acusar(jugadores, cartas);
                            cout << "vive" << viveomuere << endl;
                            if (viveomuere == 3){
                                movimientos = 0;
                                ganar = 1;
                                //matamos el resto de jugadores
                                for (int i=0; i<numJugadores; i++){
                                    if (i != (jugador-1)){
                                        jugadores[i].estaVivo=0;
                                    }
                                }
                            }else{
                                cout << "Jugador " << jugador << " ha muerto" << endl;
                                jugadores[jugador-1].estaVivo = 0;
                                movimientos = 0;
                            }
                        }
                    }
                }
            }
            //recorremos el arreglo de jugadores para ver cuantos estan vivos si solo queda 1
            //entonces se dicta el ganador
            int ganador = 0;
            for (int i = 0; i < numJugadores; i++){
                ganador = ganador + jugadores[i].estaVivo;
            }
            //quiere decir que solo hay uno vimo
            if (ganador == 1){
                for (int i = 0; i < numJugadores; i++){
                    if (jugadores[i].estaVivo == 1){
                        cout << endl;
                        cout << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Felicidades " << jugadores[i].nombre << " es el ganador" << endl;
                    }
                }   
            }
            jugador++;
        }
    }
}
