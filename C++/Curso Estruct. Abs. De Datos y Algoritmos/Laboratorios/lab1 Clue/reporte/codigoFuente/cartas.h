#ifndef CARTAS_H
#define CARTAS_H

    #include "./includes.h"

    using namespace std;

    class Cartas
    {
        public:

            Cartas(int ctdJugadores, Jugador jugadores[]){
                numHabitaciones = 9;
                numArmas = 5;
                numJugadores = ctdJugadores;
                habitaciones = new string[numHabitaciones];
                habitaciones[0] = "El Eden";
                habitaciones[1] = "El CataLinux";
                habitaciones[2] = "El Paraiso";
                habitaciones[3] = "Masajex";
                habitaciones[4] = "El Cataluña";
                habitaciones[5] = "El Rey";
                habitaciones[6] = "La Oficina";
                habitaciones[7] = "Venus";
                habitaciones[8] = "La Casa";
                copiahabitaciones = new string[numHabitaciones];
                copiahabitaciones[0] = "El Eden";
                copiahabitaciones[1] = "El CataLinux";
                copiahabitaciones[2] = "El Paraiso";
                copiahabitaciones[3] = "Masajex";
                copiahabitaciones[4] = "El Cataluña";
                copiahabitaciones[5] = "El Rey";
                copiahabitaciones[6] = "La Oficina";
                copiahabitaciones[7] = "Venus";
                copiahabitaciones[8] = "La Casa";
                armas = new string[numArmas];
                armas[0] = "Ak 47 con silenciador";
                armas[1] = "Bazooka";
                armas[2] = "Espada del Rey Arturo";
                armas[3] = "Conversor Religioso";
                armas[4] = "Mjolnir";
                copiaarmas = new string[numArmas];
                copiaarmas[0] = "Ak 47 con silenciador";
                copiaarmas[1] = "Bazooka";
                copiaarmas[2] = "Espada del Rey Arturo";
                copiaarmas[3] = "Conversor Religioso";
                copiaarmas[4] = "Mjolnir";
                nombresJugadores = new string[ctdJugadores];
                for (int i = 0; i < numJugadores; i++){
                    nombresJugadores[i] = jugadores[i].nombre;
                }
                copianombresJugadores = new string[ctdJugadores];
                for (int i = 0; i < numJugadores; i++){
                    copianombresJugadores[i] = jugadores[i].nombre;
                }
                combinacionGanadora = new string[3];
                combinacionGanadora[0] = sacarCombinacionGanadora(habitaciones, (numHabitaciones-1));
                combinacionGanadora[1] = sacarCombinacionGanadora(armas, (numArmas-1));
                combinacionGanadora[2] = sacarCombinacionGanadora(nombresJugadores, (numJugadores-1));
            }

            ~Cartas(){
                // delete habitaciones;
                // delete armas;
                // delete nombresJugadores;
                // delete combinacionGanadora;
                // delete copiahabitaciones;
                // delete copiaarmas;
                // delete copianombresJugadores;
            }


            /**
             * @brief Funcion que toma un arreglo y devuelve una casilla del mismo al azar
             * @param habitaciones es el arreglo que contien las habitaciones
             * @param tamanio es la dimension del arreglo
             * @return devuelve el dato seleccionado
             */
            string sacarCombinacionGanadora (string* arreglo, int tamanio){
                string seleccion = "";
                int aleatorio = numRandom(0,tamanio);
                seleccion = arreglo[aleatorio];
                arreglo[aleatorio] = "";
                return seleccion;
            }


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
            
            /**
             * @brief Imprime el arreglo solicitado
             */
            void imprimirArreglos(){
                cout << "Habitaciones" << endl;
                for (int i=0;i< numHabitaciones;i++){
                    cout << habitaciones[i] << "  ";
                }
                cout << endl;
                cout << "Armas" << endl;
                for (int i=0;i< numArmas;i++){
                    cout << armas[i] << "  ";
                }
                cout << endl;
                cout << "Jugadores" << endl;
                for (int i=0;i< numJugadores;i++){
                    cout << nombresJugadores[i] << "  ";
                }
                cout << endl;
                cout << "Ganadora" << endl;
                for (int i=0;i< 3;i++){
                    cout << combinacionGanadora[i] << "  ";
                }
                cout << endl;
            }


            int numHabitaciones;
            int numArmas;
            int numJugadores;
            string * habitaciones;
            string * armas;
            string * combinacionGanadora;
            string * nombresJugadores;
            string * copiahabitaciones;
            string * copiaarmas;
            string * copianombresJugadores;
        private:
    };
#endif