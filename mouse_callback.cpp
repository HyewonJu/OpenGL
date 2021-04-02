#include <glut.h>

GLint topLeftX, topLeftY, bottomRightX, bottomRightY;

void myDisplay()
{
	glViewport(0, 0, 400, 400);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(topLeftX/400.0, (400-topLeftY)/400.0, 0.0);
	glVertex3f(topLeftX/400.0, (400- bottomRightY)/400.0, 0.0);
	glVertex3f(bottomRightX/400.0, (400 - bottomRightY)/400.0, 0.0);
	glVertex3f(bottomRightX/400.0, (400 - topLeftY)/400.0, 0.0);
	glEnd();
	glFlush();
}

void myMouseClick(GLint button, GLint state, GLint x, GLint y)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		topLeftX = x;
		topLeftY = y;
	}
}

void myMouseMotion(GLint x, GLint y)
{
	bottomRightX = x;
	bottomRightY = y;
	glutPostRedisplay();	// 화면을 갱신해라
}

void main(int argc, char ** argv)
{
	glutInitWindowSize(400, 400);	//윈도우 창 크기
	glutCreateWindow("Mouse Callback");
	glClearColor(0, 0, 0, 1);	// black
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, 1, 0, 1, -1, 1);
	glutDisplayFunc(myDisplay);
	glutMouseFunc(myMouseClick);
	glutMotionFunc(myMouseMotion);
	glutMainLoop();
}
