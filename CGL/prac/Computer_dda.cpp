#include<windows.h>
#include<iostream>
#include<GL/freeglut.h>
#include<GL/glut.h>
#include<math.h>
using namespace std;
int x0, y_0, x1, y_1;
void display_point(float x, float y)
{
    glColor3f(0, 0, 0);
    glPointSize(1);
    glBegin(GL_POINTS);
    glVertex2i(x, y);
    glEnd();
}

void dda(int x0, int y0, int x1, int y1)
{
    float xinc, yinc;
    float x = x0;
    float y = y0;
    float dx = x1 - x0;
    float dy = y1 - y0;
    int steps = abs(dx) > abs(dy) ? dx : dy;
    xinc = dx / (float)steps;
    yinc = dy / (float)steps;
    for (int i = 0;i < steps;i++)
    {
        display_point(x, y);
        x += xinc;
        y += yinc;
    }
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //outer sqaure
    dda(50, 150, 50, 550);
    dda(550, 150, 550, 550);
    dda(50, 550, 550, 550);
    dda(50, 150, 240, 150); ///small lines
    dda(360, 150, 550, 150);
    //inner sqaure
    dda(100, 200, 100, 500);
    dda(500, 200, 500, 500);
    dda(100, 500, 500, 500);
    dda(100, 200, 500, 200);


    dda(170, 30, 440, 30);
    dda(170, 30, 240, 150);
    dda(440, 30, 360, 150);

    dda(300, 200, 200, 300);
    dda(100, 200, 200, 300);
    dda(300, 200, 400, 400);
    dda(500, 200, 400, 400);


    glFlush();
}
void init()
{

    glClearColor(1, 1, 1, 1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 800, 0, 600);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Computer DDA");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}