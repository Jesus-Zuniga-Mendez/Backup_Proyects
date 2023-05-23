/**
 *@file Filtros.hpp/
 */
#ifndef FILTROS_HPP
#define FILTROS_HPP

#include "./Includes.h"

using namespace std;
using namespace cv;

/**
 * @brief Clase que controla todos los filtros
 */
class Algoritmos
{
    public:
        /**
        * @brief constructor
        */
        Algoritmos(string imagen){
            Mat abrirImagen = imread(imagen,CV_LOAD_IMAGE_GRAYSCALE);
            matrizImagen = abrirImagen;
        } 
        /**
        * @brief constructor por defecto
        */   
        Algoritmos(){
        }
        /**
        * @brief destructor
        */
        ~Algoritmos(){
        };
        //funciones de la clase
        /*void Binario();
        void ConversorInicial();
        void ConversorInicialO();
        string ConvertirABinario(string);*/
        void EscribirImagen(string);
        void ABinarioInverso();
        void ABinario();
        void Moore();
        void Radial();
        void MiNombre();
        void LlenarGrises();
        int contarPixeles();
        void Colorear(string , string);


        int StartFinder(Mat& imagen, int& StartX, int& StartY);
        void SquareTracingAlg(Mat& imagen, int& StartX, int& StartY);
        void Pavlidi(Mat& imagen, int& StartX, int& StartY);
        int ConversorInicial(Mat& imagen, Mat& nueva);


        Mat matrizImagen;


/*
(FG) Filtro gaussiano.
(FSTD) Filtro de desviación estándar.
(ED) Detección de bordes (edge detection).
(MB) Difuminado de movimiento (motion blur).
(S&P) Ruido sal y pimienta
(E) Erosión
(D) Diltación
(I) Inversión de color
(G) Transformación de escala de grises.
*/
};

#endif