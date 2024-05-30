
#include <iostream>
#include <GL/glut.h>
using namespace std;

void initializar(){
	glClearColor(0.5,0.8,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-16.0,16.0,-16.0,16.0,-16.0,16.0);

}

void tronco (){

glBegin(GL_QUADS);
glVertex2f(5.0,1.0);
glVertex2f(7.0,1.0);
glVertex2f(7.0,7.0);
glVertex2f(5.0,7.0);
glEnd();

}
void mangoiz1 (){

	glBegin(GL_QUADS);
	glVertex2f(3.0,3.0);
	glVertex2f(4.0,2.0);
	glVertex2f(4.0,6.0);
	glVertex2f(3.0,5.0);
	glEnd();

	}
void mangoiz2 (){

	glBegin(GL_QUADS);
		glVertex2f(4.0,2.0);
		glVertex2f(5.0,1.0);
		glVertex2f(5.0,7.0);
		glVertex2f(4.0,6.0);
	glEnd();

}
void hoja (){

	glBegin(GL_QUADS);
		glVertex2f(4.0,9.0);
		glVertex2f(6.0,11.0);
		glVertex2f(8.0,11.0);
		glVertex2f(10.0,9.0);
	glEnd();

}
void mangoderecho (){
	glBegin(GL_QUADS);
		glVertex2f(7.0,1.0);
		glVertex2f(9.0,3.0);
		glVertex2f(9.0,5.0);
		glVertex2f(7.0,7.0);
	glEnd();
}
void rama (){
	glBegin(GL_LINES);
		glVertex2f(7.0,5.0);
		glVertex2f(10.0,9.0);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(6.0,6.0);
		glVertex2f(7.0,5.0);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(8.0,5.0);
		glVertex2f(7.0,5.0);
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


		glColor3f(1.0f,0.5f,0.0f);
	tronco();
	mangoiz1();
	mangoiz2();
	mangoderecho();

	glColor3f(0.0f,1.0f,0.0f);

	hoja();

	glColor3f(0.0f,0.0f,0.0f);

		rama();


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
