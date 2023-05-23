#include <opencv2/highgui.hpp>
#include<iostream>
#include<stdlib.h>
#include <chrono>
#include <random>
#include <fstream>

using namespace std;
using namespace cv;

int GeneradorNumeros(){
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    default_random_engine generator (seed);
    uniform_int_distribution<int> distribution(1,14);
    int number=distribution(generator);
    return(number);
}

int main() {
 
    Mat imagen = imread("tank.jpg" , CV_LOAD_IMAGE_COLOR);
    Mat nueva(imagen.rows, imagen.cols, CV_8UC1);
    //imshow("Original", imagen);
    //FiltroBNegro
    for (int i=0; i<imagen.rows; i++){
    	for (int j=0; j<imagen.cols; j++){
		Vec3b pixel = imagen.at<Vec3b>(i, j);
		uchar B = pixel[0];
		uchar G = pixel[1];
		uchar R = pixel[2];
		int ValorTriMedio = (B + G + R)/3;
		nueva.at<uchar>(i, j)=ValorTriMedio;
	}
    }
    imshow("nueva", nueva);
    waitKey(0);
    return 1;
}
