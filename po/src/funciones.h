#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#include <iostream>
#include <GL/glut.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

//inicio.cpp
void inicializar(int, int);
void dibujar();

//salida.cpp
void planoCartesiano();
//planetas
void sol(float);
void mercurio(float);
void venus(float);
void tierra(float);
void marte(float);
void jupiter(float);
void saturno(float);void anillos(float);
void urano(float);
void neptuno(float);
void estrellas();
//Otros
void iluminacion();
void key(unsigned char, int, int); //cerrar app
void idle();

#endif /* FUNCIONES_H_ */
