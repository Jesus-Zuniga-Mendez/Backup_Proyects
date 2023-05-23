#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include "./Includes.h"
template<typename Data, typename Position>

class ArrayList: public List<Data , Position >{//public List<Data, Position> {
    public:
        Data* arreglo;
        int numero_items=0;//Identificador de limites de arreglo
        int items_activos=0; //Variable que indica la cantidad de item "accesibles"
        //Es util para los ciclos que implican busqueda y borrado de elementos


        ~ArrayList(){};

//#@brief Constructor por defecto
//#@param no tiene parametros especificos

        ArrayList(){
            this->arreglo = new (Data[3]);
            this->numero_items=3;
            this->items_activos = 0;
        };

//#@brief Metodo para aumentar el tamaño del arreglo
//#@param no tiene parametros especificos

        void resizer(){
            int tamanio = this->numero_items+3;
            Data *temporal_array = new Data[tamanio];
            for (int i=0; i<(this->numero_items);i++){
                temporal_array[i]=this->arreglo[i];
            }
            arreglo = temporal_array;
            this -> numero_items = tamanio;
            //std::cout<<"Mi direccion de memoria es TEMP: "<<temporal_array;
            //std::cout<<"Mi direccion de memoria es: "<<this -> arreglo;
        };

//#@brief Metodo para reducir el numero de elementos activos (iterador) a 0
//#@param no tiene parametros especificos

		void emptyList(){
            Data *temporal_array = new Data[this->numero_items];
            arreglo = temporal_array;
            items_activos = 0;
		};


//#@brief Metodo necesario para reordenar los elementos en caso de insertar elementos o borrar
//#@param data, necesario para almacenar un dato en una casilla

       void reorder(Data data, Position position){
                Data temp;
                int elem_reubicados=(this->items_activos)-position;
                for (int i=0; i<elem_reubicados+2; i++){
                    temp=arreglo[position+i-1];
                    arreglo[position+i-1]=data;
                    data=temp;
                }
        }

        void reorder_inv(Data data,Position position){
                Data temp;
                int elem_reubicados=(this->items_activos)-position;
                for (int i=0; i<elem_reubicados; i++){
                    temp=arreglo[position+i+1];
                    arreglo[position+i-1]=data;
                    data=temp;
                }
        }

//#@brief Metodo para introducir elementos al arreglo, generalmente despues del ultimo elemento
//#@param no tiene parametros especificos

        void insertt(Data data){
            if (this->items_activos==this->numero_items){
                resizer();
            }
            this->arreglo[items_activos]=data;/*La posicion del "MegaArreglo" esta dada
                                por items_activos, por eso el condicional precedente
                                para asegurar que siempre se tiene un tamanio de
                                arreglo adecuado*/
            this->items_activos++;
        };

//#@brief Metodo para introducir elementos al arreglo a una posicion especifica contigua.
//#@param Recibe como parametros el valor que se desea guardar y la posicion de guardado

        void insert (Data , Position* ){

        };
        Position & insert (const Data &d){
            Position po = 0;
            return po; 
        };
        void remove ( Position* ){
            
        };
        Data getElement ( Position* ){
            
        };
        Position* next ( Position* ){
            
        };
        Position* prev ( Position * ){
        };

        void insert(Data data, Position position){
            if (position<0){
                position=1;
            }
            if((1+this->items_activos)>this->numero_items){
                resizer();
            }
            if (position>(this->items_activos)){
                insert(data);
            }
            else{
                reorder(data, position+1);
                this->items_activos++;

            }

        };
//#@brief Metodo para eliminar un conjunto especifico de elementos.
//#@param Recibe como parametros el valor que se desea borrar.

        void remove(Data data){ //Recuerde que no se puede usar int, int en la instancia del arreglo
            // en cambio puede utilizar float, int. Fundamentalmente funcionan igual
                int temp_items_activos=items_activos;
                for (int i=0; i<temp_items_activos;i++){
                    if (arreglo[i]==data){
                        reorder_inv(arreglo[i+1], i+1);
                        items_activos--;
                    }
                }
        };

//#@brief Metodo para eliminar un elemento en una posicion especifica.
//#@param Recibe como parametros la posicion en la que se desea borrar.

		void remove(Position position){
		    //Recuerde que no se puede usar int, int en la instancia del arreglo
            // en cambio puede utilizar float, int. Fundamentalmente funcionan igual
            reorder_inv(arreglo[position], position);
            this->items_activos--;
		};

//#@brief Metodo para determinar que elemento se encuentra en una posicion especifica.
//#@param Recibe como parametros la posicion en la que se desea inspeccionar.

		Data getElement(Position position){
            return(arreglo[position-1]);
		};

//#@brief Metodo para determinar la posicion de un grupo de elementos.
//#@param Recibe como parametros el elemento que busca.
		Position* find(Data data){
            Position *posicion;
		    int cantidad_elem=0;
		    int elem_encontrados[items_activos];
            for (int i=0; i<(this->items_activos); i++){
                if (arreglo[i]==data){
                    elem_encontrados[cantidad_elem]=i+1;
                    cantidad_elem++;
                }
            }
            return posicion;
		};

//#@brief Metodo para determinar cual elemento esta despues de la posicion indicada.
//#@param Recibe como parametros la posicion a la cual desea revisarse el proximo elemento.
		Position* next(Position position){
            if (position==items_activos){
                std::cout<<"No hay elementos, fin del arreglo";
            }else{
                std::cout<<std::endl<<"Elemento siguiente: "<<arreglo[position];
            }
		};


//#@brief Metodo para determinar cual elemento antecede la posicion indicada.
//#@param Recibe como parametros la posicion a la cual desea revisarse el elemento anterior.
		Position* prev(Position position){
		    if (position<=1){
                std::cout<<std::endl<<"Este es el primer elemento del arreglo, no hay anterior";
            }else{
                std::cout<<std::endl<<"Elemento anterior: "<<arreglo[position-2];
            }
        };

//#@brief Metodo para imprimir elementos cual elemento antecede la posicion indicada.
//#@param no tiene parametros especificos
        void print(){
            for (int i=0; i<this->items_activos; i++){
                std::cout<<this->arreglo[i]<<std::endl;
            }
        };
};

#endif