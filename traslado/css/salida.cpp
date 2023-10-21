
/*
* salida.cpp
*
* Created on: 29 nov. 2022
* Author: MARLENE
*/
#include "funciones.h"
void PlanoCartesiano(){
glBegin(GL_LINES);
glVertex2f(-16.0,0.0);
glVertex2f(16.0,0.0);
glVertex2f(0.0,-16.0);
glVertex2f(0.0,16.0);
glEnd();
}
void Triangulo(){
glColor3f(1.0,0.0,0.0);
glBegin(GL_TRIANGLES);
glVertex2f(3.0,1.0);
glVertex2f(4.5,3.0);
glVertex2f(6.0,1.0);
glEnd();
}
