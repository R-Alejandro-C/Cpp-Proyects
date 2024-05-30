#include "funciones.h"

//Inicializacion de variables para iluminacion    *
GLfloat mat_diffuse [] = {0.0, 0.0, 0.0, 1.0};
GLfloat mat_specular [] = {0.5, 0.5, 0.5, 1.0};
GLfloat mat_shininess [] = {50};
GLfloat mat_emission [] = {0.5, 0.2, 0.2, 1.0};

//Funcion para la iluminacion
void iluminacion()
{
	GLfloat light_position[] = {1.0, 1.0, 1.0, 0.0};
	glLightfv(GL_LIGHT0,GL_POSITION, light_position);

	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glEnable (GL_LIGHTING);
	glEnable (GL_LIGHT0);
	glEnable(GL_COLOR_MATERIAL);
}

//Ejes
void planoCartesiano()
{
	glColor3f(1,1,1);
	glBegin(GL_LINES);
		glVertex3f(-200,0,0);
		glVertex3f(200,0,0);
		glVertex3f(0,-200,0);
		glVertex3f(0,200,0);
		glVertex3f(0,0,-200);
		glVertex3f(0,0,200);

	glEnd();
}

//Creacion de planetas
void sol(float rdS)
{
	glColor3f(1.0,1.0,0.0);
	glutSolidSphere(rdS,60,60);
}

void mercurio(float rd1)
{
	glColor3f(0.4,0.4,0.4);
	glutSolidSphere(rd1,60,60);
}

void venus(float rd2)
{
	glColor3f(1.0,0.2,0.0);
	glutSolidSphere(rd2,60,60);
}

void tierra(float rd3)
{
	glColor3f(0.0,0.4,1.0);
	glutSolidSphere(rd3,60,60);
}

void marte(float rd4)
{
	glColor3f(0.2,0.4,0.3);
	glutSolidSphere(rd4,60,60);
}

void jupiter(float rd5)
{
	glColor3f(0.2,0.2,0.2);
	glutSolidSphere(rd5,60,60);
}

//Saturno + Anillos
void saturno(float rd6)
{
	glColor3f(1.0,0.4,0.0);
	glutSolidSphere(rd6,60,60);
}
void anillos(float rotA)
{
	glColor3f(1,0.6,0);
	glRotatef(rotA,1,0,1);
	glutSolidTorus(3, 20, 10,50);
}
//Fin

void urano(float rd7)
{
	glColor3f(0.2,1.0,0.2);
	glutSolidSphere(rd7,60,60);
}

void neptuno(float rd8)
{
	glColor3f(0.0,0.0,1.0);
	glutSolidSphere(rd8,60,60);
}

//Creacion de estrellas
void estrellas()
{
	int i,j,k; srand(time(NULL));
	int h=0;

	glBegin(GL_POINTS);
		while(h<100)
		{
			i=(rand()%300);
			j=(rand()%300);
			k=(rand()%300);

			glColor3f(1,1,1);
			glVertex3f(i,j,k);
			glVertex3f(i,-j,k);
			glColor3f(0,1,0);
			glVertex3f(-i,-j,k);
			glColor3f(0,0,1);
			glVertex3f(-i,j,-k);
			h++;
		}
	glEnd();
}

/*nave espacia*/
void nave(GLfloat x,GLfloat y, GLfloat z)
{
	//arriba
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.4,0.3); // verde oscuro
		glVertex3f(0+x,0+y,0+z);
		glVertex3f(3+x, 0+y,0+z);
		glVertex3f(1.5+x, 10+y,-4+z);
	glEnd();


	//arriba izquierda
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
		glVertex3f(-1+x,0+y,1.5+z);
		glVertex3f(0+x, 0+y,0+z);
		glVertex3f(1.5+x, 10+y,-4+z);
	glEnd();


	//arriba derecha
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
		glVertex3f(4+x,0+y,1.5+z);
		glVertex3f(3+x, 0+y,0+z);
		glVertex3f(1.5+x, 10+y,-4+z);
	glEnd();


	//base/*
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
		glVertex3f(-1+x,0+y,1.5+z);
		glVertex3f(1.5+x, 10+y,-4+z);
		glVertex3f(4+x, 0+y,1.5+z);
	glEnd();

	/**/
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
			glVertex3f(-1+x,0+y,1.5+z);
			glVertex3f(4+x, 0+y,1.5+z);
			glVertex3f(4+x, -4+y,1.5+z);
			glVertex3f(-1+x, -4+y,1.5+z);
		glEnd();

	//arriba abajo
	glBegin(GL_POLYGON);
	glColor3f(1,1,1); // verde oscuro
		glVertex3f(0+x,0+y,0+z);
		glVertex3f(3+x, 0+y,0+z);

		glVertex3f(4+x, -4+y,1.5+z);
		glVertex3f(-1+x, -4+y,1.5+z);
	glEnd();


	//arriba abajo isquierda
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.4,0.3);
		glVertex3f(4+x,0+y,1.5+z);
		glVertex3f(3+x, 0+y,0+z);
		glVertex3f(4+x, -4+y,1.5+z);
	glEnd();

	//arriba abajo derecha
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.4,0.3);
	glVertex3f(-1+x,0+y,1.5+z);
	glVertex3f(0+x, 0+y,0+z);
	glVertex3f(-1+x, -4+y,1.5+z);
	glEnd();
}

//Teclado
void key(unsigned char key, int x, int y)
{
	switch(key)
	{
	case 27 :
		exit(0);
		break;
	default:
		break;
	}

	glutPostRedisplay();
}

//Redibuja el display
void idle()
{
	glutPostRedisplay();
}
