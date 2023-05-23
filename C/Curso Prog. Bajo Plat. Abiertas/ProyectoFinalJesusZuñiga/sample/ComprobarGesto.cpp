/**
 * @file ComprobarGesto.cpp
 * @author Jesus Zuñiga Mendez
 * @brief Archivo que permite comprobar cada frame del leap con el guardo en la base de datos, se toma como base el ejemplo dado en el sdk y se le realizan modificaciones
 * @version 1.0
 * @date 18 de julio de 2019
 * @copyright Copyleft (l) 2019
 */
/******************************************************************************\
* Copyright (C) 2012-2014 Leap Motion, Inc. All rights reserved.               *
* Leap Motion proprietary and confidential. Not for distribution.              *
* Use subject to the terms of the Leap Motion SDK Agreement available at       *
* https://developer.leapmotion.com/sdk_agreement, or another agreement         *
* between Leap Motion and you, your company or other organization.             *
\******************************************************************************/

#include <iostream>
#include <cstring>
#include "./include/Leap.h"
#include <fstream>

using namespace Leap;

#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_RED     "\x1b[31m"


/*@brief Funciones que devuelve el valor de x de la linea string
 *@param dato es la linea que se analiza
 *@return devuelve el valor de x
 */
double devolverX(std::string dato){
    int contadorParentesis=0;
    int contadorComas=0;
    char caracter;
    double numero=0;
    std::string resultado = "";
    for (unsigned int i = 0; i < dato.size();i++){
        caracter = dato[i];
        if (caracter == '('){
            contadorParentesis++;
        }
        if (caracter == ','){
            contadorComas++;
        }
        if ((contadorParentesis == 1) && (contadorComas == 0) && (i != 0)){
            resultado = resultado + caracter;
        }
    }
    numero = atof(resultado.c_str());
    return numero;

}
/*@brief Funciones que devuelve el valor de y de la linea string
 *@param dato es la linea que se analiza
 *@return devuelve el valor de y
 */
double devolverY(std::string dato){
    int contadorParentesis=0;
    int contadorComas=0;
    char caracter;
    double numero=0;
    std::string resultado = "";
    unsigned int posicionComa = 0;
    for (unsigned int i = 0; i < dato.size();i++){
        caracter = dato[i];
        if (caracter == '('){
            contadorParentesis++;
        }
        if (caracter == ','){
            posicionComa = i;
            contadorComas++;
        }
        if ((contadorParentesis == 1) && (contadorComas == 1) && (i != posicionComa)){
            resultado = resultado + caracter;
        }
    }
    numero = atof(resultado.c_str());
    return numero;

}
/*@brief Funciones que devuelve el valor de z de la linea string
 *@param dato es la linea que se analiza
 *@return devuelve el valor de z
 */
double devolverZ(std::string dato){
    int contadorParentesis=0;
    int contadorComas=0;
    char caracter;
    float numero=0;
    std::string resultado = "";
    unsigned int posicionComa = 0;
    for (unsigned int i = 0; i < dato.size();i++){
        caracter = dato[i];
        if (caracter == '('){
            contadorParentesis++;
        }
        if (caracter == ')'){
            contadorParentesis++;
        }
        if (caracter == ','){
            posicionComa = i;
            contadorComas++;
        }
        if ((contadorParentesis == 1) && (contadorComas == 2) && (i != posicionComa)){
            resultado = resultado + caracter;
        }
    }
    numero = atof(resultado.c_str());
    return numero;

}


/*@brief Funciones que cuenta las lineas de un archivo
 *@param ruta es la direccion del arcivo
 *@return devuelve el numero de lineas
 */
int ContarLineas(std::string ruta){
    std::ifstream archivo;
    std::string linea;
    int contador = 0;
    archivo.open(ruta.c_str(),std::ios::in); //abriendo archivo modo lectura

    if (archivo.fail()){
        std::cout << "No se pudo abrir el archivo "  << ruta << " contarLineas " << std::endl;
        exit(1);
    }

    while (!archivo.eof()){
      std::getline(archivo,linea);
      if (strcmp(linea.c_str(),"")!= 0){
        contador++;
      }
    }

    archivo.close();
    return contador;
}


/*
 *@brief esta funcion devuelve la primera linea de un archivo
 *@param ruta es la direccion del arcivo
 *@return devuelve la primera linea
 */
std::string DevolverPrimeraLinea(std::string ruta){
  std::string linea;
  std::ifstream Archivo;
  Archivo.open(ruta.c_str(),std::ios::in); //abriendo archivo modo lectura
  if (Archivo.fail()){
      std::cout << "No se pudo abrir el archivo" << ruta << std::endl;
      exit(1);
  }
  std::getline(Archivo, linea);
  Archivo.close();
  return linea;
}
/*
 *@brief esta funcion devuelve la linea desea por el usuario
 *@param ruta es la direccion del arcivo
 *@param numeroLinea es la linea deseada
 *@return devuelve la linea correspondiente
 */
std::string DevolverQuieroLinea(std::string ruta, int numeroLinea){
  std::string linea;
  std::string devolver;
  int contador = 0;
  std::ifstream Archivo;
  Archivo.open(ruta.c_str(),std::ios::in); //abriendo archivo modo lectura
  if (Archivo.fail()){
      std::cout << "No se pudo abrir el archivo" << ruta << std::endl;
      exit(1);
  }
  while (!Archivo.eof()){
    std::getline(Archivo,linea);
    contador++;
    if (contador==numeroLinea){
      devolver = linea;
    }
  }
  Archivo.close();
  return devolver;
}



/*
 *@brief Funcion que devuelve el porcentaje de error de dos datos
 *@param Teorico es el dato exacto
 *@param Experimental es el dato medido
 *@return devuielve el porcentaje de error
 */
double CalcularPorcentaje(double Teorico, double Experimental){
  double porcentaje = 0;
  double absoluto = Experimental - Teorico;
  if (absoluto < 0){
    absoluto = absoluto * -1.0;
  }
  if (Teorico < 0 ){
    Teorico = Teorico * -1.0;
  }
  if (Teorico != 0){
    porcentaje = (absoluto/Teorico) * 100 ;
  }

  return porcentaje;
}

/*
 *@brief Funcion que devuelve el promedio del porcentaje de error de las coordenadas de un vector
 *@param vectorTeorico es el dato exacto
 *@param vectorExperimental es el dato medido
 *@return devuielve el porcentaje de error
 */
double PorcentajeError(std::string vectorTeorico, std::string vectorExperimental){
  double porcentajeFinal = 0;
  double porcentajeX = 0;
  double porcentajeY = 0;
  double porcentajeZ= 0;
  double xTeorico = 0;
  double xExperimental = 0;
  double yTeorico = 0;
  double yExperimental = 0;
  double zTeorico = 0;
  double zExperimental = 0;
  xTeorico = devolverX(vectorTeorico);
  yTeorico = devolverY(vectorTeorico);
  zTeorico = devolverZ(vectorTeorico);
  xExperimental = devolverX(vectorExperimental);
  yExperimental = devolverY(vectorExperimental);
  zExperimental = devolverZ(vectorExperimental);
  porcentajeX = CalcularPorcentaje(xTeorico,xExperimental);
  porcentajeY = CalcularPorcentaje(yTeorico,yExperimental);
  porcentajeZ = CalcularPorcentaje(zTeorico,zExperimental);
  std::cout << "PX " << porcentajeX << "PY " << porcentajeY << "PZ " << porcentajeZ << std::endl;
  porcentajeFinal = porcentajeX + porcentajeY + porcentajeZ;
  porcentajeFinal = porcentajeFinal / 3;
  return porcentajeFinal;
}

/*
 *@brief Funcion que devuelve la diferencia entre dos vectores
 *@param vectorTeorico es el dato guardado en el gesto
 *@param vectorExperimental es el dato medido por el leap
 *@return devuielve el valor absoluto de la diferencia
 */
std::string CompararVectores(std::string vectorTeorico, std::string vectorExperimental){
  std::string vectorResultado;
  double resultadoX = 0;
  double resultadoY = 0;
  double resultadoZ= 0;
  double xTeorico = 0;
  double xExperimental = 0;
  double yTeorico = 0;
  double yExperimental = 0;
  double zTeorico = 0;
  double zExperimental = 0;
  xTeorico = devolverX(vectorTeorico);
  yTeorico = devolverY(vectorTeorico);
  zTeorico = devolverZ(vectorTeorico);
  xExperimental = devolverX(vectorExperimental);
  yExperimental = devolverY(vectorExperimental);
  zExperimental = devolverZ(vectorExperimental);
  resultadoX = xTeorico - xExperimental;
  resultadoY = yTeorico - yExperimental;
  resultadoZ = zTeorico - zExperimental;
  if (resultadoX < 0){
    resultadoX = resultadoX * -1.0;
  }
  if (resultadoY < 0){
    resultadoY = resultadoY * -1.0;
  }
  if (resultadoZ < 0){
    resultadoZ = resultadoZ * -1.0;
  }
  vectorResultado = "("+std::to_string(resultadoX)+", "+std::to_string(resultadoY)+", "+std::to_string(resultadoZ)+")";
  return vectorResultado;
}





/*
 *@brief esta funcion se encarga de comparar el gesto de cada frame con la base de datos de gestos
 *@return devuelve el gesto encontrado
 */
std::string ComprobarActual(){
  std::string gestoRespuesta = "";
  std::string linea;
  //llenamos la variable con numero de manos del frame actual
  int manos = 0;
  std::ifstream Manos;
  std::string ruta= "./resources/temp/CtdManos";
  Manos.open(ruta.c_str(),std::ios::in); //abriendo archivo modo lectura
  if (Manos.fail()){
      std::cout << "No se pudo abrir el archivo CtdManos " << std::endl;
      exit(1);
  }
  std::getline(Manos, linea);
  manos = atoi(linea.c_str());
  Manos.close();
  //terminamos de llenar manos del frame actual
//  std::cout << "las manos del frame son " << manos << std::endl;
  //----------------------------------------------------------------------------------------
  //llenamos la variable con numero de dedos del frame actual
  int dedos = 0;
  std::ifstream Dedos;
  ruta= "./resources/temp/CtdDedos";
  Dedos.open(ruta.c_str(),std::ios::in); //abriendo archivo modo lectura
  if (Dedos.fail()){
      std::cout << "No se pudo abrir el archivo CtdDedos " << std::endl;
      exit(1);
  }
  std::getline(Dedos, linea);
  dedos = atoi(linea.c_str());
  Dedos.close();
  //terminamos de llenar dedos del frame actual
//  std::cout << "los dedos del frame son " << dedos << std::endl;
  //-----------------------------------------------------------------------------------------
  //vamos a abrir todos los archivos de gestos guardados para comprobar cuales tienen la misma 
  //cantidad de manos y la misma cantidad de dedos
  std::string rutaGesto = "./resources/gestos/";
  std::ifstream Registro;
  ruta= "./resources/gestos/RegistroGestos";
  Registro.open(ruta.c_str(),std::ios::in); //abriendo archivo modo lectura
  if (Dedos.fail()){
      std::cout << "No se pudo abrir el archivo CtdDedos " << std::endl;
      exit(1);
  }

  std::string lineaGesto;
  std::string lineaFrame;
  double arregloGesto[3] = {50.0,50.0,50.0};
  int manosGesto=0;
  int dedosGesto=0;
  int lineasArchivoGestos = 0;
  int lineasFrame = 0;
  //se recorre toda la lista del legistro
  while (!Registro.eof()){
    rutaGesto = "./resources/gestos/";
    std::getline(Registro,linea);
    //si la linea no esvacia
    if (strcmp(linea.c_str() , "") != 0){
      rutaGesto = rutaGesto + linea;
      manosGesto = atoi(DevolverPrimeraLinea(rutaGesto+"/CtdManos").c_str());
      dedosGesto = atoi(DevolverPrimeraLinea(rutaGesto+"/CtdDedos").c_str());
//      std::cout << "las manos del gesto "<<linea << "son" << manosGesto << std::endl;
//      std::cout << "las dedos del gesto "<<linea << "son" << dedosGesto << std::endl;
      //si la cantidad de dedos y manos es la misma
      if ((dedos == dedosGesto) && (manos == manosGesto)){
        //si pasa este filtro se comprueban los datos almacenados en lista de archivos
        //es decir la direccion en angulos en cada uno de los carchivos de texto plano
        //haciendo uso de ListaArchivos
        lineaGesto = DevolverPrimeraLinea(rutaGesto+"/ListaArchivos");
        lineaFrame = DevolverPrimeraLinea("./resources/temp/ListaArchivos");
//        std::cout<<"linea del Frame" << lineaFrame << std::endl;
//        std::cout<<"linea del Gesto" << lineaGesto << std::endl;
        if (strcmp(lineaFrame.c_str(),lineaGesto.c_str()) == 0){
          //si las listas coinciden se procede a revisar cada uno de los archivos de texto
          //para comprobar si coinciden las direcciones de los gestos almacenados con los gestos
          //de cada frame
          lineasArchivoGestos = ContarLineas(rutaGesto+"/ListaArchivos");
          lineasFrame = ContarLineas("./resources/temp/ListaArchivos");
          //se comprueba que los archivos tengan el mismo tamaño para evitar errores
          if (lineasArchivoGestos == lineasFrame){
            //si todo se cumpple se empieza a recorrer el archivo ListaArchivos
            //de linea en linea para obtener el porcentaje de error entre cada direccion
            //tanto de el gesto guardado que es considerado el valor teorico
            //y el gesto del frame que es considerado el valor experimental
            std::string vectorGesto;
            std::string vectorFrame;
            std::string nombreArchivo;
            std::string arregloError[lineasFrame];
            //se repite este ciclo hasta que se acaben los archivos que contienen los vectores con direccion
            for (int i = 0; i < lineasFrame;i++){
              nombreArchivo = DevolverQuieroLinea("./resources/temp/ListaArchivos",(i+1));
              vectorGesto = DevolverPrimeraLinea(rutaGesto+"/"+nombreArchivo);
              vectorFrame = DevolverPrimeraLinea("./resources/temp/"+nombreArchivo);
              //arregloError[i] = PorcentajeError(vectorGesto,vectorFrame);
              arregloError[i] = CompararVectores(vectorGesto,vectorFrame).c_str();
              //std::cout << linea << arregloError[i] << std::endl;
              //std::cout << linea << "   " <<nombreArchivo << "  " << vectorGesto << "  " << vectorFrame << " " << arregloError[i] << std::endl;
            }
            double sumatoriaX = 0;
            double sumatoriaY = 0;
            double sumatoriaZ = 0;
            //se calcula el promedio de los resultados
            for (int i = 0; i < lineasFrame; i++){
              sumatoriaX = sumatoriaX + devolverX(arregloError[1]);
              sumatoriaY = sumatoriaY + devolverY(arregloError[1]);
              sumatoriaZ = sumatoriaZ + devolverZ(arregloError[1]);
            }
            sumatoriaX = sumatoriaX / lineasFrame;
            sumatoriaY = sumatoriaY / lineasFrame;
            sumatoriaZ = sumatoriaZ / lineasFrame;
            //se dicta un gesto solo si es mas aproximado que el gesto anterior
            if ((sumatoriaX < arregloGesto[0]) && (sumatoriaY < arregloGesto[1]) && (sumatoriaZ < arregloGesto[2])){
              gestoRespuesta = linea;
            }
            //std::cout << linea << " ";
            //std::cout << "("+std::to_string(sumatoriaX)+", "+std::to_string(sumatoriaY)+", "+std::to_string(sumatoriaZ)+")" << std::endl;            
          }
        }

      }

    }
  }
  Registro.close();
  return gestoRespuesta;
}



/*@brief Funciones que escriben en un archivo los datos extraidos por el leap
 *@param dato es lo que se va a escribir
 *@param modo es como se debe abrir el archivo
 *@param nombre es el nombre del archivo
 */
void EscribirCadena(std::string dato,int modo,std::string nombre){
    std::ofstream archivo;
    std::string ruta= "./resources/temp/" + nombre;
    if (modo == 0){
        archivo.open(ruta.c_str(),std::ios::out); //abriendo archivo 
    }else{
        archivo.open(ruta.c_str(),std::ios::app); //abriendo archivo modo añadir
    }

    if (archivo.fail()){
        std::cout << "No se pudo abrir el archivo "  << nombre  << " escribir cadema" << std::endl;
        exit(1);
    }

    archivo << dato;

    archivo.close();
}
/*@brief Funciones que escriben en un archivo los datos extraidos por el leap
 *@param dato es lo que se va a escribir
 *@param modo es como se debe abrir el archivo
 *@param nombre es el nombre del archivo
 */
void EscribirNumero(int dato,int modo,std::string nombre){
    std::ofstream archivo;
    std::string ruta= "./resources/temp/" + nombre;
    if (modo == 0){
        archivo.open(ruta.c_str(),std::ios::out); //abriendo archivo 
    }else{
        archivo.open(ruta.c_str(),std::ios::app); //abriendo archivo modo añadir
    }

    if (archivo.fail()){
        std::cout << "No se pudo abrir el archivo"  << nombre  << " escribir numero" << std::endl;
        exit(1);
    }

    archivo << dato;

    archivo.close();
}
/*@brief Funciones que escriben en un archivo los datos extraidos por el leap
 *@param dato es lo que se va a escribir
 *@param modo es como se debe abrir el archivo
 *@param nombre es el nombre del archivo
 */
void EscribirVector(Leap::Vector dato,int modo,std::string nombre){
    std::ofstream archivo;
    std::string ruta= "./resources/temp/" + nombre;
    if (modo == 0){
        archivo.open(ruta.c_str(),std::ios::out); //abriendo archivo 
    }else{
        archivo.open(ruta.c_str(),std::ios::app); //abriendo archivo modo añadir
    }

    if (archivo.fail()){
        std::cout << "No se pudo abrir el archivo" << nombre   << " escribir vector" << std::endl;
        exit(1);
    }

    archivo << dato;

    archivo.close();
}


/*@brief Funciones que cuenta la cantidad de Frames medidos
 *@param nombre es el nombre del archivo
 *@return devuelve ña cantidad de lineas
 */
int ContarFrames(std::string nombre){
    std::ifstream archivo;
    std::string ruta= "./resources/temp/" + nombre;
    std::string linea;
    int contador = 0;
    archivo.open(ruta.c_str(),std::ios::in); //abriendo archivo modo añadir

    if (archivo.fail()){
        std::cout << "No se pudo abrir el archivo "  << nombre << " contarFrames " << std::endl;
        exit(1);
    }

    while (!archivo.eof()){
      std::getline(archivo,linea);
      contador++;
    }

    archivo.close();
    return contador;
}


/*
 *@brief clase que define el Lisener, en esta clase se recuperan datos dependiendo del evento que suseda
 */

class SampleListener : public Listener {
  public:
    virtual void onInit(const Controller&);
    virtual void onConnect(const Controller&);
    virtual void onDisconnect(const Controller&);
    virtual void onExit(const Controller&);
    virtual void onFrame(const Controller&);
    virtual void onFocusGained(const Controller&);
    virtual void onFocusLost(const Controller&);
    virtual void onDeviceChange(const Controller&);
    virtual void onServiceConnect(const Controller&);
    virtual void onServiceDisconnect(const Controller&);

  private:
};

const std::string fingerNames[] = {"Thumb", "Index", "Middle", "Ring", "Pinky"};
const std::string boneNames[] = {"Metacarpal", "Proximal", "Middle", "Distal"};
const std::string stateNames[] = {"STATE_INVALID", "STATE_START", "STATE_UPDATE", "STATE_END"};

void SampleListener::onInit(const Controller& controller) {
//////////////////////////////////////////  std::cout << "Initialized" << std::endl;
}

void SampleListener::onConnect(const Controller& controller) {
//////////////////////////////////////////  std::cout << "Connected" << std::endl;
  controller.enableGesture(Gesture::TYPE_CIRCLE);
  controller.enableGesture(Gesture::TYPE_KEY_TAP);
  controller.enableGesture(Gesture::TYPE_SCREEN_TAP);
  controller.enableGesture(Gesture::TYPE_SWIPE);
}

void SampleListener::onDisconnect(const Controller& controller) {
  // Note: not dispatched when running in a debugger.
//////////////////////////////////////////  std::cout << "Disconnected" << std::endl;
}

void SampleListener::onExit(const Controller& controller) {
//////////////////////////////////////////  std::cout << "Exited" << std::endl;
}

void SampleListener::onFrame(const Controller& controller) {
  // Get the most recent frame and report some basic information
  //system("sleep 1");
  const Frame frame = controller.frame();
  HandList manitos = frame.hands();
  ////////////////////////////////////////// std::cout << "Frame id: " << frame.id()
  //////////////////////////////////////////           << ", timestamp: " << frame.timestamp()
  //////////////////////////////////////////           << ", hands: " << frame.hands().count()
  //////////////////////////////////////////           << ", extended fingers: " << frame.fingers().extended().count()
  //////////////////////////////////////////           << ", tools: " << frame.tools().count()
  //////////////////////////////////////////           << ", gestures: " << frame.gestures().count() << std::endl;
  //codigo modificado
  //
  //
  int salir = ContarFrames("FrameID");
  std::string mano;
  std::string dedo;
  std::string hueso;
  std::string espacio = " ";
  EscribirNumero(frame.id(),0,"FrameID");
  EscribirNumero(frame.hands().count(),0,"CtdManos");
  EscribirNumero(frame.fingers().extended().count(),0,"CtdDedos");
  //
  //
  //
  HandList hands = frame.hands();
  for (HandList::const_iterator hl = hands.begin(); hl != hands.end(); ++hl) {
    // Get the first hand
    const Hand hand = *hl;
    std::string handType = hand.isLeft() ? "Left hand" : "Right hand";
//////////////////////////////////////////    std::cout << std::string(2, ' ') << handType << ", id: " << hand.id()
//////////////////////////////////////////              << ", palm position: " << hand.palmPosition() << std::endl;
    // Get the hand's normal vector and direction
//////////////////////////////////////////    const Vector normal = hand.palmNormal();
//////////////////////////////////////////    const Vector direction = hand.direction();
    mano = handType;
    // Calculate the hand's pitch, roll, and yaw angles
//////////////////////////////////////////    std::cout << std::string(2, ' ') <<  "pitch: " << direction.pitch() * RAD_TO_DEG << " degrees, "
//////////////////////////////////////////              << "roll: " << normal.roll() * RAD_TO_DEG << " degrees, "
//////////////////////////////////////////              << "yaw: " << direction.yaw() * RAD_TO_DEG << " degrees" << std::endl;

    // Get the Arm bone
    Arm arm = hand.arm();
//////////////////////////////////////////    std::cout << std::string(2, ' ') <<  "Arm direction: " << arm.direction()
//////////////////////////////////////////              << " wrist position: " << arm.wristPosition()
//////////////////////////////////////////              << " elbow position: " << arm.elbowPosition() << std::endl;

    // Get fingers
    const FingerList fingers = hand.fingers();
    for (FingerList::const_iterator fl = fingers.begin(); fl != fingers.end(); ++fl) {
      const Finger finger = *fl;
//////////////////////////////////////////      std::cout << std::string(4, ' ') <<  fingerNames[finger.type()]
//////////////////////////////////////////                << " finger, id: " << finger.id()
//////////////////////////////////////////                << ", length: " << finger.length()
//////////////////////////////////////////                << "mm, width: " << finger.width() << std::endl;
      dedo = fingerNames[finger.type()];
      // Get finger bones
      for (int b = 0; b < 4; ++b) {
        Bone::Type boneType = static_cast<Bone::Type>(b);
        Bone bone = finger.bone(boneType);
//////////////////////////////////////////        std::cout << std::string(6, ' ') <<  boneNames[boneType]
//////////////////////////////////////////                  << " bone, start: " << bone.prevJoint()
//////////////////////////////////////////                  << ", end: " << bone.nextJoint()
//////////////////////////////////////////                  << ", direction: " << bone.direction() * RAD_TO_DEG << "grados" << std::endl;
        hueso = boneNames[boneType];
        if (salir == 1){
          EscribirCadena("",0,mano+espacio+dedo+espacio+hueso);
          EscribirCadena(mano+espacio+dedo+espacio+hueso+"\n",1,"ListaArchivos");
        }
        EscribirVector(bone.direction() * RAD_TO_DEG, 0,mano+espacio+dedo+espacio+hueso);
      }
    }
  }
  std::string comprobar = ComprobarActual();
  if (strcmp(comprobar.c_str(), "") != 0){
    std::cout << "----------------------------------------------------------------------------" << std::endl;
    std::cout << comprobar << std::endl;
    std::cout << "----------------------------------------------------------------------------" << std::endl;
  }
  //exit(1);
  EscribirCadena("",0,"ListaArchivos"); 



  // Get tools
  const ToolList tools = frame.tools();
  for (ToolList::const_iterator tl = tools.begin(); tl != tools.end(); ++tl) {
    const Tool tool = *tl;
//////////////////////////////////////////    std::cout << std::string(2, ' ') <<  "Tool, id: " << tool.id()
//////////////////////////////////////////              << ", position: " << tool.tipPosition()
//////////////////////////////////////////              << ", direction: " << tool.direction() << std::endl;
  }
  // Get gestures
  const GestureList gestures = frame.gestures();
  for (int g = 0; g < gestures.count(); ++g) {
    Gesture gesture = gestures[g];

    switch (gesture.type()) {
      case Gesture::TYPE_CIRCLE:
      {
        CircleGesture circle = gesture;
        std::string clockwiseness;

        if (circle.pointable().direction().angleTo(circle.normal()) <= PI/2) {
          clockwiseness = "clockwise";
        } else {
          clockwiseness = "counterclockwise";
        }

        // Calculate angle swept since last frame
//////////////////////////////////////////        float sweptAngle = 0;
        if (circle.state() != Gesture::STATE_START) {
          CircleGesture previousUpdate = CircleGesture(controller.frame(1).gesture(circle.id()));
//////////////////////////////////////////          sweptAngle = (circle.progress() - previousUpdate.progress()) * 2 * PI;
        }
//////////////////////////////////////////        std::cout << std::string(2, ' ')
//////////////////////////////////////////                  << "Circle id: " << gesture.id()
//////////////////////////////////////////                  << ", state: " << stateNames[gesture.state()]
//////////////////////////////////////////                  << ", progress: " << circle.progress()
//////////////////////////////////////////                  << ", radius: " << circle.radius()
//////////////////////////////////////////                  << ", angle " << sweptAngle * RAD_TO_DEG
//////////////////////////////////////////                  <<  ", " << clockwiseness << std::endl;
        break;
      }
      case Gesture::TYPE_SWIPE:
      {
        SwipeGesture swipe = gesture;
//////////////////////////////////////////        std::cout << std::string(2, ' ')
//////////////////////////////////////////          << "Swipe id: " << gesture.id()
//////////////////////////////////////////          << ", state: " << stateNames[gesture.state()]
//////////////////////////////////////////          << ", direction: " << swipe.direction()
//////////////////////////////////////////          << ", speed: " << swipe.speed() << std::endl;
        break;
      }
      case Gesture::TYPE_KEY_TAP:
      {
        KeyTapGesture tap = gesture;
//////////////////////////////////////////        std::cout << std::string(2, ' ')
//////////////////////////////////////////          << "Key Tap id: " << gesture.id()
//////////////////////////////////////////          << ", state: " << stateNames[gesture.state()]
//////////////////////////////////////////          << ", position: " << tap.position()
//////////////////////////////////////////          << ", direction: " << tap.direction()<< std::endl;
        break;
      }
      case Gesture::TYPE_SCREEN_TAP:
      {
        ScreenTapGesture screentap = gesture;
//////////////////////////////////////////        std::cout << std::string(2, ' ')
//////////////////////////////////////////          << "Screen Tap id: " << gesture.id()
//////////////////////////////////////////          << ", state: " << stateNames[gesture.state()]
//////////////////////////////////////////          << ", position: " << screentap.position()
//////////////////////////////////////////          << ", direction: " << screentap.direction()<< std::endl;
        break;
      }
      default:
//////////////////////////////////////////        std::cout << std::string(2, ' ')  << "Unknown gesture type." << std::endl;
        break;
    }
  }

  if (!frame.hands().isEmpty() || !gestures.isEmpty()) {
//////////////////////////////////////////    std::cout << std::endl;
  }

}

void SampleListener::onFocusGained(const Controller& controller) {
//////////////////////////////////////////  std::cout << "Focus Gained" << std::endl;
}

void SampleListener::onFocusLost(const Controller& controller) {
//////////////////////////////////////////  std::cout << "Focus Lost" << std::endl;
}

void SampleListener::onDeviceChange(const Controller& controller) {
//////////////////////////////////////////  std::cout << "Device Changed" << std::endl;
  const DeviceList devices = controller.devices();

  for (int i = 0; i < devices.count(); ++i) {
//////////////////////////////////////////    std::cout << "id: " << devices[i].toString() << std::endl;
//////////////////////////////////////////    std::cout << "  isStreaming: " << (devices[i].isStreaming() ? "true" : "false") << std::endl;
  }
}

void SampleListener::onServiceConnect(const Controller& controller) {
//////////////////////////////////////////  std::cout << "Service Connected" << std::endl;
}

void SampleListener::onServiceDisconnect(const Controller& controller) {
//////////////////////////////////////////  std::cout << "Service Disconnected" << std::endl;
}

/*
 *@brief funcion principal, inicializa el controlados y el listener y mantiene el proceso hasta que se digite enter
 */

int main(int argc, char** argv) {
  printf(ANSI_COLOR_RESET "");
  printf("iniciando\n");
  EscribirCadena("",0,"FrameID");
  EscribirCadena("",0,"CtdManos");
  EscribirCadena("",0,"CtdDedos");
  EscribirCadena("",0,"ListaArchivos");
  // Create a sample listener and controller
  SampleListener listener;
  Controller controller;
  // Have the sample listener receive events from the controller
  controller.addListener(listener);
  
  if (argc > 1 && strcmp(argv[1], "--bg") == 0)
    controller.setPolicy(Leap::Controller::POLICY_BACKGROUND_FRAMES);

  // Keep this process running until Enter is pressed
  std::cout << "";
  std::cin.get();

  // Remove the sample listener when done
  controller.removeListener(listener);
  
  return 0;
}
