
#include <iostream>
#include <GL/glut.h>
using namespace std;

void initializar(){
	glClearColor(0.0,1.0,0.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-16.0,16.0,-16.0,16.0,-16.0,16.0);

}

void pie1 (){

glBegin(GL_POLYGON);
glVertex2f(1.0,1.0);
glVertex2f(1.0,1.55);
glVertex2f(1.45,1.55);
glVertex2f(1.45,1.9);
glVertex2f(2.22,1.9);
glVertex2f(2.22,1.0);
glEnd();

}

void pie2 (){

glBegin(GL_POLYGON);
glVertex2f(3.49,1.0);
glVertex2f(3.49,1.9);
glVertex2f(4.27,1.9);
glVertex2f(4.27,1.55);
glVertex2f(4.72,1.55);
glVertex2f(4.72,1.0);
glEnd();

}

void piernasP1 (){

	glBegin(GL_QUADS);
	glVertex2f(1.83,1.9);
	glVertex2f(2.61,1.9);
	glVertex2f(2.61,2.7);
	glVertex2f(1.83,2.7);
	glEnd();

}
void piernasP2 (){

	glBegin(GL_QUADS);
	glVertex2f(3.1,2.7);
	glVertex2f(3.1,1.9);
	glVertex2f(3.88,1.9);
	glVertex2f(3.88,2.7);
	glEnd();

}
void piernasP3 (){

	glBegin(GL_QUADS);
	glVertex2f(2.61,2.3);
	glVertex2f(2.61,2.7);
	glVertex2f(3.1,2.7);
	glVertex2f(3.1,2.3);

	glEnd();

}


void piernasP4 (){

	glBegin(GL_QUADS);
	glVertex2f(2.23,2.7);
	glVertex2f(2.23,3.45);
	glVertex2f(3.45,3.45);
	glVertex2f(3.45,2.7);

	glEnd();

}
void boton (){

	glBegin(GL_QUADS);
	glVertex2f(2.25,2.75);
	glVertex2f(2.25,3.15);
	glVertex2f(2.45,3.15);
	glVertex2f(2.45,2.75);

	glEnd();

}
void boton2 (){

	glBegin(GL_QUADS);
	glVertex2f(3.25,2.75);
	glVertex2f(3.25,3.15);
	glVertex2f(3.43,3.15);
	glVertex2f(3.43,2.75);

	glEnd();

}

void liga1 (){

	glBegin(GL_QUADS);

	glVertex2f(2.35,4.2);
	glVertex2f(2.23,4.2);
	glVertex2f(2.23,3.45);
	glVertex2f(2.35,3.45);
	glEnd();

}

void liga2 (){

	glBegin(GL_QUADS);

	glVertex2f(3.35,3.95);
	glVertex2f(3.35,3.45);
	glVertex2f(3.45,3.45);
	glVertex2f(3.45,3.95);
	glEnd();

}
void torso (){

	glBegin(GL_QUADS);

	glVertex2f(3.38,3.62);
	glVertex2f(3.38,3.45);
	glVertex2f(2.23,3.45);
	glVertex2f(2.23,3.62);
	glEnd();

}

void torsoRojo1 (){

	glBegin(GL_POLYGON);

	glVertex2f(2.35,3.45);
	glVertex2f(2.35,4.2);
	glVertex2f(3.45,4.2);
	glVertex2f(3.45,3.95);
	glVertex2f(3.35,3.95);
	glVertex2f(3.35,3.45);
	glEnd();

}
void gorra1 (){
	glBegin(GL_QUADS);

		glVertex2f(1.8,7.2);
		glVertex2f(6,7.2);


		glVertex2f(6,8.55);
		glVertex2f(1.8,8.55);

	glEnd();
}


void gorra2 (){
	glBegin(GL_QUADS);

		glVertex2f(2.18,8.55);
		glVertex2f(5.25,8.55);


		glVertex2f(5.25,9.6);
		glVertex2f(2.18,9.6);

	glEnd();
}
void cabeza (){
	glBegin(GL_QUADS);

	glVertex2f(1.8,4.2);
	glVertex2f(4.85,4.2);


	glVertex2f(4.85,7.2);
	glVertex2f(1.8,7.2);
	glEnd();
}
void nariz (){
	glBegin(GL_POLYGON);

	glVertex2f(4.85,4.2);
	glVertex2f(5.2,4.2);
	glVertex2f(5.2,4.2);
	glVertex2f(5.2,5.2);
	glVertex2f(5,5.2);
	glVertex2f(5,6.5);
	glVertex2f(4.85,6.5);
	glEnd();
}
void nariz2 (){
	glBegin(GL_POLYGON);

	glVertex2f(5,5.4);
	glVertex2f(5.7,5.4);
	glVertex2f(5.7,5.4);
	glVertex2f(5.7,5.95);
	glVertex2f(5.35,5.95);
	glVertex2f(5.35,6.5);
	glVertex2f(5,6.5);
	glEnd();
}
void cabelloL (){
	glBegin(GL_POLYGON);

	glVertex2f(1.5,4.7);
	glVertex2f(2.5,4.7);
	glVertex2f(2.5,4.7);
	glVertex2f(2.5,5.2);
	glVertex2f(1.85,5.2);
	glVertex2f(1.85,6.5);
	glVertex2f(1.5,6.5);
	glEnd();
}

void cabelloRectangulo1 (){
	glBegin(GL_QUADS);

	glVertex2f(2.15,6.5);
	glVertex2f(3.75,6.5);
	glVertex2f(3.75,7.2);
	glVertex2f(2.15,7.2);
	glEnd();
}

void cabelloRectanguloL (){
	glBegin(GL_POLYGON);

	glVertex2f(2.93,4.9);
	glVertex2f(3.75,4.9);
	glVertex2f(3.75,4.9);
	glVertex2f(3.75,5.4);
	glVertex2f(3.25,5.4);
	glVertex2f(3.25,6.5);
	glVertex2f(2.93,6.5);
	glEnd();
}

void bigote1 (){
	glBegin(GL_QUADS);

	glVertex2f(4.2,4.7);
	glVertex2f(6,4.7);
	glVertex2f(6,5.4);
	glVertex2f(4.2,5.4);
	glEnd();
}
void bigote2 (){
	glBegin(GL_QUADS);

	glVertex2f(4.7,5.4);
	glVertex2f(5.2,5.4);
	glVertex2f(5.2,5.9);
	glVertex2f(4.7,5.9);
	glEnd();
}
void ojo (){
	glBegin(GL_QUADS);

	glVertex2f(4.3,5.6);
	glVertex2f(4.66,5.6);
	glVertex2f(4.66,6.8);
	glVertex2f(4.3,6.8);
	glEnd();
}


void torsoRojo2 (){

	glBegin(GL_POLYGON);

	glVertex2f(3.45,3.95);
	glVertex2f(3.45,3.35);
	glVertex2f(4.2,3.35);
	glVertex2f(4.2,3.57);
	glVertex2f(4,3.57);
	glVertex2f(4,3.95);

	glEnd();

}

void torsoRojo3 (){

	glBegin(GL_POLYGON);

	glVertex2f(2.23,4.2);
	glVertex2f(2.23,3.45);
	glVertex2f(1,3.45);
	glVertex2f(1,3.7);
	glVertex2f(1.25,3.7);
	glVertex2f(1.45,3.95);
	glVertex2f(1.65,3.95);
	glVertex2f(1.85,4.2);
	glVertex2f(2.05,4.2);

	glEnd();

}

void manoiz (){
	glBegin(GL_QUADS);

	glVertex2f(1.3,3.45);

	glVertex2f(2.23,3.45);

	glVertex2f(2.23,2.7);

	glVertex2f(1.3,2.7);
	glEnd();

}
void manoizp2 (){
	glBegin(GL_QUADS);

	glVertex2f(1.3,1.95);

	glVertex2f(1.83,1.95);

	glVertex2f(1.83,2.7);

	glVertex2f(1.3,2.7);
	glEnd();

}

void manoderecha () {
	glBegin(GL_QUADS);

	glVertex2f(3.45,3.45);


	glVertex2f(3.45,2.7);

	glVertex2f(4.2,2.7);

	glVertex2f(4.2,3.45);

	glEnd();

}

void manoderecha2 () {
	glBegin(GL_QUADS);

	glVertex2f(3.85,1.95);

	glVertex2f(4.2,1.95);



	glVertex2f(4.2,2.7);
	glVertex2f(3.85,2.7);


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


	glColor3f(0.9922f,0.8667f,0.7922f);

	manoiz();
	manoizp2();
	manoderecha();
	manoderecha2();
	nariz();
	cabeza();
	nariz2();

	glColor3f(0.6f,0.25f,0.0f);
	pie1();
	pie2();
	cabelloL();
	cabelloRectangulo1();
	cabelloRectanguloL();
bigote1();
bigote2();

	glColor3f(0.0f,0.0f,1.0f);
	piernasP1();
	piernasP2();
	piernasP3();
	piernasP4();
	liga1();
	liga2();
	torso();
	glColor3f(1.0f,1.0f,0.0f);
	boton();
	boton2();
	glColor3f(1.0f,0.0f,0.0f);
	torsoRojo1();
	torsoRojo2();
	torsoRojo3();
	gorra1();
	gorra2();
	glColor3f(0.0f,0.0f,0.0f);
	ojo();

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


