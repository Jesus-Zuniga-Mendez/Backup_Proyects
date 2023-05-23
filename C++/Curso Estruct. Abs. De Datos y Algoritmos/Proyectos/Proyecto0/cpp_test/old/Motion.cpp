
#include <opencv2/highgui.hpp>
c#include <opencv/cv.hpp>
#include<iostream>
#include<stdlib.h>
#include <chrono>
#include <random>
#include <fstream>

using namespace std;
using namespace cv;

int GeneradorNumeros(int lim){
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    default_random_engine generator (seed);
    uniform_int_distribution<int> distribution(1,lim);
    int number=distribution(generator);
    return(number);
}

int main() {
 
    Mat imagen = imread("tank.jpg" , CV_LOAD_IMAGE_COLOR);
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
    for (int k=0; k<4; k++){//Aqui se puede variar el valor de 4, aumentandolo para difuminar mas la imagen
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
	imwrite("./pene.bmp", nueva);
    }
    cout<<imagen.channels();
    imshow("nueva", nueva);
    waitKey(0);
    return 1;
}

g++ Filtrom.cpp  -o output -I/usr/include/opencv -I/usr/include/opencv2 -lopencv_calib3d -lopencv_imgproc  -lopencv_core -lopencv_ml -lopencv_features2d -lopencv_objdetect -lopencv_flann -lopencv_video -lopencv_highgui -lopencv_imgcodecs

