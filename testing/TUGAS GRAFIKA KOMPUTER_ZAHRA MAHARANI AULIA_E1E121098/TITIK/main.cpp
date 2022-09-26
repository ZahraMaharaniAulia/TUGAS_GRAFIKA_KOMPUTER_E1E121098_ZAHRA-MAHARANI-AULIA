//TUGAS GRAFIKA KOMPUTER MEMBUAT TITIK
#include <windows.h>
#ifdef _APPLE_
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>


void Draw() {
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(2.4);                   // ukuran titiknya
glBegin(GL_POINTS);                 // awal kode untuk menggambar//

glColor3f(1.0, 0.0, 0.1);           // warna merah
glVertex3f(0.2, 0.2, 0.0);          // posisi titik yang akan digambar

glColor3f(0.0, 1.0, 1.0);           // warna cyan
glVertex3f(0.2, 0.4, 0.2);

glColor3f(0.1, 3.1, 0.0);           // warna Hijau
glVertex3f(0.4, 0.4, 0.0);

glColor3f(1.0, 0.5, 1.0);           // Ini pink
glVertex3f(0.4, 0.6, 0.0);

glColor3f(1.0, 1.4, 0.0);           //  warna Kuning
glVertex3f(0.6, 0.8, 0.0);

glColor3f(0.0, 0.0, 1.0);           // warna biru
glVertex3f(0.6, 0.6, 0.0);

glEnd();                            // akhir kode untuk menggambar
glFlush();                          // memastikan bahwa kode dieksekusi
}



void Initialize() {
glClearColor(0.0, 0.0 ,0.0, 0.0);    //WARNA BACKGROUND OUPUTNYA
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}



int main(int iArgc, char** cppArgv) {
glutInit(&iArgc, cppArgv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(300, 300);
glutInitWindowPosition(250, 250);
glutCreateWindow("TAMPILAN TITIK by Zahra Maharani Aulia_E1E121098");  //TAMPILAN JENDELA OUPUTNYA
Initialize();
glutDisplayFunc(Draw);
glutMainLoop();
return 0;
}

