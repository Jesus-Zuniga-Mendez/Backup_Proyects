#ifndef JUGADOR_H
#define JUGADOR_H

    #include "./includes.h"

    using namespace std;

    class Jugador
    {
        public:
            Jugador(string nom){
                nombre = nom;
                for (int i = 0; i < 9; i++){
                    barajaJugador[i] = "";
                }
                estaVivo = 1;
            }
            Jugador(){
            }

            ~Jugador(){
            }

            string barajaJugador[9]; // es la baraja/mano personal para cada jugador
            string nombre;
            int estaVivo;
        private:
    };
#endif
