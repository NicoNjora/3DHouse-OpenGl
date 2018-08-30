//#include <GL/glut.h>
//
//void init(void) {
//	glClearColor(1.0, 1.0, 1.0, 1.0);
//
//
//}
//
//void drawRoof() {
//	glClear(GL_COLOR_BUFFER_BIT);
//	// glColor3f(1.0f, 0.0f, 0.0f);
//	glColor3f(0.3, 0.2, 0.0);
//
//	glBegin(GL_LINE_LOOP);//front side of the roof
//	glVertex3f(-0.5f, 0.0f, 1.0f);
//	glVertex3f(0.5f, 0.0f, 1.0f);
//	glVertex3f(0.6f, 0.5f, -0.5f);
//	glVertex3f(-0.4f, 0.5f, -0.5f);
//	glEnd();
//
//	glBegin(GL_LINE_LOOP);//side of the roof
//	glVertex3f(0.5f, 0.0f, 1.0f);
//	glVertex3f(0.6f, 0.5f, -0.5f);
//	glVertex3f(0.7f, 0.0f, -1.0f);
//	glEnd();
//
//	glBegin(GL_LINE_LOOP);// inner side of the roof
//	glVertex3f(0.53f, 0.04f, 1.0f);
//	glVertex3f(0.6f, 0.4f, -0.5f);
//	glVertex3f(0.67f, 0.04f, -1.0f);
//	glEnd();
//
//	glFlush();
//	glBegin(GL_LINE_LOOP);//start of chimney
//	glVertex3f(0.2f, 0.15f, -0.2f);
//	glVertex3f(0.2f, 0.3067f, -0.2f);
//	glVertex3f(0.3f, 0.3067f, -0.2f);
//	glVertex3f(0.3f, 0.15f, -0.2f);
//	glEnd();
//
//
//	glBegin(GL_LINE_LOOP);
//	glVertex3f(0.3f, 0.15f, -0.2f);
//	glVertex3f(0.35f, 0.20f, -0.4f);
//	glVertex3f(0.35f, 0.3467f, -0.4f);
//	glVertex3f(0.3f, 0.3067f, -0.2f);
//	glEnd();
//
//	glBegin(GL_LINE_LOOP);
//	glVertex3f(0.2f, 0.3067f, -0.2f);
//	glVertex3f(0.2678f, 0.4111f, -0.3f);
//	glVertex3f(0.3f, 0.3067f, -0.2f);
//	glEnd();
//
//	glBegin(GL_LINES);
//	glVertex3f(0.2678f, 0.4111f, -0.3f);
//	glVertex3f(0.35f, 0.3467f, -0.4f);
//	glEnd();  //end
//
//	glFlush();
//
//	glBegin(GL_LINE_LOOP);  //start chimney window
//	glColor3f(0.3, 0.2, 0.0);
//	glVertex2f(0.22, 0.19);
//	glVertex2f(0.22, 0.26);
//
//	glVertex2f(0.28, 0.26);
//	glVertex2f(0.28, 0.19);
//	glEnd();   //end chimney window
//
//	glBegin(GL_LINES);  //start chimney partition 
//	glColor3f(0.3, 0.2, 0.0);
//	glVertex2f(0.25, 0.19);
//	glVertex2f(0.25, 0.26);
//	glEnd();   //end chimney partition
//
//	glBegin(GL_LINES);  //start chimney partition 
//	glColor3f(0.3, 0.2, 0.0);
//	glVertex2f(0.22, 0.225);
//	glVertex2f(0.28, 0.225);
//	glEnd();   //end chimney  partition
//
//			   //house frame
//	glBegin(GL_LINE_LOOP);
//	glVertex3f(-0.48f, 0.0f, 1.0f);
//	glVertex3f(0.5f, 0.0f, 1.0f);
//	glVertex3f(0.5f, -0.6f, -1.0f);
//	glVertex3f(-0.48f, -0.6f, -0.5f);
//
//	glEnd();
//	glFlush();
//
//
//	//line from roof (side of the house)
//	glBegin(GL_LINES);
//	glVertex3f(0.7f, 0.0f, -1.0f);
//	glVertex3f(0.7f, -0.5f, 1.0f);
//	glEnd();
//	glFlush();
//
//	//line joining front of the hose to side
//	glBegin(GL_LINES);
//	glVertex3f(0.5f, -0.6f, -1.0f);
//	glVertex3f(0.7f, -0.5f, -0.5f);
//	glEnd();
//	glFlush();
//
//	glBegin(GL_LINE_LOOP);  //start window
//	glColor3f(0.3, 0.2, 0.0);
//	glVertex2f(0.1, -0.4);
//	glVertex2f(0.1, -0.15);
//
//	glVertex2f(0.3, -0.15);
//	glVertex2f(0.3, -0.4);
//	glEnd();   //end window
//
//	glBegin(GL_LINES);  //start partition 
//	glColor3f(0.3, 0.2, 0.0);
//	glVertex2f(0.1, -0.275);
//	glVertex2f(0.3, -0.275);
//	glEnd();   //end partition
//
//	glBegin(GL_LINES);  //start partition 
//	glColor3f(0.3, 0.2, 0.0);
//	glVertex2f(0.2, -0.15);
//	glVertex2f(0.2, -0.4);
//	glEnd();   //end partition
//
//
//	glBegin(GL_LINE_LOOP);  //start frame
//
//	glVertex2f(-0.4, -0.6);
//	glVertex2f(-0.4, -0.15);
//	glVertex2f(-0.1, -0.15);
//	glVertex2f(-0.1, -0.6);
//	glEnd();  //end frame
//
//
//	glBegin(GL_LINE_LOOP);  //start door
//	glColor3f(0.3, 0.2, 0.0);
//	glVertex2f(-0.37, -0.55);
//	glVertex2f(-0.37, -0.2);
//	glVertex2f(-0.25, -0.185);
//	glVertex2f(-0.25, -0.49);
//	glEnd();  //end door
//
//
//	glBegin(GL_LINES);  //start line
//	glColor3f(0.3, 0.2, 0.0);
//	glVertex2f(-0.22, -0.15);
//	glVertex2f(-0.22, -0.5);
//	glEnd();  //end line
//
//	glBegin(GL_LINES);  //start line
//	glColor3f(0.3, 0.2, 0.0);
//	glVertex2f(-0.4, -0.6);
//	glVertex2f(-0.22, -0.5);
//	glEnd();  //end line
//
//	glBegin(GL_LINES);  //start line
//	glColor3f(0.3, 0.2, 0.0);
//	glVertex2f(-0.22, -0.5);
//	glVertex2f(-0.1, -0.5);
//	glEnd();  //end line
//
//
//	glPointSize(5.0);
//	glEnable(GL_POINT_SMOOTH);
//	glBegin(GL_POINTS);
//	glColor3f(0.3, 0.2, 0.0);
//	glVertex2f(-0.27, -0.35);
//	glEnd();  //end knob
//
//	glFlush();
//
//}
//
//int main(int argc, char** argv) {
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//	glutInitWindowPosition(100, 100);
//	glutInitWindowSize(800, 600);
//	glutCreateWindow(argv[0]);
//	init();
//	glutDisplayFunc(drawRoof);
//	glutMainLoop();
//	return 0;
//}