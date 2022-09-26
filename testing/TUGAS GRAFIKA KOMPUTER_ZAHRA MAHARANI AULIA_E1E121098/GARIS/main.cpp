//CARA MEMBUAT GARIS
#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void garis()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 1.0);

    glLineWidth(2.0);
    glBegin(GL_LINES);

    glColor3f(0.0, 0.5, 1.0);     //Warna Biru
    glVertex3f(-0.8, 0.2, 0.0);  // Koordinat Titik 1
    glVertex3f(0.8, 0.2, 0.0);  // Koordinat Titik 2
    glEnd();
    glFlush();
}

void Initialize()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(1.0, 1.0, 1.0, 1.0, 0.0, 0.0);
}

int main(int iArgc, char** cppArgv){
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 500);
    glutInitWindowPosition(100,50);
    glutCreateWindow("TAMPILAN GARIS_ZAHRA MAHARANI AULIA_E1E121098");
    Initialize();
    glutDisplayFunc(garis);
    glutMainLoop();
    return 0;
}
