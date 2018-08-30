#include <GL/glut.h>;

void init() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	gluOrtho2D(-5, 10, -5, 10);

}
void simpleLine() {
	glClear(GL_COLOR_BUFFER_BIT);

	glColor4f(0.8, 0.6, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(2.0, 2.0);
	glVertex2f(5.0, 5.0);
	glEnd();
	glFlush();
}
void main(int argc, char** argv) {
	glutInit(&argc, argv);

	glutInitWindowPosition(50, 100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Simple Line");
	init();
	glutDisplayFunc(simpleLine);
	glutMainLoop;
}