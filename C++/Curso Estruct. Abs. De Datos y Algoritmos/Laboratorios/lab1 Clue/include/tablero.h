#ifndef TABLERO_H
#define TABLERO_H
    #include "./includes.h"

    using namespace std;

    class Tablero
    {
        public:
            Tablero(string nombre)
            {
                ruta = "./resources/"+nombre;
                obtenerDimensiones();
                //reservamos memoria para la matriz del tablero
                matriz = new char*[filas];
                for (uint i=0 ; i< filas ; i++){
                    matriz[i] = new char[columnas];
                }
                cargarTablero();
                //cout << "constructor string" << endl;
            };

            ~Tablero(){
                delete matriz;
                //cout << "destructor" << endl;
            };

            /**
             * @brief imprimime una matriz
             */
            void imprimirTablero(char jugador){
                for (uint i =0; i < filas; i++){
                    for (uint j = 0; j < columnas; j++){
                        if (*(*(matriz+i)+j) == 13){
                            cout << endl;
                        }else{
                            formato(*(*(matriz+i)+j) , jugador);
                        }
                    }
                }
                cout << endl << endl;
            }
            /**
             * @brief funcion que mueve jugadores por el tablero
             * @param ficha es el jugador
             * @param direccion es un identificador w arriba, a izquierda, s abajo, d derecha.
             * @return devuelve 1 se se pudo mover, 0 si no pudo, -1 si entro a una habitacion
             */
            int moverFicha(char ficha, char direccion){
                uint posicionX = 0;
                uint posicionY = 0;
                int respuesta = 0;
                uint moverX = 0;
                uint moverY = 0;
                for (uint i =0; i < filas; i++){
                    for (uint j = 0; j < columnas; j++){
                        if (*(*(matriz+i)+j) == ficha){
                            posicionY = i;
                            posicionX = j;
                        }
                    }
                }
                //cout << "la posicion de  " << ficha << "es "<< posicionX << " " << posicionY << endl;
                moverY = posicionY;
                moverX = posicionX;
                if ((direccion == 'w') || (direccion == 'W')){
                    moverY= posicionY -1;
                }
                if ((direccion == 's') || (direccion == 'S')){
                    moverY= posicionY +1;
                }
                if ((direccion == 'a') || (direccion == 'A')){
                    moverX= posicionX -1;
                }
                if ((direccion == 'd') || (direccion == 'D')){
                    moverX= posicionX +1;
                }
                if ((moverX == 1) && (moverY == 1)){
                    //cout << "primer if " << endl;
                    moverX = columnas - 3;                            
                    moverY = filas -2;
                }else if ((moverX == columnas - 3) && (moverY == filas -2)){
                    //cout << "segundo if " << endl;
                    moverX = 1;
                    moverY = 1;
                }else if ((moverX == 1) && (moverY == filas -2)){
                    //cout << "tercer if " << endl;
                    moverX = columnas - 3;
                    moverY = 1;
                }else if ((moverX == columnas - 3) && (moverY == 1)){
                    //cout << "cuerto if " << endl;
                    moverX = 1;
                    moverY = filas-2;
                }
                //cout << "la voy a mover a  " << moverX << " " << moverY << endl;
                for (int i =0; i < tamEspaciosPermitidos; i++){
                    if (*(*(matriz+moverY)+moverX)== espaciosPermitidos[i]){
                        *(*(matriz+moverY)+moverX) = ficha;
                        
                        
                        if ((espaciosPermitidos [i] != ' ') && (espaciosPermitidos[i] != '/')){
                            respuesta = -1;
                        }else{
                            respuesta = 1;
                        }
                        
                        
                        
                        for (int j=0; j < tamJugadores; j++){
                            if (caracterPosicionJugador[0][j] == ficha){
                                *(*(matriz+posicionY)+posicionX) = caracterPosicionJugador[1][j];
                                caracterPosicionJugador[1][j] = espaciosPermitidos[i];
                            }
                        }
                    } 
                }

                return respuesta;
            }


        private:  
            uint filas = 0;
            uint columnas = 0;
            string ruta = "";
            char ** matriz = NULL;
            //se puede cambiar este array por uno dinamico para tableros diferentes
            int tamEspaciosPermitidos = 11;
            char espaciosPermitidos[11] = {'A','I','H','G','B','F','D','E','C',' ','/'};
            int tamJugadores = 6;
            char caracterPosicionJugador[2][6] = {{'1','2','3','4','5','6'},{' ',' ',' ',' ',' ',' '}};
            /**
             * @brief abre un archivo
             */
            ifstream abrirArchivo(){
                ifstream archivo;
                archivo.open(ruta.c_str(),ios::in);
                if (archivo.fail()){
                    cout << "No se pudo abrir el archivo "  << ruta << endl;
                exit(1);
                }
                return archivo;
            }
            /*
            *@brief Funion que permite obtener el numero de filas y columnas del tablero
            */
            void obtenerDimensiones(){ ;
                ifstream archivo = abrirArchivo();
                string linea = "";
                int contador = 0;
                while (!archivo.eof()){
                    getline(archivo,linea);
                    contador++;
                    if (linea.size() > columnas){
                        columnas = linea.size();
                    }
                }
                filas = contador;
                archivo.close();
            }
            /**
             * @brief funcion que carga el tablero en el arreglo
             */
            void cargarTablero (){//char **matriz, uint f, uint c){
                ifstream archivo = abrirArchivo();
                string linea = "";
                char salto = 00;
                //primero llenamos la matriz con algun caracter en este caso caracter nulo
                for (uint i =0; i < filas; i++){
                    for (uint j = 0; j < columnas; j++){
                        *(*(matriz+i)+j) = salto;
                    }
                }
                while (!archivo.eof()){
                    for (uint i =0; i < filas; i++){
                        getline(archivo,linea);
                        for (uint j = 0; j < linea.size(); j++){
                            *(*(matriz+i)+j) = linea[j];

                        }
                    }

                }
                archivo.clear();
            }

            void formato (char caracter, char jugador){
                if (caracter == jugador){
                    cout << FORMATO_BLINK_EFFECT << FORMATO_BACKGROUND_COLOR_GREEN << FORMATO_ANSI_COLOR_RED << caracter;
                    cout << FORMATO_ANSI_COLOR_RESET;
                    caracter = 00;
                }
                switch (caracter)
                    {
                    case 'H':
                        //ElCataluña
                        cout << FORMATO_BACKGROUND_COLOR_BLUE << " ";
                        break;
                    case 'I':
                        //ELCatilinux
                        cout << FORMATO_BACKGROUND_COLOR_BROWN << " ";
                        break;
                    case 'A':
                        //Panters
                        cout << FORMATO_BACKGROUND_COLOR_LIGTH_BLUE << " ";
                        break;
                    case 'G':
                        //ElRey
                        cout << FORMATO_BACKGROUND_COLOR_LIGTH_GREEN << " ";
                        break;
                    case 'B':
                        //Masagex
                        cout << FORMATO_BACKGROUND_COLOR_PURPLE << " ";
                        break;
                    case 'F':
                        //Pangea
                        cout << FORMATO_BACKGROUND_COLOR_LIGTH_PURPLE << " ";
                        break;
                    case 'E':
                        //Pangea
                        cout << FORMATO_BACKGROUND_COLOR_TURQUOISE << " ";
                        break;
                    case 'D':
                        //Pangea
                        cout << FORMATO_BACKGROUND_COLOR_BLUE << " ";
                        break;  
                    case 'C':
                        //Pangea
                        cout << FORMATO_BACKGROUND_COLOR_BROWN << " ";
                        break;
                    case '/':
                        //Pangea
                        cout << FORMATO_BACKGROUND_COLOR_WHITE << " ";  
                        break;
                    case '#':
                        //Pangea
                        cout << FORMATO_ANSI_COLOR_RESET << FORMATO_BACKGROUND_COLOR_BLACK << "#";
                        cout << FORMATO_ANSI_COLOR_RESET;
                        break;
                    case ' ':
                        //Pangea
                        cout << FORMATO_BACKGROUND_COLOR_WHITE << " ";
                        break;          
                    default:
                        cout << FORMATO_ANSI_COLOR_BLACK << FORMATO_BACKGROUND_COLOR_RED  << caracter;
                        cout << FORMATO_ANSI_COLOR_RESET;
                        break;
                }
            }
    };

#endif
