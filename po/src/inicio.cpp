#include "funciones.h"

void inicializar(int width, int height)
{
	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-300,300,-300,300,-300,300);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
}

//Inicializacion de variables
GLfloat rotA=0, rot1=0, rot2=0, rot3=0, rot4=0, rot5=0, rot6=0, rot7=0, rot8=0;
GLfloat rdS=30, rd1=6, rd2=12, rd3=9, rd4=6, rd5=18, rd6=15, rd7=12, rd8=12;
GLfloat posx=0,posz=0;

void dibujar()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0);
	iluminacion();
	planoCartesiano();
	estrellas();
	sol(rdS);

	// Mercurio: rotacion + traslacion
	glPushMatrix();
	glRotatef(rot1,0,1,0);
	glTranslatef(-40,0,0);
	mercurio(rd1);
	glPopMatrix();

	// Venus: rotacion + traslacion
	glPushMatrix();
	glRotatef(rot2,0,1,0);
	glTranslatef(60,0,0);
	venus(rd2);
	glPopMatrix();

	// Tierra: rotacion + traslacion
	glPushMatrix();
	glRotatef(rot3,0,1,0);
	glTranslatef(0,0,-80);
	tierra(rd3);
	glPopMatrix();

	// Marte: rotacion + traslacion
	glPushMatrix();
	glRotatef(rot4,0,1,0);
	glTranslatef(100,0,0);
	marte(rd4);
	glPopMatrix();

	// Jupiter: rotacion + traslacion
	glPushMatrix();
	glRotatef(rot5,0,1,0);
	glTranslatef(-120,0,0);
	jupiter(rd5);
	glPopMatrix();

	// Saturno: rotacion + traslacion
	glPushMatrix();
	glRotatef(rot6,0,1,0);
	glTranslatef(0,0,160);
	saturno(rd6);
	anillos(rotA);
	glPopMatrix();

	// Urano: rotacion + traslacion
	glPushMatrix();
	glRotatef(rot7,0,1,0);
	glTranslatef(-170,0,0);
	urano(rd7);
	glPopMatrix();

	// Neptuno: rotacion + traslacion
	glPushMatrix();
	glRotatef(rot8,0,1,0);
	glTranslatef(190,0,0);
	neptuno(rd8);
	glPopMatrix();

	//Incremento de variables de rotación
	rotA=rotA+0.03;
	rot1=rot1+0.1;
	rot2=rot2+0.015;
	rot3=rot3+0.013;
	rot4=rot4+0.05;
	rot5=rot5+0.04;
	rot6=rot6+0.03;
	rot7=rot7+0.02;
	rot8=rot8+0.01;

	glutSwapBuffers();
}
