#ifndef TOOLS_H
#define TOOLS_H
    #include "./Includes.hpp"

    class Principal{
        public:
            Principal(){};
            ~Principal(){};
            /**
             * @brief metodo que imprime un banner de bienvenida
             */
            void Bienvenido(){
                cout << FORMATO_ANSI_COLOR_LIGHT_BLUE << endl;
                cout << " _____  _                           _    _      " << endl; 
                cout << "| __  ||_| ___  ___  _ _  ___  ___ |_| _| | ___ " << endl;  
                cout << "| __ -|| || -_||   || | || -_||   || || . || . |" << endl;
                cout << "|_____||_||___||_|_| \\_/ |___||_|_||_||___||___|" << endl; 
                cout << FORMATO_ANSI_COLOR_RESET << endl;
            }
            /**
             * @brief metodo que imprime un un menu
             */
            void Menu(){
                cout << "Digite la opcion que desea realizar" << endl; 
                cout << "   1: Ingresar un .....Rectangulo" << endl;  
                cout << "   2: Ingrear un ......Triangulo" << endl;
                cout << "   3: Ingresar un .....Circulo" << endl; 
                cout << "   4: Ingresar una figura distinta con N cantidad de lados "<<FORMATO_BLINK_EFFECT<<"(EN Construccion.....)" << endl;
                cout << "   5: Manipular figuras"<<FORMATO_BLINK_EFFECT<<"(EN Construccion.....)" << endl;
                cout << "   0: Salir" << endl;
            }

            /**
             * @brief metodo que crea un arreglo de objetos tipo vertice
             * @param cantidad es el numero de vertices
             * @param arreglo es el puntero del arreglo que se va a pasar
             */
            void HacerArregloVertices(int cantidad, Vertice* arreglo){
                int x = 0;
                int y = 0;
                cout << "Digite los vertices en orden siguiendo las manecillas del reloj" << endl;
                for (int i = 0; i< cantidad; i++){
                    cout << "Vertice # " << (i+1) << endl; 
                    cout << "Digite la coordenada en X" << endl;
                    cin >> x;
                    cout << "Digite la coordenada en Y" << endl;
                    cin >> y;
                    arreglo[i].x = x;
                    arreglo[i].y = y;
                    arreglo[i].identificador = i;
                }
            }
            /**
             * @brief metodo que permite escoger un color de figura
             */
            string Color(){
                int tamanio = 6;
                string respuesta = "Blanco";
                string nombre[tamanio] = {" Rojo"," Verde"," Amarillo"," Azul"," Purpura"," Celeste"};
                string color[tamanio] = {"\x1b[31m","\x1b[32m","\x1b[33m","\x1b[34m","\x1b[35m","\x1b[36m"};

                cout << "Seleccione el color de la figura(Blanco por defecto)" << endl;
                for (int i =0; i < tamanio; i++){
                    cout << "\x1b[01;37m";
                    cout << "       " << (i+1) << ": " << color[i] << nombre[i] << endl;
                }
                int seleccion = 0;
                cout << FORMATO_ANSI_COLOR_RESET;
                cin >> seleccion;
                if (seleccion <= tamanio){
                    respuesta = nombre[seleccion-1];
                }
                return respuesta;
            }
            /**
             * @brief metodo que instancia un objeto de tipo rectangulo
             */
            void MtdRectangulo(){
                Vertice arregloVertices[4];
                HacerArregloVertices(4, arregloVertices);
                rectangulo figura(arregloVertices);
                figura.cantidadPuntos = 4;
                string lectura = "";
                cout << "Digite el nombre de la figura" << endl;
                cin >> lectura;
                figura.nombre = lectura;
                figura.color = Color();
                figura.impresion = ~figura;
                Impresora<rectangulo> imprimir (figura , figura.impresion);
            }
            /**
             * @brief metodo que instancia un objeto de tipo Circulo
             */
            void MtdCirculo(){
                Vertice arregloVertices[2];
                HacerArregloVertices(2, arregloVertices);
                Circulo figura (arregloVertices);
                figura.cantidadPuntos = 2;
                string lectura = "";
                cout << "Digite el nombre de la figura" << endl;
                cin >> lectura;
                figura.nombre = lectura;
                figura.color = Color();
                figura.impresion = ~figura;
                Impresora<Circulo> imprimir (figura, figura.impresion);
            }
            /**
             * @brief metodo que instancia un objeto de tipo Triangulo
             */
            void MtdTriangulo(){
                Vertice arregloVertices[3];
                HacerArregloVertices(3, arregloVertices);
                float distancias[3];
                distancias[0]=arregloVertices[0]>>arregloVertices[1];
                distancias[1]=arregloVertices[1]>>arregloVertices[2];
                distancias[2]=arregloVertices[2]>>arregloVertices[0];
                if ((distancias[0] == distancias[1]) && (distancias[0] == distancias[2])){
                    Equilatero figura(arregloVertices);
                    figura.cantidadPuntos = 3;
                    string lectura = "";
                    cout << "Digite el nombre de la figura" << endl;
                    cin >> lectura;
                    figura.nombre = lectura;
                    figura.color = Color();
                    figura.impresion = ~figura;
                    Impresora<Equilatero> imprimir (figura, figura.impresion);
                }else if ((distancias[0] == distancias[1]) || (distancias[0] == distancias[2]) || (distancias[1] == distancias[2])){
                    Isosceles figura(arregloVertices);
                    figura.cantidadPuntos = 3;
                    string lectura = "";
                    cout << "Digite el nombre de la figura" << endl;
                    cin >> lectura;
                    figura.nombre = lectura;
                    figura.color = Color();
                    figura.impresion = ~figura;
                    Impresora<Isosceles> imprimir (figura, figura.impresion);
                }else{
                    Escaleno figura(arregloVertices);
                    figura.cantidadPuntos = 3;
                    string lectura = "";
                    cout << "Digite el nombre de la figura" << endl;
                    cin >> lectura;
                    figura.nombre = lectura;
                    figura.color = Color();
                    figura.impresion = ~figura;
                    Impresora<Escaleno> imprimir (figura, figura.impresion);
                }
            }
            /**
             * @brief metodo que instancia un objeto n cantidad de ladoso
             */
            void MtdCualquierFigura(){
                // int cantidad = 0;
                // cout << "Digite la cantidad de vertices" << endl;
                // cin >> cantidad;
                // Vertice arregloVertices[cantidad];
                // HacerArregloVertices(cantidad, arregloVertices);
                // Figura figura = new Circulo(arregloVertices);
                // figura.cantidadPuntos = cantidad;
                // string lectura = "";
                // cout << "Digite el nombre de la figura" << endl;
                // cin >> lectura;
                // figura.nombre = lectura;
                // figura.color = Color();
                // figura.impresion = ~figura;
                // Impresora<Escaleno> imprimir (figura, figura.impresion);
            }
    };
#endif