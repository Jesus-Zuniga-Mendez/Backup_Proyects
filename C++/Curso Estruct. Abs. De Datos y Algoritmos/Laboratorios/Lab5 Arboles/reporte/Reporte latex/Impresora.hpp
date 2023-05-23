#ifndef IMPRESORA_H
#define IMPRESORA_H

using namespace std;


/**
 * @brief clase que imprmime objetos
 */
template <class T>
class Impresora {
    public:
        /**
         * @brief constructor por defecto
         */
        Impresora(){
        };
        /**
        * @brief constructor creado mediante template
        * @param fig es el objeto recibido por parametro
        */
        Impresora(T fig, string impresion){
            cout << ObtenerColor(fig.color);
            this->ruta  = fig.nombre;
            fig.impresion = impresion;
            imprimirPantalla(fig);
            imprimirArchivo(fig, fig.nombre);
            cout << FORMATO_ANSI_COLOR_RESET;
        };
        /**
         * @brief destructor por defecto de la clase
         */
        ~Impresora(){};

        /**
         * @brief clase que permite imprimir en el color correcto
         * @param nomColor es el color que debe buscar
         * @return debuelve el codigo de color que debe imprimir
         */
        string ObtenerColor(string nomColor){
            int tamanio = 6;
            string respuesta = "\x1b[01;37m";
            string nombre[tamanio] = {" Rojo"," Verde"," Amarillo"," Azul"," Purpura"," Celeste"};
            string color[tamanio] = {"\x1b[31m","\x1b[32m","\x1b[33m","\x1b[34m","\x1b[35m","\x1b[36m"};
            for (int i=0; i< tamanio ; i++ ){
                if (nomColor == nombre[i]){
                    respuesta = color[i];
                }
            }
            return respuesta;
        }

        /**
         * @brief metodo que permite imprmir la pantalla
         * @param objeto es el objeto que debe imprimir 
         */  
        void imprimirPantalla(const T &objeto){
            cout << objeto.impresion << endl;
        }
        /**
         * @brief metodo que permite imprmir a un archivo
         * @param objeto es el objeto que debe imprimir 
         * @param sutaArchivo es la ruta del archivo a escribir
         */  
        void imprimirArchivo(const T& objeto, string rutaArchivo){
            ofstream archivo;
            string ruta= "./"+ rutaArchivo;
            archivo.open(ruta.c_str(),ios::out); //abriendo archivo
            if (archivo.fail()){
<<<<<<< HEAD
                cout << "No se pudo abrir el archivo "  << this->nombre << endl;
                exit(1);
            }
            archivo << ~lin;
            cout << "se creo el archivo " << this->nombre << endl;
=======
                cout << "No se pudo abrir el archivo "  << rutaArchivo << endl;
                exit(1);
            }
            archivo << objeto.impresion;
            cout << "se creo el archivo " << rutaArchivo << endl;
>>>>>>> ead433545a5c7623452a7be129b473abd71f7fb0
            archivo.close();
        }
        string ruta;
};

#endif
