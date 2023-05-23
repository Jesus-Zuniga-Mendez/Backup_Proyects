/**
 * @file GuardarrGesto.cpp
 * @author Jesus Zuñiga Mendez
 * @brief Archivo que permite guardar un gesto en un grupo de archivos se toma como base el ejemplo del sdk
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

/*@brief Funciones que dibuja un rotulo en pantalla
 *@param opcion es el rotulo que se quier imprimir
 */
void Espere(int opcion){
  switch (opcion)
  {
  case 0:
    std::cout << "  ______   _____  _____   ______  _____   ______   " << std::endl;
    std::cout << " |  ____| / ____||  __ \\ |  ____||  __ \\ |  ____|" << std::endl;
    std::cout << " | |__   | (___  | |__) || |__   | |__) || |__     " << std::endl;
    std::cout << " |  __|   \\___ \\ |  ___/ |  __|  |  _  / |  __|  " << std::endl;
    std::cout << " | |____  ____) || |     | |____ | | \\ \\ | |____ " << std::endl;
    std::cout << " |______||_____/ |_|     |______||_|  \\_\\|______|" << std::endl;
    break;
  case 1:
    std::cout << "  ______   _____  _____   ______  _____   ______          " << std::endl;
    std::cout << " |  ____| / ____||  __ \\ |  ____||  __ \\ |  ____|       " << std::endl;
    std::cout << " | |__   | (___  | |__) || |__   | |__) || |__            " << std::endl;
    std::cout << " |  __|   \\___ \\ |  ___/ |  __|  |  _  / |  __|         " << std::endl;
    std::cout << " | |____  ____) || |     | |____ | | \\ \\ | |____      _ " << std::endl;
    std::cout << " |______||_____/ |_|     |______||_|  \\_\\|______|    (_)" << std::endl;
    break;
  case 2:
    std::cout << "  ______   _____  _____   ______  _____   ______              " << std::endl;
    std::cout << " |  ____| / ____||  __ \\ |  ____||  __ \\ |  ____|           " << std::endl;
    std::cout << " | |__   | (___  | |__) || |__   | |__) || |__                " << std::endl;
    std::cout << " |  __|   \\___ \\ |  ___/ |  __|  |  _  / |  __|             " << std::endl;
    std::cout << " | |____  ____) || |     | |____ | | \\ \\ | |____      _   _ " << std::endl;
    std::cout << " |______||_____/ |_|     |______||_|  \\_\\|______|    (_) (_)" << std::endl;
    break;
  case 3:
    std::cout << "  ______   _____  _____   ______  _____   ______                  " << std::endl;
    std::cout << " |  ____| / ____||  __ \\ |  ____||  __ \\ |  ____|               " << std::endl;
    std::cout << " | |__   | (___  | |__) || |__   | |__) || |__                    " << std::endl;
    std::cout << " |  __|   \\___ \\ |  ___/ |  __|  |  _  / |  __|                 " << std::endl;
    std::cout << " | |____  ____) || |     | |____ | | \\ \\ | |____      _   _   _ " << std::endl;
    std::cout << " |______||_____/ |_|     |______||_|  \\_\\|______|    (_) (_) (_)" << std::endl;
    break;
  default:
    break;
  }

}
/*@brief Funciones que dibuja un punto en pantalla
 */
void Punto(){
  std::cout << "    " << std::endl;
  std::cout << "    " << std::endl;
  std::cout << "    " << std::endl;
  std::cout << "    " << std::endl;
  std::cout << "  _ " << std::endl;
  std::cout << " (_)" << std::endl;
}

/*@brief Funciones que cuenta la cantidad de lineas de un archivo
 *@param nombre es el nombre del archivo
 *@return devuelve la cantidad de lineas
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

/*
 *@brief clase que define el listener
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
  if (manitos.begin() == manitos.end()){
    printf(ANSI_COLOR_RED"");
    std::cout << "Mantenga las manos en el sensor" << std::endl;
    printf(ANSI_COLOR_RESET"");
    exit(1);
  }
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
  if (salir >=301){//termina de ejecutarse cuando ha leido una cantidad de 300 frames
    exit(1);
  }
  int s = 0;
  if (salir == 2){
    s = system("clear");
    Espere(0);
  }
  if (salir == 75){
    s = system("clear");
    Espere(1);
  }
  if (salir == 150){
    s = system("clear");
    Espere(2);
  }
  if (salir == 225){
    s = system("clear");
    Espere(3);
  }
  s=s;
  EscribirNumero(frame.id(),1,"FrameID");
  EscribirCadena("\n",1,"FrameID");
  EscribirNumero(frame.hands().count(),1,"CtdManos");
  EscribirCadena("\n",1,"CtdManos");
  EscribirNumero(frame.fingers().extended().count(),1,"CtdDedos");
  EscribirCadena("\n",1,"CtdDedos");
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
          EscribirCadena(mano+espacio+dedo+espacio+hueso,1,"ListaArchivos");
          EscribirCadena("\n",1, "ListaArchivos");
        }
        EscribirVector(bone.direction() * RAD_TO_DEG, 1,mano+espacio+dedo+espacio+hueso);
        EscribirCadena("\n",1, mano+espacio+dedo+espacio+hueso);
      }
    }
  }
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
        //float sweptAngle = 0;
        if (circle.state() != Gesture::STATE_START) {
          CircleGesture previousUpdate = CircleGesture(controller.frame(1).gesture(circle.id()));
          //sweptAngle = (circle.progress() - previousUpdate.progress()) * 2 * PI;
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
        std::cout << std::string(2, ' ')  << "Unknown gesture type." << std::endl;
        break;
    }
  }

  if (!frame.hands().isEmpty() || !gestures.isEmpty()) {
    //std::cout << std::endl;
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
 *@brief Funcion principal, inicializa el listener y el controlador, mantien el proceso hasta que se digite enter
 */
int main(int argc, char** argv) {
  printf(ANSI_COLOR_RESET "");
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
  std::cout << "";;
  std::cin.get();

  // Remove the sample listener when done
  controller.removeListener(listener);
  
  return 0;
}
