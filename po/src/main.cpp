#include "funciones.h"

//Funcion Principal
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(650,650);
	glutInitWindowPosition(350,20);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); //modo de visualizacion inicial
	glutCreateWindow("T4 - SISTEMA PLANETARIO SOLAR");
	glClearColor(0,0,0,0);//especificar valores claros para el color del buffer
	glutReshapeFunc(inicializar);
	glutDisplayFunc(dibujar);
	glutKeyboardFunc(key);
	glutFullScreen(); //pantalla completa
	glutIdleFunc(idle);

	glutMainLoop();
	return 0;
}
