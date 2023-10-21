
#include <iostream>
#include <GL/glut.h>
using namespace std;

void initializar(){
	glClearColor(0.0,1.0,0.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-16.0,16.0,-16.0,16.0,-16.0,16.0);

}

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

void Dibujar(){
	glClear(GL_COLOR_BUFFER_BIT);
	planoCarteciano();
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

int main (int argc, char**argv){
	cout <<"Hola"<<endl;
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(650,460);
	glutCreateWindow("Primear ventana");
	initializar();
	glutDisplayFunc(Dibujar);
	glutMainLoop();
	return 0;
}
