#include <opencv2/highgui.hpp>
#include <opencv/cv.hpp>
#include<iostream>
#include<stdlib.h>
#include <chrono>
#include <random>
#include <fstream>
#include <math.h> 

using namespace std;
using namespace cv;

int main() {
    Mat imagen = imread("prueba.jpg" , CV_LOAD_IMAGE_COLOR);
    Mat nueva(imagen.rows, imagen.cols, CV_8UC3);

    //FiltroGauss
    int TriPromediosCanal[3]; //Almacena,primero, la suma de cada valor de pixel del vecindario para cada canal, en las posiciones BGR; luego, los promedios de estos valores
    Vec3b tripleta1;//Almacena, temporalmente, los valores de pixel de cada canal
    Vec3b pixel;
    Vec3b TriValoresPixel;
    float fprom=0;
    int iprom;
    int ValorEstandar = 0;
    int distancia=0;
    int valor = 1;
    cout << "primer for " << endl;
    for (int i=0; i<imagen.rows; i++){
        cout << "primer for " << endl;
	    for (int j=0; j<imagen.cols; j++){

	        for (int colorp = 0; colorp < 3; colorp++){
	    				fprom = 0;
	    				for (int x = -1; x < 2; x++){
	    					for (int rep = -1; rep<2; rep++){
	    							if (x == 0 and rep == 0){ //Este if evita el pixel central, haciendo que el programa solo se centre en los del vecindario
	    							}else{
	    								tripleta1=imagen.at<Vec3b>(i+x, j+rep);
	    								fprom += tripleta1[colorp];//Recibe un color de tripleta 1 basandose en el numero de repeticion colorp
    
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
    cout<<"Valor azul: "<<pixel[0]<<endl;
    cout<<"Valor verde: " <<pixel[1]<<endl;
    cout<<"Valor verde: " <<pixel[2]<<endl;
    //waitKey(0);
    return 1;
   
}
