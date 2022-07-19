#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255, 0, 0);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(0 ,200);
glVertex2i(640, 200);
glVertex2i(640, 280);
glVertex2i(0, 280);
glEnd();


glBegin(GL_QUADS);
glVertex2i(300 ,0);
glVertex2i(380, 0);
glVertex2i(380, 480);
glVertex2i(300, 480);
glEnd();

glColor3ub (0, 51, 160);
glBegin(GL_TRIANGLES);
glVertex2i(60 ,0);
glVertex2i(280, 0);
glVertex2i(280, 160);
glEnd();


glBegin(GL_TRIANGLES);
glVertex2i(0 ,60);
glVertex2i(200, 180);
glVertex2i(0, 180);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(400 ,0);
glVertex2i(400, 160);
glVertex2i(620, 0);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(640 ,60);
glVertex2i(640, 180);
glVertex2i(440, 180);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(0 ,300);
glVertex2i(200, 300);
glVertex2i(0, 420);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(280 ,480);
glVertex2i(60, 480);
glVertex2i(280, 320);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(400 ,480);
glVertex2i(400, 320);
glVertex2i(620, 480);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(640 ,300);
glVertex2i(640, 420);
glVertex2i(440, 300);
glEnd();



glFlush ();
}

void myInit (void)
{
glClearColor(1, 1, 1, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
