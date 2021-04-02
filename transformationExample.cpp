#include <glut.h>
#include <glu.h>
#include <gl.h>

void myDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glViewport(0, 0, 300, 300);
	glMatrixMode(GL_MODELVIEW);

	// 빨간 사각형
	glColor3f(1.0, 0.0, 0.0);
	glLoadIdentity();
	glutSolidCube(0.3);
	// 녹색 사각형 : 이동 후, 반시계 45도 회전
	glColor3f(0.0, 1.0, 0.0);
	glLoadIdentity();
	glRotatef(45.0, 0.0, 0.0, 1.0);
	glTranslatef(0.6, 0.0, 0.0);
	glutSolidCube(0.3);
	// 파란 사각형 : 반시계 45도 회전 후, 이동
	glColor3f(0.0, 0.0, 1.0);
	glLoadIdentity();
	glTranslatef(0.6, 0.0, 0.0);
	glRotatef(45.0, 0.0, 0.0, 1.0);
	glutSolidCube(0.3);

	glFlush();
}

int main(int argc, char ** argv)
{
	glutInitDisplayMode(GLUT_RGBA);
	glutInitWindowSize(300, 300);
	glutCreateWindow("Example");
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
	glutDisplayFunc(myDisplay);
	glutMainLoop();

	return 0;
}
