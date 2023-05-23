#ifndef LABERINTO_H
#define LABERINTO_H
    char** CrearTablero (int, int);
    //int NumeroRandom(int);
    void Esperar(float);
    void LlenarGatos(matriz*);
    void ImprimirMatriz(matriz*);
    void GuardarLaberinto(matriz *);
    void HacerCamino(matriz *);
    void EscribirCaracter(matriz*, char);
    int MePuedoMover(matriz*, int);
    //int NumeroRandomSemilla(int);
#endif