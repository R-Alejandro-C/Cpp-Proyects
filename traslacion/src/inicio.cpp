/*
 * inicio.cpp
 *
 *  Created on: 12 oct 2023
 *      Author: aleco
 */



#include "funciones.h"
float mover_x=0;
float mover_y=0;
void Inicializar(){
	glClearColor(0.5, 0.0, 0.5, 1.0);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-16.0,16.0,-16.0,16.0,-16.0,16.0);
}
void planoCarteciano (){

glBegin(GL_LINES);
glVertex2f(-10.0,0.0);
glVertex2f(10.0,0.0);
glEnd();
glBegin(GL_LINES);
glVertex2f(0.0,-10.0);
glVertex2f(0.0,10.0);
glEnd();

}

///////////////////////
void CañonFrente(){
	glBegin(GL_LINE_LOOP);
	glVertex2f(-2.0, 3.0);
	glVertex2f(-4.0, 1.0);
	glVertex2f(-8.0, 1.0);
	glVertex2f(-8.0, 9.0);
	glVertex2f(-4.0, 9.0);
	glVertex2f(-2.0, 7.0);
	glEnd();
}

void Ojo(){
	glBegin(GL_QUADS);
	glVertex2f(-4.0,6.0);
	glVertex2f(-5.0, 6.0);
	glVertex2f(-5.0, 7.0);
	glVertex2f(-4.0, 7.0);
	glEnd();
}
void Cola(){
	glBegin(GL_QUADS);
	glVertex2f(-8.5, 2.0);
	glVertex2f(-9.5, 2.0);
	glVertex2f(-9.5, 8.0);
	glVertex2f(-8.5, 8.0);
	glEnd();
}
void Cola2(){
	glBegin(GL_QUADS);
	glVertex2f(-10.0, 3.0);
	glVertex2f(-11.0, 3.0);
	glVertex2f(-11.0, 7.0);
	glVertex2f(-10.0, 7.0);
	glEnd();
}
void Cola3(){
	glBegin(GL_QUADS);
	glVertex2f(-12.0, 4.0);
	glVertex2f(-13.0, 4.0);
	glVertex2f(-13.0, 6.0);
	glVertex2f(-12.0, 6.0);
	glEnd();
}

////////////////////

void cuerpo(){

	glColor3f(0.0, 0.0, 0.0);;
	glBegin(GL_QUADS);
	glVertex2f(2.6,-2);
	glVertex2f(3.3,-2);
	glVertex2f(3.3,-5);
	glVertex2f(2.6,-5);
	glEnd();

	glColor3f(0.6, 0.3, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(3.3,-2.6);
	glVertex2f(3.6,-2.6);
	glVertex2f(3.6,-4.6);
	glVertex2f(3.3,-4.6);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(3.6,-2);
	glVertex2f(4,-2);
	glVertex2f(4,-5);
	glVertex2f(3.6,-5);
	glEnd();
}

void cabeza(){
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(2.6,-2);
	glVertex2f(2.6,-5);
	glVertex2f(1.9,-4.9);
	glVertex2f(1.3,-4.6);
	glVertex2f(1,-4.3);
	glVertex2f(0.9,-3.3);
	glVertex2f(0.9,-3.3);
	glVertex2f(1,-2.9);
	glVertex2f(1.3,-2.6);
	glVertex2f(1.9,-2.3);
	glEnd();

	//ojos
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(1.1,-3.9);
	glVertex2f(1.9,-4.6);
	glVertex2f(1.9,-3.9);
	glEnd();

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(1.3,-4);
	glVertex2f(1.6,-4.3);
	glVertex2f(1.6,-4);
	glEnd();

	//boca
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(1.3,-2.6);
	glVertex2f(1.9,-3);
	glVertex2f(1.6,-3.6);
	glVertex2f(1.3,-3.3);
	glVertex2f(0.9,-3.3);
	glVertex2f(1,-2.9);
	glEnd();

	//diente
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.9,-3.3);
	glVertex2f(0.95,-3);
	glVertex2f(1,-3.3);
	glVertex2f(1.15,-3);
	glVertex2f(1.3,-3.3);
	glVertex2f(1.5,-3.1);
	glVertex2f(1.45,-3.45);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(1.3,-2.6);
	glVertex2f(1.2,-2.95);
	glVertex2f(1.6,-2.9);
	glVertex2f(1.5,-3.15);
	glVertex2f(1.9,-3);
	glEnd();


}

///////////////////////////////////


void CuadradoParte1(){
	glBegin(GL_QUADS);
	glVertex2f(-4.0, 0.0);
	glVertex2f(-7.0, 0.0);
	glVertex2f(-7.0, -14.0);
	glVertex2f(-4.0, -14.0);
	glEnd();
}
void CuadradoParte2(){
	glBegin(GL_QUADS);
	glVertex2f(-1.0, 0.0);
	glVertex2f(-10.0, 0.0);
	glVertex2f(-10.0, -4.0);
	glVertex2f(-1.0, -4.0);
	glEnd();
}


void Dibujar(){
glClear(GL_COLOR_BUFFER_BIT);
glPushMatrix();
planoCarteciano();



glTranslatef(mover_x,mover_y,0.0);
Triangulo();
glPushMatrix();
glPopMatrix();
glFlush();
}
void traslado(int key, int x, int y){
switch(key)
{
case GLUT_KEY_RIGHT: mover_x++;break;
case GLUT_KEY_LEFT: mover_x--;break;
case GLUT_KEY_UP: mover_y++; break;
case GLUT_KEY_DOWN: mover_y--;break;
}
glutPostRedisplay();
}
