/**
 * @file Filtros.cpp
 */


#include "../include/Includes.hpp"

using namespace std;
using namespace cv;


/**
 * @brief Funcion que escribe una imagen
 * @param imagen es la imagen original
 * @param filtro es el filtro aplocado
 * @param formato es el formato de salida
 */
void Filtros::EscribirImagen(string imagen, string filtro, string formato){
    string ruta = "./"+imagen+"."+filtro+"."+formato;
    imwrite(ruta, matrizImagen);
}



/**
 * @brief Genera un filtro gausiano para imagenes de un canal
 */
void Filtros::FiltroGaussianoUnCanal(){
    Mat imagen = matrizImagen;
    Mat nueva(imagen.rows, imagen.cols, CV_8UC1);

    //FiltroGauss
    float fprom=0;
    //int ValorEstandar = 0;
    //int distancia=0;
    //int valor = 1;

    //se estudia el vecindario y se le asigna el promedio
    for (int i=1; i<imagen.rows-1; i++){
	    for (int j=1; j<imagen.cols-1; j++){
	    	fprom = 0;
	    	for (int x = -1; x < 2; x++){
	    		for (int y = -1; y<2; y++){
	    			if ((x == 0) && (y == 0)){ //Este if evita el pixel central, haciendo
                            //que el programa solo se centre en los del vecindario
	    			}else{
	    				fprom=fprom + imagen.at<uchar>(i+x, j+y);
	    			}
	    		}
	    	}
	    	fprom = fprom/8;
	    	nueva.at<uchar>(i, j) = fprom;
	    }
    }

    //imshow("nueva", nueva);
    //std::cout<<"Valor azul: "<<pixel[0]<<endl;
    //std::cout<<"Valor verde: " <<pixel[1]<<endl;
    //std::cout<<"Valor verde: " <<pixel[2]<<endl;
    //waitKey(0);
    matrizImagen = nueva;
}


/**
 * @brief Genera un filtro gausiano
 */
void Filtros::FiltroGaussiano(){
    Mat imagen = matrizImagen;
    Mat nueva(imagen.rows, imagen.cols, CV_8UC3);

    //FiltroGauss
    int TriPromediosCanal[3]; //Almacena,primero, la suma de cada valor de pixel del
    //vecindario para cada canal, en las posiciones BGR; luego, los promedios de estos
    //valores
    Vec3b tripleta1;//Almacena, temporalmente, los valores de pixel de cada canal
    Vec3b pixel;
    Vec3b TriValoresPixel;
    float fprom=0;
    int iprom;
    //int ValorEstandar = 0;
    //int distancia=0;
    //int valor = 1;

    //se estudia el vecindario y se le asigna el promedio
    for (int i=1; i<imagen.rows-1; i++){
	    for (int j=1; j<imagen.cols-1; j++){
	        for (int colorp = 0; colorp < 3; colorp++){
	    				fprom = 0;
	    				for (int x = -1; x < 2; x++){
	    					for (int rep = -1; rep<2; rep++){
	    							if (x == 0 and rep == 0){ //Este if evita el pixel central,
                                        //haciendo que el programa solo se
                                        //centre en los del vecindario
	    							}else{
	    								tripleta1=imagen.at<Vec3b>(i+x, j+rep);
	    								fprom += tripleta1[colorp];
                    //Recibe un color de tripleta 1 basandose
                    //en el numero de repeticion colorp

	    							}
	    					}
	    				}
	    				iprom = int(fprom/8);
	    				TriPromediosCanal[colorp]=iprom;
         	    				pixel[colorp]=TriPromediosCanal[colorp];
	        }
	    nueva.at<Vec3b>(i, j)=pixel;
	    }
    }

    //imshow("nueva", nueva);
    //std::cout<<"Valor azul: "<<pixel[0]<<endl;
    //std::cout<<"Valor verde: " <<pixel[1]<<endl;
    //std::cout<<"Valor verde: " <<pixel[2]<<endl;
    //waitKey(0);
    matrizImagen = nueva;
}

/**
 * @brief Funcion que realiza el filtro de desviavion estandar
 */
void Filtros::FiltroDesviacionEstandar(){
    Mat imagen = matrizImagen;
    Mat nueva(imagen.rows, imagen.cols, CV_8UC3);

    //FiltroGaussiano
    int TriPromediosCanal[3]; //Almacena,primero, la suma de cada valor de pixel del
                    //vecindario para cada canal, en las posiciones BGR; luego,
                    //los promedios de estos valores
    Vec3b tripleta1;//Almacena, temporalmente, los valores de pixel de cada canal
    Vec3b pixel;
    Vec3b TriValoresPixel;
    float fprom=0;
    int iprom;
    //int ValorEstandar = 0;
    int distancia=0;
    //int valor = 1;


    //cacula la desviacion estandar en el vecindario y la asigna al pixel
    for (int i=1; i<imagen.rows-1; i++){
	    for (int j=2; j<imagen.cols-1; j++){

	        for (int colorp = 0; colorp < 3; colorp++){
	    				fprom = 0;
	    				distancia = 0;
	    				for (int x = -1; x < 2; x++){
	    					for (int rep = -1; rep<2; rep++){
	    							if (x == 0 and rep == 0){ //Este if evita el pixel central,
                                                //haciendo que el programa solo se
                                                //centre en los del vecindario
	    							}else{
	    								tripleta1=imagen.at<Vec3b>(i+x, j+rep);
	    								fprom += tripleta1[colorp];//Recibe un color de tripleta 1
                                    //basandose en el numero de repeticion colorp

	    							}
	    					}
	    				}
	    				iprom = int(fprom/8);
	    				TriPromediosCanal[colorp]=iprom;
	    				for (int x = -1; x < 2; x++){
	    					for (int rep = -1; rep<2; rep++){
	    							if (x == 0 and rep == 0){ //Este if evita el pixel central,
                                                //haciendo que el programa solo se centre
                                                //en los del vecindario
	    							}else{
	    								tripleta1=imagen.at<Vec3b>(i+x, j+rep);
	    								distancia+=pow(tripleta1[colorp]-TriPromediosCanal[colorp],2);

	    							}
	    					}
	    				}

                                //int raiz =
         	    				pixel[colorp]= sqrt(distancia/3);


	        }

	        nueva.at<Vec3b>(i, j)=pixel;
	    }
    }

    //imshow("nueva", nueva);
    //waitKey(0);
    matrizImagen=nueva;
}

/**
 * @brief Genera un filtro negativo
 */
void Filtros::InversionColor(){
    Mat imagen = matrizImagen;
    Mat nueva(imagen.rows, imagen.cols, CV_8UC3);
    Vec3b pixel;
    int PixelTemporal;
    for (int i=0; i<imagen.rows; i++){
    	for (int j=0; j<imagen.cols; j++){
		pixel=imagen.at<Vec3b>(i, j);
		for (int k=0; k<3; k++){
			PixelTemporal=pixel[k];
			pixel[k]=255-PixelTemporal;
		}
		nueva.at<Vec3b>(i, j)=pixel;
	}
    }
    //cout<<imagen.channels();
    //imshow("nueva", nueva);
    //waitKey(0);
    matrizImagen=nueva;
}

/**
 * @brief Genera un filtro en escala de grises
 */
void Filtros::TransformacionEscalaGrises(){
    Mat imagen = matrizImagen;
    Mat nueva(imagen.rows, imagen.cols, CV_8UC1);
    //imshow("Original", imagen);
    //FiltroBNegro
    for (int i=0; i<imagen.rows; i++){
    	for (int j=0; j<imagen.cols; j++){
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
    //imshow("nueva", nueva);
    //waitKey(0);
    matrizImagen = nueva;
}

/**
 * @brief Filtro de movimiento
 */
void Filtros::DifuminadoMovimiento(){
    Mat imagen = matrizImagen;
    Mat nueva(imagen.rows, imagen.cols, CV_8UC3);
    //imshow("Original", imagen);


    //FiltroMovimiento
    Vec3b pixel;
    Vec3b tripleta1;
    Vec3b tripleta2;
    Vec3b tripleta3;
    int promedio_rojo;
    int promedio_verde;
    int promedio_azul;
    for (int k=0; k<4; k++){//Aqui se puede variar el valor de 4, aumentandolo para
                            //difuminar mas la imagen
    	for (int i=0; i<imagen.rows; i++){
		for (int j=0; j<imagen.cols; j++){
			pixel=imagen.at<Vec3b>(i, j);
			if (j!=0 && j!=imagen.cols){
				tripleta1=imagen.at<Vec3b>(i, j-1);
				tripleta2=imagen.at<Vec3b>(i, j);
				tripleta3=imagen.at<Vec3b>(i, j+1);
				promedio_azul=((tripleta1[0])+(tripleta2[0])+(tripleta3[0]))/3;
				promedio_verde=((tripleta1[1])+(tripleta2[1])+(tripleta3[1]))/3;
				promedio_rojo=((tripleta1[2])+(tripleta2[2])+(tripleta3[2]))/3;
				pixel[0]=promedio_azul;
				pixel[1]=promedio_verde;
				pixel[2]=promedio_rojo;
			}
			nueva.at<Vec3b>(i, j)=pixel;

		}
	}
	imagen=nueva;
    }
    //cout<<imagen.channels();
    //imshow("nueva", nueva);
    //waitKey(0);
    matrizImagen = nueva;
}

/**
 * @brief genera un numero aleatorio con distribucion uniforme
 * @param tope es el numero mayor que se va a generar
 */
int numeroRandom(int tope){
    //codigo tomado de https://es.stackoverflow.com/questions/148661/por-qu%
    //C3%A9-el-n%C3%BAmero-que-me-genera-el-rand-siempre-es-el-mismo
    // Tenemos control sobre el algoritmo y distribución a usar.
    random_device device;
    // Se usa el algoritmo Mersenne twister
    // https://es.wikipedia.org/wiki/Mersenne_twister
    mt19937 generador(device());
    // Escogemos una distribucion uniforme entre 0 y 100
    uniform_int_distribution<> distribucion(0, tope);
    /* Generamos un número pseudo-aleatorio con el algoritmo
    mt19937 distribuido uniformemente entre 0 y 100 */
    int a = distribucion(generador);
    return a;
}


/**
 * @brief Creal el filtro sal y pimienta
 * @param porciento es el porcentaje de aleatoriedad del filtro
 */
void Filtros::RuidoSalPimienta(float porciento){
    Mat imagen = matrizImagen;
    Vec3b pixel;
    Vec3b blanco = {255,255,255};
    Vec3b negro = {0,0,0};
    float porcentaje = porciento;
    float pTotales = imagen.rows * imagen.cols;
    float pFrecuencia = pTotales * (porcentaje/10000);
    int contador = 0;
    int frecuencia = round(pFrecuencia);
    for (int i=0; i<imagen.rows; i++){
    	for (int j=0; j<imagen.cols; j++){
            contador++;
		    if ((contador % frecuencia)== 0){
                int nRandom = numeroRandom(5);
                if (nRandom == 0){
                    imagen.at<Vec3b>(i,j) = blanco;
                }else if(nRandom == 1){
                    imagen.at<Vec3b>(i,j) = negro;
                }
            }
	    }
    }
    //cout<<imagen.channels();
    //imshow("nueva", nueva);
    //waitKey(0);
    matrizImagen=imagen;
}



/**
 * @brief Crea el filtro de imagen binaria
 */
void Filtros::Binario(){
    Mat imagen = matrizImagen;
    Mat nueva(imagen.rows, imagen.cols, CV_8UC3);
    Vec3b pixel;
    Vec3b blanco = {255,255,255};
    Vec3b negro = {0,0,0};
    for (int i=0; i<imagen.rows; i++){
    	for (int j=0; j<imagen.cols; j++){
		pixel=imagen.at<Vec3b>(i, j);
        double gris = pixel[0]*0.3 + pixel[1]*0.59+pixel[2]*0.11;
            if (gris >127){
                nueva.at<Vec3b>(i, j)=blanco;
            }else{
                nueva.at<Vec3b>(i, j)=negro;
            }
	    }
    }
    matrizImagen = nueva;
}



/**
 * @brief Crea el filtro de erosion
 */
void Filtros::Erosion(){
    Mat imagen = matrizImagen;
    Mat nueva(imagen.rows, imagen.cols, CV_8UC3);
    Vec3b pixel;
    Vec3b blanco = {255,255,255};
    Vec3b negro = {0,0,0};
    /*for (int i=0; i<imagen.rows; i++){
    	for (int j=0; j<imagen.cols; j++){
		pixel=imagen.at<Vec3b>(i, j);
        double gris = pixel[0]*0.3 + pixel[1]*0.59+pixel[2]*0.11;
            if (gris >127){
                nueva.at<Vec3b>(i, j)=blanco;
            }else{
                nueva.at<Vec3b>(i, j)=negro;
            }
	    }
    }*/

    //elemento estructurante
    int tamanio = 3;
    Vec3b estructurante[tamanio][tamanio];
    for (int i = 0;i<tamanio;i++){
        for(int j=0;j<tamanio;j++){
            estructurante[i][j] = blanco;
        }
    }
    //recorremos la imagen binaria
    //se estudia el vecindario y se cumple con el elemento estructurante
    //se cambia el pixel
    for (int i=1; i<imagen.rows-1; i++){
    	for (int j=1; j<imagen.cols-1; j++){
            Vec3b vecindario[tamanio][tamanio];
            int cof=0;
            for (int fv = (i-1);fv<(i-1)+tamanio;fv++){
                int coc=0;
                for(int cv=(j-1);cv<(j-1)+tamanio;cv++){
                    vecindario[cof][coc] = imagen.at<Vec3b>(fv, cv);
                    coc++;
                }
                cof++;
            }
            int pasa = 1;
            for (int f=0;f < tamanio;f++){
                for (int c = 0; c < tamanio;c++){
                    if (estructurante[f][c] != vecindario[f][c]){
                        pasa=0;
                    }
                }
            }
            if (pasa == 0){
                nueva.at<Vec3b>(i, j) = negro;
            }else{
                nueva.at<Vec3b>(i, j) = blanco;
            }
	    }
    }


    //cout<<imagen.channels();
    //imshow("nueva", nueva);
    //waitKey(0);
    matrizImagen=nueva;

}


/**
 * brief Crea el filtro de dilatacion
 *
void Filtros::Dilatacion(){
    Mat imagen = matrizImagen;
    Mat nueva(imagen.rows, imagen.cols, CV_8UC3);
    Vec3b pixel;
    Vec3b blanco = {255,255,255};
    Vec3b negro = {0,0,0};
    for (int i=0; i<imagen.rows; i++){
    	for (int j=0; j<imagen.cols; j++){
		pixel=imagen.at<Vec3b>(i, j);
        double gris = pixel[0]*0.3 + pixel[1]*0.59+pixel[2]*0.11;
            if (gris >127){
                nueva.at<Vec3b>(i, j)=blanco;
            }else{
                nueva.at<Vec3b>(i, j)=negro;
            }
	    }
    }*/

    //elemento estructurante
    /*int tamanio = 3;
    Vec3b estructurante[tamanio][tamanio];
    for (int i = 0;i<tamanio;i++){
        for(int j=0;j<tamanio;j++){
            estructurante[i][j] = negro;
        }
    }*//*
    int promedio  = 0;
    Vec3b pixelActual;
    //recorremos la imagen binaria
    for (int i=1; i<imagen.rows-1; i++){
    	for (int j=1; j<imagen.cols-1; j++){
            pixelActual = imagen.at<Vec3b>(i,j);
            promedio = (imagen.at<Vec3b>(i, j)[0]
            //elemento estructurante
            int tamanio = 3;
            Vec3b estructurante[tamanio];
            for (int i = 0;i<tamanio;i++){
                for(int j=0;j<tamanio;j++){
                    estructurante[i][j] = promedio;
                    cout << (int)estructurante[i][j] << "  ";
                }
                cout << endl;
            }
            Vec3b vecindario[tamanio];
            cout << endl;
            cout << endl;
            cout << endl;
            int cof=0;
            for (int fv = (i-1);fv<(i-1)+tamanio;fv++){
                int coc=0;
                for(int cv=(j-1);cv<(j-1)+tamanio;cv++){
                    vecindario[cof][coc] = (imagen.at<V
                    coc++;

                }
                cof++;
                cout << endl;

            }

            cout << endl;
            cout << endl;
            cout << endl;
            if ((i>=(imagen.rows)/2) && (j>=(imagen.cols/2))){
            //    system("sleep 4");
            }
            int pasa = 1;
            for (int f=0;f < tamanio;f++){
                for (int c = 0; c < tamanio;c++){
                    if (estructurante[f][c] != vecindario[f][c]){
                        pasa=0;
                    }
                }
            }
            if (pasa == 0){
                nueva.at<Vec3b>(i, j) = pixelActual;
            }else{
                promedio = 0;
                for (int i = 0; i< tamanio ; i++){
                    for (int j = 0; j < tamanio; j++){
                        promedio = promedio + vecindario[i][j];
                    }
                }
                promedio = promedio /9;
                pixelActual[0] = promedio;
                pixelActual[1] = promedio;
                pixelActual[2] = promedio;
                nueva.at<Vec3b>(i, j) = pixelActual;
            }
	    }
    }


    //cout<<imagen.channels();
    //imshow("nueva", nueva);
    //waitKey(0);
    matrizImagen=nueva;

}
*/






/**
 * @brief Crea el filtro de dilatacion
 */
void Filtros::Dilatacion(){
    Mat imagen = matrizImagen;
    Mat nueva(imagen.rows, imagen.cols, CV_8UC3);
    Vec3b pixel;
    Vec3b blanco = {255,255,255};
    Vec3b negro = {0,0,0};
    /*for (int i=0; i<imagen.rows; i++){
    	for (int j=0; j<imagen.cols; j++){
		pixel=imagen.at<Vec3b>(i, j);
        double gris = pixel[0]*0.3 + pixel[1]*0.59+pixel[2]*0.11;
            if (gris >127){
                nueva.at<Vec3b>(i, j)=blanco;
            }else{
                nueva.at<Vec3b>(i, j)=negro;
            }
	    }
    }*/

    //elemento estructurante
    int tamanio = 3;
    Vec3b estructurante[tamanio][tamanio];
    for (int i = 0;i<tamanio;i++){
        for(int j=0;j<tamanio;j++){
            estructurante[i][j] = negro;
        }
    }
    //recorremos la imagen binaria
    //se estudia el vecindario y se cumple con el elemento estructurante
    //se cambia el pixel
    for (int i=1; i<imagen.rows-1; i++){
    	for (int j=1; j<imagen.cols-1; j++){
            Vec3b vecindario[tamanio][tamanio];
            int cof=0;
            for (int fv = (i-1);fv<(i-1)+tamanio;fv++){
                int coc=0;
                for(int cv=(j-1);cv<(j-1)+tamanio;cv++){
                    vecindario[cof][coc] = pixel=imagen.at<Vec3b>(fv, cv);;
                    coc++;
                }
                cof++;
            }
            int pasa = 1;
            for (int f=0;f < tamanio;f++){
                for (int c = 0; c < tamanio;c++){
                    if (estructurante[f][c] != vecindario[f][c]){
                        pasa=0;
                    }
                }
            }
            if (pasa == 0){
                nueva.at<Vec3b>(i, j) = blanco;
            }else{
                nueva.at<Vec3b>(i, j) = negro;
            }
	    }
    }


    //cout<<imagen.channels();
    //imshow("nueva", nueva);
    //waitKey(0);
    matrizImagen=nueva;

}

/**
 * @brief calcula los bordes de una imagen
 */
void Filtros::DeteccionBordes(){
    Mat imagen = matrizImagen;
    Mat direccionX(imagen.rows, imagen.cols, CV_8UC1);
    Mat direccionY(imagen.rows, imagen.cols, CV_8UC1);
    Mat resultado(imagen.rows, imagen.cols, CV_8UC1);
    Mat temporal(imagen.rows, imagen.cols, CV_8UC1);
    float angulos[imagen.rows][imagen.cols];
    int Gx[3][3] = {{-1, 0 ,1},
                    {-2, 0 ,2},
                    {-1, 0 ,1 }};
    int Gy[3][3] = {{-1, -2 ,-1},
                    { 0,  0 , 0},
                    { 1,  2 , 1}};
    //calculamos el gradiente
    int pixel;
    for (int i=1; i<imagen.rows-1; i++){
    	for (int j=1; j<imagen.cols-1; j++){
            int calculoX = 0;
            int calculoY = 0;
	    	for (int x = -1; x < 2; x++){
	    		for (int y = -1; y<2; y++){
                    pixel=imagen.at<uchar>(i+x, j+y);
	    			if ((x == 0) && (y == 0)){
	    			}else{
	    				calculoX = calculoX + (Gx[x+1][y+1] * pixel);
                        calculoY = calculoY + (Gy[x+1][y+1] * pixel);
	    			}
	    		}
	    	}
            direccionX.at<uchar>(i, j) = calculoX/8;
            direccionY.at<uchar>(i, j) = calculoY/8;

	    }
    }
    //calculamos la raiz cuadrada de las potencias
    int raiz = 0;
    for (int i=1; i<imagen.rows-1; i++){
    	for (int j=1; j<imagen.cols-1; j++){
            raiz = sqrt( pow(direccionX.at<uchar>(i, j),2)+ pow(direccionY.at<uchar>(i, j),2));
            resultado.at<uchar>(i, j) = raiz;
        }
    }

    //calculamos el angulo de la gradiente
    double angulo = 0;
    for (int i=1; i<imagen.rows-1; i++){
    	for (int j=1; j<imagen.cols-1; j++){
            int x = direccionX.at<uchar>(i, j);
            int y = direccionY.at<uchar>(i, j);
            if (x != 0){
                angulo = (atan ( y/ x)  * 180 )/ M_PI;
                if ((angulo >= 0) && (angulo <=22)){
                    angulo = 0;
                }else if ((angulo > 22) && (angulo <=67)){
                    angulo = 45;
                }
                else if ((angulo > 67) && (angulo <=112)){
                    angulo = 90;
                }else if ((angulo > 112) && (angulo <=157)){
                    angulo = 135;
                }else if ((angulo > 127) && (angulo <=180)){
                    angulo = 0;
                }
            }
            angulos[i][j] = angulo;
        }
    }

    //estudiamos el vecinadario en direccion al angulo
    int pixelCentral;
    int pixelVecino;
    int direccion0[3][3]={{0,0,0},{1,1,1},{0,0,0}};
    int direccion45[3][3]={{0,0,1},{0,1,0},{1,0,0}};
    int direccion90[3][3]={{0,1,0},{0,1,0},{0,1,0}};
    int direccion135[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    for (int i=1; i<resultado.rows-1; i++){
    	for (int j=1; j<resultado.cols-1; j++){
            pixelCentral = resultado.at<uchar>(i, j);
            int pasa = 1;
	    	for (int x = -1; x < 2; x++){
	    		for (int y = -1; y<2; y++){
                    if (angulos[i][j] == 90){
                        pixelVecino=resultado.at<uchar>(i+x, j+y)*direccion0[x+1][y+1];
                    }else if (angulos[i][j] == 135){
                        pixelVecino=resultado.at<uchar>(i+x, j+y)*direccion45[x+1][y+1];
                    }else if (angulos[i][j] == 0){
                        pixelVecino=resultado.at<uchar>(i+x, j+y)*direccion90[x+1][y+1];
                    }else if (angulos[i][j] == 45){
                        pixelVecino=resultado.at<uchar>(i+x, j+y)*direccion135[x+1][y+1];
                    }else{
                        pixelVecino = 0;
                    }
                    if (pixelVecino > pixelCentral){
                        pasa = 0;
                    }
	    		}
	    	}
            if (pasa == 0){
                temporal.at<uchar>(i, j) = 0;
            }else{
                temporal.at<uchar>(i, j) = pixelCentral;
            }
	    }
    }

    resultado = temporal;
    //llenamos el borde de negro
    for (int i=0;i<resultado.rows; i++){
        for (int j=0;j<resultado.cols; j++){
            if (i < 2){
                resultado.at<uchar>(i, j) = 0;
            }
            if (j < 2){
                resultado.at<uchar>(i, j) = 0;
            }
            if (i > (resultado.rows -2)){
                resultado.at<uchar>(i, j) = 0;
            }
            if (j > (resultado.cols -2)){
                resultado.at<uchar>(i, j) = 0;
            }
        }
    }
    matrizImagen = resultado;

    //imshow("nueva", nueva);
    //std::cout<<"Valor azul: "<<pixel[0]<<endl;
    //std::cout<<"Valor verde: " <<pixel[1]<<endl;
    //std::cout<<"Valor verde: " <<pixel[2]<<endl;
    //waitKey(0);


}
