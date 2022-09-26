//CARA MEMBUAT POLYGON
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <GL/glut.h>

void polygon(){
    glClear(GL_COLOR_BUFFER_BIT);
      glColor3f(0.1, 0.4, 0.4);

 glBegin(GL_POLYGON);

  glVertex2f(-0.5, -0.5);
  glVertex2f(-0.75, 0);
  glVertex2f(-0.5, 0.5);
  glVertex2f(0, 0.75);
  glVertex2f(0.5, 0.5);
  glVertex2f(0.75, 0);
  glVertex2f(0.5, -0.5);
  glVertex2f(0,-0.75);

 glEnd();
    glLineWidth(4.0);

    glBegin(GL_LINES);

   glColor3f(1.0, 0.0, 1.0);
    glVertex2f(-0.5, -0.5);   // Garis 1 ok
    glVertex2f(-0.75, 0);

    glColor3f(0.7, 1.0, 0.2);
    glVertex2f(-0.75, 0);   // Garis 2 ok
    glVertex2f(-0.5, 0.5);

    glColor3f(0.0, 0.3, 1.0);
    glVertex2f(-0.5, 0.5);  // Garis 3  0k
    glVertex2f(0, 0.75);

    glColor3f(0.2, 1.0, 1.0);
    glVertex2f(0, 0.75);  // Garis 4
    glVertex2f(0.5, 0.5);

     glColor3f(0.3, 1.0, 0.3);
    glVertex2f(0.5, 0.5); // Garis 5 ok
    glVertex2f(0.75, 0);

     glColor3f(1.0, 0.4, 0.0);
    glVertex2f(0.75, 0); // Garis 6 ok
    glVertex2f(0.5, -0.5);

     glColor3f(0.6, 0.4, 0.3);
    glVertex2f(0.5, -0.5); // Garis 7 ok
    glVertex2f(0,-0.75);

     glColor3f(0.4, 0.7, 0.6);
    glVertex2f(0,-0.75);  // Garis 8 ok
    glVertex2f(-0.5, -0.5);

 glEnd();
 glFlush();
}
int main(int argc, char** argv){
 glutCreateWindow("TAMPILAN POLYGON SEGI DELAPAN_E1E121098");
 glutDisplayFunc(polygon);
 glutMainLoop();

}




