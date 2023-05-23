#ifndef TOOLS_H
#define TOOLS_H
    #include "./Includes.h"
    void CalcularGesto();
    void EscribirCadena(std::string,int,std::string);
    void ActualizarRegistro(std::string,int,std::string);
    double devolverX(std::string);
    double devolverY(std::string);
    double devolverZ(std::string);
    int ComprobarGestoManos();
    int ComprobarGestoDedos();
    int ComprobarGestoCantidad();
    int  GuardarGesto(std::string);
    int  BorrarGesto(std::string);
    int  MoverArchivos(std::string);
    std::string QuitarEspacios(std::string);
    std::string PonerEspacios(std::string);
    void ImprimirRegistro(std::string);
    void EliminarGesto(std::string, std::string);
#endif