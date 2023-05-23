/**
 *@file Filtros.hpp/
 */
#ifndef FILTROS_HPP
#define FILTROS_HPP

#include "./Includes.hpp"

using namespace std;
using namespace cv;

/**
 * @brief Clase que controla todos los filtros
 */
class Filtros
{
    public:
        /**
        * @brief constructor
        */
        Filtros(string imagen){
            Mat abrirImagen = imread(imagen,CV_LOAD_IMAGE_COLOR);
            matrizImagen = abrirImagen;
        } 
        /**
        * @brief constructor por defecto
        */   
        Filtros(){
        }
        /**
        * @brief destructor
        */
        ~Filtros(){
        };
        //funciones de la clase
        void FiltroGaussiano();
        void FiltroGaussianoUnCanal();
        void FiltroDesviacionEstandar();
        void DeteccionBordes();
        void DifuminadoMovimiento();
        void RuidoSalPimienta(float);
        void Erosion();
        void Dilatacion();
        void InversionColor();
        void TransformacionEscalaGrises();
        void Binario();
        void EscribirImagen(string, string, string);
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