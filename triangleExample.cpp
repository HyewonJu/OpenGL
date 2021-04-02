#include <glut.h>

void myDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
  //glShadeModel(GL_SMOOTH);    // 그라데이션으로 색칠
	glShadeModel(GL_FLAT);        // 단색으로 색칠
	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(0.0, 0.5, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-0.5, -0.5, 0.0);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(0.5, -0.5, 0.0);
	glEnd();
	glFlush();
}

void main(int argc, char ** argv)
{
	glutCreateWindow("Triangle Example");
	glutDisplayFunc(myDisplay);
	glutMainLoop();
}
