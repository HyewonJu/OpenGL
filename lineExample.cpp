// 그라데이션 선 그리기

#include <glut.h>

void myDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glLineWidth(5.0);           // 선 두께
	glColor3f(1.0, 0.0, 0.0);   // 빨간색
	glVertex3f(1.0, 0.0, 0.0);
	glColor3f(0.0, 1.0, 0.0);   // 초록색
	glVertex3f(-1.0, 0.0, 0.0);
	glEnd();
	glFlush();
}

void main(int argc, char ** argv)
{
	glutCreateWindow("Line Example");
	glutDisplayFunc(myDisplay);
	glutMainLoop();
}
