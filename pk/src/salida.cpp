/*
 * salida.cpp
 *
 *  Created on: 12 oct 2023
 *      Author: aleco
 */


#include "funciones.h"

void hongoCara1 (){

glBegin(GL_QUADS);
glVertex2f(2.0,0.0);
glVertex2f(2.0,1.2);
glVertex2f(3.0,1.2);
glVertex2f(3.0,0.0);
glEnd();

}
void hongoCara2 (){

	glBegin(GL_QUADS);
	glVertex2f(1.9,0.2);
	glVertex2f(1.9,0.8);
	glVertex2f(3.1,0.8);
	glVertex2f(3.1,0.2);
	glEnd();

	}
void ojo1 (){

	glBegin(GL_QUADS);
	glVertex2f(2.2,0.6);
	glVertex2f(2.2,1.0);
	glVertex2f(2.35,1.0);
	glVertex2f(2.35,0.6);
	glEnd();

}
void ojo2 (){

	glBegin(GL_QUADS);
	glVertex2f(2.65,0.6);
	glVertex2f(2.65,1.0);
	glVertex2f(2.8,1.0);
	glVertex2f(2.8,0.6);
	glEnd();

}

void hongoCabeza0 (){

	glBegin(GL_QUADS);
	glVertex2f(1.9,0.8);
	glVertex2f(1.9,1.2);
	glVertex2f(3.1,1.2);
	glVertex2f(3.1,0.8);
	glEnd();

}
void hongoCabeza1 (){

glBegin(GL_QUADS);
glVertex2f(1.8,1.2);
glVertex2f(1.8,2.0);
glVertex2f(3.2,2.0);
glVertex2f(3.2,1.2);
glEnd();

}
void hongoCabeza2 (){

glBegin(GL_QUADS);
glVertex2f(1.9,2.0);
glVertex2f(1.9,2.5);
glVertex2f(3.1,2.5);
glVertex2f(3.1,2.0);
glEnd();

}
void hongoCabeza3 (){

glBegin(GL_QUADS);
glVertex2f(2.1,2.5);
glVertex2f(2.1,2.8);
glVertex2f(2.9,2.8);
glVertex2f(2.9,2.5);
glEnd();

}
void hongoCabeza4 (){

glBegin(GL_QUADS);
glVertex2f(2.3,2.8);
glVertex2f(2.3,3.1);
glVertex2f(2.7,3.1);
glVertex2f(2.7,2.8);
glEnd();

}
void hongoCabeza5 (){

glBegin(GL_QUADS);
glVertex2f(2.4,3.1);
glVertex2f(2.4,3.5);
glVertex2f(2.5,3.5);
glVertex2f(2.5,3.1);
glEnd();

}




void Triangulo(){
glColor3f(0.0f,0.0f,0.0f);
hongoCabeza0();
glColor3f(1.0f,1.0f,1.0f);
hongoCara1();
hongoCara2();
glColor3f(0.0f,0.0f,0.0f);
ojo1();
ojo2();
glColor3f(1.0f,0.0f,0.0f);
hongoCabeza1();
hongoCabeza2();
hongoCabeza3();
hongoCabeza4();

glFlush();
}
