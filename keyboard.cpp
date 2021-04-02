#include <glut.h>
#include <stdlib.h>

void myDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.5f, -0.5f, 0.0);
	glVertex3f(0.5f, 0.5f, 0.0);
	glVertex3f(-0.5f, 0.5f, 0.0);
	glVertex3f(-0.5f, -0.5f, 0.0);
	glEnd();
	glFlush();
}

void myKeyBoard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 'Q':
	case 'q':
	case 27:	// ESC
		exit(0);
		break;
	}

}

void main(int argc, char ** argv)
{
	glutInitWindowSize(300, 300);	//윈도우 창 크기
	glutCreateWindow("KeyBoard Func Example");
	glClearColor(0.0, 0.0, 0.0, 1.0);	// black
	glutDisplayFunc(myDisplay);
	glutKeyboardFunc(myKeyBoard);
	glutMainLoop();
}
