#include <glut.h>

void myDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 0.0); // 노란색
	glutSolidTeapot(0.5); // Solid teapot size : 0.5
	glColor3f(1.0, 0.0, 0.0); // 빨간색
	glutWireTeapot(0.3); // Wire teapot size : 0.5

	glFlush(); // 그래픽 프로그래밍한 것을 실행해라
}

void main(int argc, char **argv)
{
	glutCreateWindow("Teapot");
	glClearColor(0.0, 0.0, 0.0, 1.0); // 창의 배경색 : (R, G, B, Opacity), opacity : 1에 가까울 수록 불투명
	glutDisplayFunc(myDisplay);
	glutMainLoop();
}
