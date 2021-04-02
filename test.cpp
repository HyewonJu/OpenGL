#include <windows.h>
#include <glut.h>

void reshape(int w, int h) 
{
	glLoadIdentity(); 
	glViewport(0, 0, w, h); // 좌측하단 : (0, 0)에서부터 창의 너비:w, 창의 높이:h
	gluOrtho2D(0.0, 100.0, 0.0, 100.0);
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT); // 화면을 지우고
	glColor3f(1.0, 0.0, 0.0); // (R, G, B)=(1, 0, 0) : 빨간색, 1이 제일 큰값
	glRectf(30.0, 30.0, 50.0, 50.0); // 창에서 사각형 좌측하단좌표:(30, 30), 우측상단좌표:(50, 50)
	glutSwapBuffers(); // 그래픽카드 메모리에 그린 것을 화면에 나타내라
}

void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutCreateWindow("example");
	glutReshapeFunc(reshape); // 창의 크기를 변경하다가 놓았을 떄 위치 결정
	glutDisplayFunc(display); // 가려졌다가 display 되었을 때 호출되는 함수
	glutMainLoop();
}
