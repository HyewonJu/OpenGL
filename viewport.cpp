#include <glut.h>

void myDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glViewport(50, 50, 150, 150);             // Viewport(x, y, width, height)
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.5f, -0.5f, 0.0);
	glVertex3f(0.5f, 0.5f, 0.0);
	glVertex3f(-0.5f, 0.5f, 0.0);
	glVertex3f(-0.5f, -0.5f, 0.0);
	glEnd();
	glFlush();
}

void main(int argc, char ** argv)
{
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowSize(300, 300);               //윈도우 창 크기
	glutInitWindowPosition(0, 0);               // 윈도우 창 시작위치
	glutCreateWindow("Viewport Example");
	glClearColor(0.0, 0.0, 0.0, 0.0);           // black
	glMatrixMode(GL_PROJECTION);                // 투영 좌표계 설정
	glLoadIdentity();                           // 초기화
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);   // viewport 내에 3d 좌표 생성
	glutDisplayFunc(myDisplay);
	glutMainLoop();
}
