#include <glut.h>
#include <GL.h>
#include <GLU.h>

GLfloat Delta = 0.0;

void myDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-1.0 + Delta, -0.5, 0.0);
	glVertex3f(0.0 + Delta, -0.5, 0.0);
	glVertex3f(0.0 + Delta, 0.5, 0.0);
	glVertex3f(-1.0 + Delta, 0.5, 0.0);
	glEnd();
	glutSwapBuffers();	// 버퍼를 교환한다
}

void myIdle()
{
	Delta = Delta + 0.001;
	glutPostRedisplay();	// 현재 윈도우를 다시 그린다.
}

int main(int argc, char ** argv)
{
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);	// 더블 버퍼를 사용한다
	glutInitWindowSize(300, 300);	//윈도우 창 크기
	glutCreateWindow("Drawing Example");
	glClearColor(1, 1, 1, 1);	// black
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, 1.0, -1.0);
	glutDisplayFunc(myDisplay);
	glutIdleFunc(myIdle);
	glutMainLoop();

	return 0;
}
