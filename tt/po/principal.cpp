/*
 * principal.cpp
 *
 *  Created on: 12 oct 2023
 *      Author: aleco
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

