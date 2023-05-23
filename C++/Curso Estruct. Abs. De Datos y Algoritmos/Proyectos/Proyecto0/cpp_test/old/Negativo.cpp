#include <opencv2/highgui.hpp>
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


    //FiltroNegativo
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
    cout<<imagen.channels();
    imshow("nueva", nueva);
    waitKey(0);
    return 1;
}
