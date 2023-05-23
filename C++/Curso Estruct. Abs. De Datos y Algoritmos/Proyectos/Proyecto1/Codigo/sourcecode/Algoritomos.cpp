/**
 * @file Filtros.cpp
 */


#include "../include/Includes.h"

using namespace std;
using namespace cv;

/**
 * @brief metodo que colorea una imagen cuyo borde fue detectado
 * @param nombre nombre de la imagen
 * @param algoritmo nombre del algoritmo usado
 */
void Algoritmos::Colorear(string nombre , string algoritmo){
    Mat imagen = imread(nombre,CV_8UC1);
    Mat coloreadaGris(imagen.rows, imagen.cols, CV_8UC1);
    Mat coloreada(imagen.rows, imagen.cols, CV_8UC3);
    Vec3b color = {0,0,255};
    Vec3b negro = {0,0,0};
    //Vec3b blanco = {255,255,255};

    //bool banderaInterior = false;
    int pixel = 0;
    //int contadorFilas = 0;
    //int contadorColumnas = 0;
    for (int f = 0; f < coloreadaGris.rows; f ++){
        for (int c = 0; c < coloreadaGris.cols; c ++){
            pixel = imagen.at<uchar>(f,c);
            if (pixel > 128){
                coloreadaGris.at<uchar>(f,c) = 255;
            }else{
                coloreadaGris.at<uchar>(f,c) = 0;
            }

       }
    }
    for (int f = 0; f < coloreada.rows; f ++){
        bool pintar = false;
        int contador = 1;
        for (int c = 0; c < coloreada.cols; c ++){
            pixel = coloreadaGris.at<uchar>(f,c);
            if (pixel > 128){
                pintar = true;
                if (coloreadaGris.at<uchar>(f,c+1) < 128){
                    contador++;
                }
            }
            if(contador > 2){
                pintar = false;
                contador = 1;
            }
            if (pintar == true){
                coloreada.at<Vec3b>(f,c) = color;
            }else{
                coloreada.at<Vec3b>(f,c) = negro;
            }

       }
    }
    imwrite("./resources/AcolorGris" + algoritmo + ".jpeg", coloreada);
    // for (int f = 0; f < imagen.rows; f ++){
    //     banderaInterior = false;
    //     for (int c = 0; c < imagen.cols; c ++){
    //       pixel = imagen.at<uchar>(f,c);

    //       if ((pixel == 0) && (banderaInterior == false)){
    //           coloreada.at<Vec3b>(f,c) = negro;
    //       }
    //       if ((pixel == 255) && (banderaInterior == false)){
    //           banderaInterior = true;
    //           coloreada.at<Vec3b>(f,c) = blanco;
    //       }else if((pixel == 0) && (banderaInterior == true)){
    //           coloreada.at<Vec3b>(f,c) = color;
    //       }else if ((pixel == 255) && (banderaInterior == true)){
    //           banderaInterior = false;
    //           coloreada.at<Vec3b>(f,c) = blanco;
    //       }else{
    //           coloreada.at<Vec3b>(f,c) = negro;
    //           banderaInterior = false;
    //           c = imagen.cols;
    //       }
    //    }
    // }
    // matrizImagen = coloreada;
    // imwrite("./resources/Acolor" + nombre + ".jpeg", coloreada);
    //this->EscribirImagen("./resources/Acolor" + nombre + ".jpeg");
}






/**
 * @brief metodo que escribe la imagen en disco
 * @imagen nombre de la imagen
 */
void Algoritmos::EscribirImagen(string imagen){
    string ruta = "./"+imagen;
    imwrite(ruta, matrizImagen);
}



/**
 * @brief cuenta perimetro de una imagen binaria
 * @return devuelve el numero de pixeles
 */
int Algoritmos::contarPixeles(){
    Mat imagen = matrizImagen;
    int contador = 0;
    int pixel = 0;
    for (int i=0; i<imagen.rows; i++){
        for (int j=0; j<imagen.cols; j++){
            pixel = imagen.at<uchar>(i,j);
            if (pixel == 255){
                //cout << pixel << endl;
                contador++;
            }
        }
    }
    return contador;
}

/**
 * @brief Funcion que convierte una imagen a binaria
 */
void Algoritmos::ABinario(){
    Mat imagen = matrizImagen;
    int pixel = 0;
    for (int i=0; i<imagen.rows; i++){
        for (int j=0; j<imagen.cols; j++){
            pixel = imagen.at<uchar>(i,j);
            if (pixel < 128){
                imagen.at<uchar>(i,j) = 0;
            }else{
                imagen.at<uchar>(i,j) = 255;
            }
        }
    }
    matrizImagen = imagen;

}

/**
 * @brief Funcion que pinta las figuras delimitadas de gris
 */
void Algoritmos::LlenarGrises(){
    Mat imagen = matrizImagen;
    int pixel = 0;
    for (int i=0; i<imagen.rows; i++){
        for (int j=0; j<imagen.cols; j++){
            pixel = imagen.at<uchar>(i,j);
            if (pixel == 128){
                bool parar = false;
                int contadorColumnas = j+1;
                while (parar == false){
                    pixel = imagen.at<uchar>(i,contadorColumnas);
                    cout << pixel << " , ";
                    if (pixel == 0){
                        cout <<"pinto gris" << endl;
                        imagen.at<uchar>(i,contadorColumnas) = 128;
                    }else if(pixel == 128){
                        cout <<"sali porque encontre otro gris" << endl;
                        parar = true;
                    }else if (contadorColumnas == imagen.cols -1){
                        cout <<"sali porque me paso" << endl;
                        parar = true;
                    }
                    else if (pixel == 255){
                        cout <<"sali porque soy blanco" << endl;
                        parar = true;
                    }
                    contadorColumnas++;
                }
                matrizImagen = imagen;
                this->EscribirImagen("./trash/llenandogrises" + to_string(contadorColumnas) + ".jpeg");
                j = contadorColumnas;

            }
        }
    }
    matrizImagen = imagen;
    this->EscribirImagen("llenandogrises.jpeg");
}




/**
 * @brief Funcion que convierte una imagen a binaria
 */
void Algoritmos::ABinarioInverso(){
    Mat imagen = matrizImagen;
    int pixel = 0;
    for (int i=0; i<imagen.rows; i++){
        for (int j=0; j<imagen.cols; j++){
            pixel = imagen.at<uchar>(i,j);
            if (pixel < 128){
                imagen.at<uchar>(i,j) = 255;
            }else{
                imagen.at<uchar>(i,j) = 0;
            }
        }
    }
    matrizImagen = imagen;

}

/**
 * @brief Aplica el algoritmo de moore
 */
void Algoritmos::Moore(){
    Mat imagen = matrizImagen;
    Mat nueva(imagen.rows, imagen.cols, CV_8UC1);
    int pixel;
    int blanco = 255;
    int negro = 0;
    int pfila = 0;
    int pcolumna = 1;
    int pixelInicial[2] = {0,0};
    int pixelControl[2] = {0,0};
    int pixelAnterior[2] = {0,0};
    int pixelSiguiente[2] = {0,0};
    //hacemos la imagen nueva negra
    for (int f=0; f<imagen.rows; f++){
        for (int c=0; c<imagen.cols; c++){
            nueva.at<uchar>(f, c) = negro;
        }
    }


    // string ruta = "./resources/resultadoMoore" ;
    // string extension = ".jpeg";
    //int contador = 0;
    for (int c=1; c<imagen.cols-2; c++){
        pixelAnterior[pfila] = imagen.rows-1;
        pixelAnterior[pcolumna] = c;
        for (int f=imagen.rows-2; f>0; f--){
		    pixel=imagen.at<uchar>(f, c);
            if (pixel == negro){
                pixelInicial[pfila] = f;
                pixelInicial[pcolumna] = c;
                pixelControl[pfila] = f;
                pixelControl[pcolumna] = c;
                bool terminar  = false;
                c = imagen.cols;
                f = 0;
                while (terminar == false){
                    if ((pixelAnterior[pfila] == pixelControl[pfila]+1) && (pixelAnterior[pcolumna] == pixelControl[pcolumna])){
                        pixelSiguiente[pfila] = pixelAnterior[pfila];
                        pixelSiguiente[pcolumna] = pixelAnterior[pcolumna]-1;
                    }else if ((pixelAnterior[pfila] == pixelControl[pfila]+1) && (pixelAnterior[pcolumna] == pixelControl[pcolumna]-1)){
                        pixelSiguiente[pfila] = pixelAnterior[pfila]-1;
                        pixelSiguiente[pcolumna] = pixelAnterior[pcolumna];
                    }else if ((pixelAnterior[pfila] == pixelControl[pfila]) && (pixelAnterior[pcolumna] == pixelControl[pcolumna]-1)){
                        pixelSiguiente[pfila] = pixelAnterior[pfila]-1;
                        pixelSiguiente[pcolumna] = pixelAnterior[pcolumna];
                    }else if ((pixelAnterior[pfila] == pixelControl[pfila]-1) && (pixelAnterior[pcolumna] == pixelControl[pcolumna]-1)){
                        pixelSiguiente[pfila] = pixelAnterior[pfila];
                        pixelSiguiente[pcolumna] = pixelAnterior[pcolumna]+1;
                    }else if ((pixelAnterior[pfila] == pixelControl[pfila]-1) && (pixelAnterior[pcolumna] == pixelControl[pcolumna])){
                        pixelSiguiente[pfila] = pixelAnterior[pfila];
                        pixelSiguiente[pcolumna] = pixelAnterior[pcolumna]+1;
                    }else if ((pixelAnterior[pfila] == pixelControl[pfila]-1) && (pixelAnterior[pcolumna] == pixelControl[pcolumna]+1)){
                        pixelSiguiente[pfila] = pixelAnterior[pfila]+1;
                        pixelSiguiente[pcolumna] = pixelAnterior[pcolumna];
                    }else if ((pixelAnterior[pfila] == pixelControl[pfila]) && (pixelAnterior[pcolumna] == pixelControl[pcolumna]+1)){
                        pixelSiguiente[pfila] = pixelAnterior[pfila]+1;
                        pixelSiguiente[pcolumna] = pixelAnterior[pcolumna];
                    }else if ((pixelAnterior[pfila] == pixelControl[pfila]+1) && (pixelAnterior[pcolumna] == pixelControl[pcolumna]+1)){
                        pixelSiguiente[pfila] = pixelAnterior[pfila];
                        pixelSiguiente[pcolumna] = pixelAnterior[pcolumna]-1;
                        if ((pixelSiguiente[pfila] == pixelInicial[pfila]) && (pixelSiguiente[pcolumna] == pixelInicial[pcolumna])){
                            terminar = true;
                        }
                    }

                    if ((imagen.at<uchar>(pixelSiguiente[pfila], pixelSiguiente[pcolumna])) == negro){
                        imagen.at<uchar>(pixelSiguiente[pfila], pixelSiguiente[pcolumna]) = 128;
                        nueva.at<uchar>(pixelSiguiente[pfila], pixelSiguiente[pcolumna]) = blanco;
                        pixelControl[pfila] = pixelSiguiente[pfila];
                        pixelControl[pcolumna] = pixelSiguiente[pcolumna];

                        //   if ((contador % 150) == 0){
                        //          this->EscribirImagen(ruta+ to_string(contador) + extension);
                        //   }
                        //   contador++;
                    }else{
                        pixelAnterior[pfila] = pixelSiguiente[pfila];
                        pixelAnterior[pcolumna] = pixelSiguiente[pcolumna];
                    }

                    if ((pixelSiguiente[pfila] == pixelInicial[pfila]) && (pixelSiguiente[pcolumna] == pixelInicial[pcolumna])){
                        terminar = true;
                    }
                }
                //matrizImagen = imagen;
                //this->LlenarGrises();
                //imagen = matrizImagen;


                //imagen.at<uchar>(f, c) = 128;
            }else{
                pixelAnterior[pfila] = f;
                pixelAnterior[pcolumna] = c;
            }
	    }
    }

    /*for (int f=0; f<imagen.rows; f++){
    	for (int c=0; c<imagen.cols; c++){
		    pixel=imagen.at<uchar>(f, c);
            if ((pixel != negro) && (pixel != blanco)){
                cout << pixel;
            }else{
                
            }
	    }
    }*/
    matrizImagen = nueva;
    //this->EscribirImagen(ruta+ "RESULTADO" + extension);
}


/**
 * @brief Aplica el algoritmo Radial
 */
void Algoritmos::Radial(){
    //cout << "sip" << endl;
    Mat imagen = matrizImagen;
    Mat nueva(imagen.rows, imagen.cols, CV_8UC1);
    int pixel;
    int blanco = 255;
    int negro = 0;
    int pfila = 0;
    int pcolumna = 1;
    int pixelInicial[2] = {0,0};
    int pixelControl[2] = {0,0};
    int pixelAnterior[2] = {0,0};
    int pixelSiguiente[2] = {0,0};
    //hacemos la imagen nueva negra
    for (int f=0; f<imagen.rows; f++){
        for (int c=0; c<imagen.cols; c++){
            nueva.at<uchar>(f, c) = negro;
        }
    }


    // string ruta = "./resources/resultadoMoore" ;
    // string extension = ".jpeg";
    //int contador = 0;
    for (int c=1; c<imagen.cols-2; c++){
        pixelAnterior[pfila] = imagen.rows-1;
        pixelAnterior[pcolumna] = c;
        for (int f=imagen.rows-2; f>0; f--){
		    pixel=imagen.at<uchar>(f, c);
            if (pixel == negro){
                bool primerRecorrido = true;
                pixelInicial[pfila] = f;
                pixelInicial[pcolumna] = c;
                pixelControl[pfila] = f;
                pixelControl[pcolumna] = c;
                bool terminar  = false;
                c = imagen.cols;
                f = 0;
                while (terminar == false){
                    if ((pixelAnterior[pfila] == pixelControl[pfila]+1) && (pixelAnterior[pcolumna] == pixelControl[pcolumna])){
                        pixelSiguiente[pfila] = pixelAnterior[pfila];
                        pixelSiguiente[pcolumna] = pixelAnterior[pcolumna]-1;
                    }else if ((pixelAnterior[pfila] == pixelControl[pfila]+1) && (pixelAnterior[pcolumna] == pixelControl[pcolumna]-1)){
                        pixelSiguiente[pfila] = pixelAnterior[pfila]-1;
                        pixelSiguiente[pcolumna] = pixelAnterior[pcolumna];
                    }else if ((pixelAnterior[pfila] == pixelControl[pfila]) && (pixelAnterior[pcolumna] == pixelControl[pcolumna]-1)){
                        pixelSiguiente[pfila] = pixelAnterior[pfila]-1;
                        pixelSiguiente[pcolumna] = pixelAnterior[pcolumna];
                    }else if ((pixelAnterior[pfila] == pixelControl[pfila]-1) && (pixelAnterior[pcolumna] == pixelControl[pcolumna]-1)){
                        pixelSiguiente[pfila] = pixelAnterior[pfila];
                        pixelSiguiente[pcolumna] = pixelAnterior[pcolumna]+1;
                    }else if ((pixelAnterior[pfila] == pixelControl[pfila]-1) && (pixelAnterior[pcolumna] == pixelControl[pcolumna])){
                        pixelSiguiente[pfila] = pixelAnterior[pfila];
                        pixelSiguiente[pcolumna] = pixelAnterior[pcolumna]+1;
                    }else if ((pixelAnterior[pfila] == pixelControl[pfila]-1) && (pixelAnterior[pcolumna] == pixelControl[pcolumna]+1)){
                        pixelSiguiente[pfila] = pixelAnterior[pfila]+1;
                        pixelSiguiente[pcolumna] = pixelAnterior[pcolumna];
                    }else if ((pixelAnterior[pfila] == pixelControl[pfila]) && (pixelAnterior[pcolumna] == pixelControl[pcolumna]+1)){
                        pixelSiguiente[pfila] = pixelAnterior[pfila]+1;
                        pixelSiguiente[pcolumna] = pixelAnterior[pcolumna];
                    }else if ((pixelAnterior[pfila] == pixelControl[pfila]+1) && (pixelAnterior[pcolumna] == pixelControl[pcolumna]+1)){
                        pixelSiguiente[pfila] = pixelAnterior[pfila];
                        pixelSiguiente[pcolumna] = pixelAnterior[pcolumna]-1;
                        if ((pixelSiguiente[pfila] == pixelInicial[pfila]) && (pixelSiguiente[pcolumna] == pixelInicial[pcolumna])){
                            terminar = true;
                        }
                    }

                    if ((imagen.at<uchar>(pixelSiguiente[pfila], pixelSiguiente[pcolumna])) == negro){
                        imagen.at<uchar>(pixelSiguiente[pfila], pixelSiguiente[pcolumna]) = 128;
                        nueva.at<uchar>(pixelSiguiente[pfila], pixelSiguiente[pcolumna]) = blanco;

                        if (primerRecorrido == true){
                            primerRecorrido = false;
                            pixelAnterior[pfila] = pixelSiguiente[pfila];
                            pixelAnterior[pcolumna] = pixelSiguiente[pcolumna];
                        }else{
                            pixelControl[pfila] = pixelSiguiente[pfila];
                            pixelControl[pcolumna] = pixelSiguiente[pcolumna];
                        }

                        //   if ((contador % 150) == 0){
                        //          this->EscribirImagen(ruta+ to_string(contador) + extension);
                        //   }
                        //   contador++;
                    }else{
                        pixelAnterior[pfila] = pixelSiguiente[pfila];
                        pixelAnterior[pcolumna] = pixelSiguiente[pcolumna];
                    }

                    if ((pixelSiguiente[pfila] == pixelInicial[pfila]) && (pixelSiguiente[pcolumna] == pixelInicial[pcolumna])){
                        terminar = true;
                    }
                }

                


                //imagen.at<uchar>(f, c) = 128;
            }else{
                pixelAnterior[pfila] = f;
                pixelAnterior[pcolumna] = c;
            }
	    }
    }

    /*for (int f=0; f<imagen.rows; f++){
    	for (int c=0; c<imagen.cols; c++){
		    pixel=imagen.at<uchar>(f, c);
            if ((pixel != negro) && (pixel != blanco)){
                cout << pixel;
            }else{
                
            }
	    }
    }*/
    matrizImagen = nueva;
    // this->EscribirImagen(ruta+ "RESULTADO" + extension);
}


/**
 * @brief Aplica un algoritmo propio, no funciona de momento
 */
void Algoritmos::MiNombre(){
    typedef
    struct __vector
    {
        int f;
        int c;
    }vector;
    
    Mat imagen = matrizImagen;
    Mat nueva(imagen.rows, imagen.cols, CV_8UC1);

    string ruta = "./resources/resultadoMio" ;
    string extension = ".jpeg";
    int pixel;
    int blanco = 255;
    int negro = 0;
    bool primero = false;
    vector vecindario[3][3];
    //hacemos la imagen nueva negra
    for (int f=0; f<imagen.rows; f++){
        for (int c=0; c<imagen.cols; c++){
            nueva.at<uchar>(f, c) = negro;
        }
    }

    //int contador = 0;
    for (int f=1; f<imagen.cols-2; f++){
        for (int c=1; c<imagen.rows-2; c++){
		    pixel=imagen.at<uchar>(f, c);
            if (pixel == negro){
                if (primero == false){
                    primero = true;
                    imagen.at<uchar>(f, c) = 128;
                    nueva.at<uchar>(f, c) = blanco;
                }else{
                    //llenamos el vecinario
                    for (int fila = -1; fila < 2; fila ++){
                        for (int columna = -1; columna < 2; columna ++){
                            vecindario[fila+1][columna+1].f = f+fila; 
                            vecindario[fila+1][columna+1].c = c+columna;
                        }
                    }
                    //analizamos el vecindario
                    int contaVecinos = 0;
                    for (int fila = 0; fila < 3; fila ++){
                        for (int columna = 0; columna < 3; columna ++){
                            int laFila = vecindario[fila][columna].f;
                            int laColumna = vecindario[fila][columna].c;
                            if (imagen.at<uchar>(laFila, laColumna) == 128){
                                contaVecinos++;
                            }
                        }
                    }
                    if (contaVecinos == 1){
                        imagen.at<uchar>(f, c) = 128;
                        nueva.at<uchar>(f, c) = blanco;
                    }
                }
            }
	    }
    }
    matrizImagen = nueva;
    this->EscribirImagen(ruta+ "RESULTADO" + extension);
}


/**
 * @brief Metodo encargado de encontrar el punto inicial de un contorno.
 * @param imagen la matriz de la imagen
 * @StarX punto inicial en x
 * @StarY punto inicial en y
 */

int Algoritmos::StartFinder(Mat& imagen, int& StartX, int& StartY){
	int pixel;	
	for (int i=0; i<imagen.rows; i++){
	    	for (int j=0; j<imagen.cols; j++){
			pixel = imagen.at<uchar>(i, j);
			if (pixel > 245){ //Si el pixel encontrado es muy brillante, asigna los valores a x, y sale.
				StartY=i;
				StartX=j;
				return(0);
			}

	    	}
	}
    return 0;
}


/**
 * @brief Metodo para seguir un contorno con el metodo de la mariquita
 * @param imagen la matriz de la imagen
 * @StarX punto inicial en x
 * @StarY punto inicial en y
*/ 
void Algoritmos::SquareTracingAlg(Mat& imagen, int& StartX, int& StartY){
    Mat nueva(imagen.rows, imagen.cols, CV_8UC1);
	//cout<<"I am the best beast"<<endl;
	string Brujula = "Norte";
  	int pixel=imagen.at<uchar>(StartY, StartX);
	//int LastCord[]={0,0};
	int y=StartY;
	int x=StartX;
	int count=0;
	bool terminated=false;

	while (terminated==false){
		// cout<<"Posicion: "<<count<<endl;
		// cout<<"Pixel asociado: "<<pixel<<endl;
		// cout<<"Coordenada x: "<<x<<endl;
		// cout<<"Coordenada y: "<<y<<endl;
		pixel=imagen.at<uchar>(y, x);
		
		if (pixel>=250){
			nueva.at<uchar>(y, x)=255;
			//cout<<"Entrado";

			if (Brujula=="Norte"){
				x--;
				Brujula="Oeste";	
				
			}
			else if (Brujula=="Sur"){
				x++;	
				Brujula="Este";
			
			}
			else if (Brujula=="Oeste"){
				y--;
				Brujula="Sur";

			}
			else if (Brujula=="Este"){
				y++;	
				Brujula="Norte";
			}

		}
		if (pixel<250){
			//cout<<"Entre: "<<y<<endl;
			//cout<<endl;
			if (Brujula=="Norte"){
				x++;
				Brujula="Este";	

			}
			else if(Brujula=="Sur"){
				x--;	
				Brujula="Oeste";

			}
			else if(Brujula=="Oeste"){
				y++;
				Brujula="Norte";

			}
			else if(Brujula=="Este"){
				y--;	
				Brujula="Sur";
			}
		}

		if ((y==StartY)&&(x==StartX)&&(count>5)){
			terminated=true;
		}
	        count++;

	}
    matrizImagen = nueva;
    //this->EscribirImagen("./resources/resultadoSquare.jpeg");
	//imshow("Original", nueva);
	//waitKey(0);
}

/**
 * @brief Metodo para seguir un contorno con el metodo Pavlidi
 * @param imagen la matriz de la imagen
 * @StarX punto inicial en x
 * @StarY punto inicial en y
*/ 
void Algoritmos::Pavlidi(Mat& imagen, int& StartX, int& StartY){
    Mat nueva(imagen.rows, imagen.cols, CV_8UC1);
	string Brujula = "Norte";
  	int pixel=imagen.at<uchar>(StartY, StartX);
    pixel = pixel;
    //cout << "aqui" << endl;
	int p1=0;
	int p2=0;
	int p3=0;
	int y=StartY;
	int x=StartX;
	int count=0;
	bool terminated=false;

	while (terminated==false){
		// cout<<"Posicion: "<<count<<endl;
		// cout<<"Pixel asociado: "<<pixel<<endl;
		// cout<<"Coordenada x: "<<x<<endl;
		// cout<<"Coordenada y: "<<y<<endl;
		pixel=imagen.at<uchar>(y, x);
		
		if (Brujula=="Norte"){
			p1=imagen.at<uchar>(y-1, x-1);
			p2=imagen.at<uchar>(y-1, x);
			p3=imagen.at<uchar>(y-1, x+1);
			if (p1>=250){
				Brujula="Oeste";
				nueva.at<uchar>(y, x)=255;
				x=x-1;
				y=y-1;
			}
			else if (p2>=250){
				nueva.at<uchar>(y, x)=255;
				Brujula="Norte";
				y=y-1;
			}
			else if (p3>=250){
				Brujula="Norte";
				nueva.at<uchar>(y, x)=255;
				x=x+1;				
				y=y-1;
			}
			else{
				Brujula="Este";
			}			
			
		}

		else if (Brujula=="Este"){
			p1=imagen.at<uchar>(y-1, x+1);
			p2=imagen.at<uchar>(y, x+1);
			p3=imagen.at<uchar>(y+1, x+1);
			if (p1>=250){
				Brujula="Norte";
				nueva.at<uchar>(y, x)=255;
				x=x+1;
				y=y-1;
			}
			else if (p2>=250){
				Brujula="Este";
				nueva.at<uchar>(y, x)=255;	
				x=x+1;
			}
			else if (p3>=250){
				Brujula="Este";
				nueva.at<uchar>(y, x)=255;
				x=x+1;			
				y=y+1;
			}
			else{
				Brujula="Sur";
			}			
			
		}
		
		else if (Brujula=="Sur"){
			p1=imagen.at<uchar>(y+1, x+1);
			p2=imagen.at<uchar>(y+1, x);
			p3=imagen.at<uchar>(y+1, x-1);
			if (p1>=250){
				Brujula="Este";
				nueva.at<uchar>(y, x)=255;
				x=x+1;
				y=y+1;
			}
			else if (p2>=250){
				Brujula="Sur";
				nueva.at<uchar>(y, x)=255;
				y=y+1;
			}
			else if (p3>=250){
				Brujula="Sur";
				nueva.at<uchar>(y, x)=255;
				x=x-1;				
				y=y+1;
			}
			else{
				Brujula="Oeste";
			}			
			
		}

		else if (Brujula=="Oeste"){
			p1=imagen.at<uchar>(y+1, x-1);
			p2=imagen.at<uchar>(y, x-1);
			p3=imagen.at<uchar>(y-1, x-1);
			if (p1>=250){
				Brujula="Sur";
				nueva.at<uchar>(y, x)=255;
				x=x-1;
				y=y+1;
			}
			else if (p2>=250){
				Brujula="Oeste";
				nueva.at<uchar>(y, x)=255;
				x=x-1;
			}
			else if (p3>=250){
				Brujula="Oeste";
				nueva.at<uchar>(y, x)=255;
				x=x-1;			
				y=y-1;
			}
			else{
				Brujula="Norte";
			}			
			
		}

		if ((y==StartY)&&(x==StartX)&&(count>5)){
			terminated=true;
		}
	        count++;
		//imshow("Original", nueva);
		//waitKey(0);


	}
    matrizImagen = nueva;
    //this->EscribirImagen("./resources/resultadoPavlidi.jpeg");
	//imshow("Original", nueva);
	//waitKey(0);
}


/**
 * @brief Metodo que convierte las imagenes iniciales a binarias
 * @param imagen la matriz de la imagen
 * @param nueva la matriz resultado
 */

int Algoritmos::ConversorInicial(Mat& imagen, Mat& nueva){

    //imshow("Original", imagen);
    //FiltroBNegro
    for (int i=0; i<imagen.rows-1; i++){
    	for (int j=0; j<imagen.cols-1; j++){
		Vec3b pixel = imagen.at<Vec3b>(i, j);
		int B = pixel[0];
		int G = pixel[1];
		int R = pixel[2];
		int ValorTriMedio = (B + G + R)/3;
		pixel[0] = ValorTriMedio;
		pixel[1] = ValorTriMedio;
		pixel[2] = ValorTriMedio;
		//nueva.at<Vec3b>(i, j)=pixel;
        	nueva.at<uchar>(i, j)=ValorTriMedio;
    	}
    }
    return 0;
}
