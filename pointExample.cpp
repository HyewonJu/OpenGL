#include <glut.h>
#include <math.h>
#define PI 3.14

void myDisplay()
{
	GLfloat size[2];
	GLfloat angle;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glGetFloatv(GL_POINT_SIZE_RANGE, size);
	glPointSize((size[1]-size[0])/2.0+size[0]);
	//glPointSize(size[1]);
	glBegin(GL_POINTS);
	for (angle = 0.0; angle <= 2.0*PI; angle += PI / 30.0)
		glVertex3f(0.5*cos(angle), 0.5*sin(angle), 0.0);
	glEnd();
	glFlush();
}

void main(int argc, char ** argv)
{
	glutCreateWindow("Point Example");
	glutDisplayFunc(myDisplay);
	glutMainLoop();	
}
