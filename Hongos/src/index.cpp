
#include <iostream>
#include <GL/glut.h>
using namespace std;

void initializar(){
	glClearColor(0.0,1.0,0.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-16.0,16.0,-16.0,16.0,-16.0,16.0);

}

void triangulo (){

glBegin(GL_TRIANGLES);
glVertex2f(3.0,1.0);
glVertex2f(4.5,3.0);
glVertex2f(6.0,1.0);
glEnd();

}
void trianguloInvertido (){

glBegin(GL_TRIANGLES);
glVertex2f(4.5,3.0);
glVertex2f(3.0,5.0);
glVertex2f(6.0,5.0);
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
	triangulo();
	trianguloInvertido();
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
