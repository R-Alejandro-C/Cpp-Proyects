/*
 * principal.cpp
 *
 *  Created on: 29 nov. 2022
 *      Author: MARLENE
 */

#include "funciones.h"

int main(int argc, char** argv){

	cout<<"!!Hola Mundo!!!"<<endl; //prints !!Hello World
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(650,350);
		glutInitWindowPosition(200,200);
		glutCreateWindow("Primera Ventana");
		Inicializar();
		glutDisplayFunc(Dibujar);
		glutSpecialFunc(traslado);
		glutMainLoop();
		return 0;
	}
