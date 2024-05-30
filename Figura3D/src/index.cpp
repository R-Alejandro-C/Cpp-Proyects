#include <iostream>
#include <GL/glut.h>
using namespace std;
void Initializar(){
glClearColor(0.0,1.0,0.0,1.0); ///verde
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-16.0,16.0,-16.0,16.0,-16.0,16.0);
}
void planoCartesiano(){
glBegin(GL_LINES);
glVertex2f(-10.0,0.0);
glVertex2f(10.0,0.0);
glEnd();
glBegin(GL_LINES);
glVertex2f(0.0,-10.0);
glVertex2f(0.0,10.0);
glEnd();
}
void triangulo(){
glBegin(GL_TRIANGLES);
glVertex2f(3.0,1.0);
glVertex2f(4.5,3.0);
glVertex2f(6.0,1.0);
glEnd();
}

void trianguloAlreves(){
glBegin(GL_TRIANGLES);
glVertex2f(3.0,5.0);
glVertex2f(4.5,3.0);
glVertex2f(6.0,5.0);
glEnd();
}

void Dibujar(){
glClear(GL_COLOR_BUFFER_BIT);
planoCartesiano();
triangulo();
trianguloAlreves();
glFlush();
}
int main(int argc, char**argv){
cout << "!!!Bienvenidos!!!" << endl;
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(650,350);
glutCreateWindow("Primera Ventana");
Initializar();
glutDisplayFunc(Dibujar);
glutMainLoop();
return 0;
}
