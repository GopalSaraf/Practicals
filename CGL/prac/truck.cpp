#include <GL/freeglut.h>
// #include<GL/gl.h>
#include <iostream>
#include <math.h>
using namespace std;
// int x0,y0,x1,y1;

double ang(int q) { return (double)q * 3.142 / 180; }
void plotpixel(int x, int y) {
    glPointSize(1);
    glBegin(GL_POINTS);
    glVertex2i(x, y);
    glEnd();
    glFlush();
}
void octant(int xc, int yc, int x, int y) {
    plotpixel(xc + x, yc + y);
    plotpixel(xc + y, yc + x);
    plotpixel(xc + y, yc - x);
    plotpixel(xc + x, yc - y);

    plotpixel(xc - x, yc - y);
    plotpixel(xc - y, yc - x);
    plotpixel(xc - y, yc + x);
    plotpixel(xc - x, yc + y);
}
void circle(int xc, int yc, int r) {
    int p = 1 - r;
    int x = 0, y = r;
    while (x < y) {
        octant(xc, yc, x, y);
        x++;
        if (p > 0) {
            y--;
            p = p + 2 * (x - y) + 1;
        } else {
            p = p + 2 * x + 1;
        }
    }
}
void plotpixel(float x, float y) {
    glColor3f(1, 0, 0);
    glPointSize(1);
    glBegin(GL_POINTS);
    glVertex2i(x, y);
    glEnd();
}
void dda(float x0, float y0, float x1, float y1) {
    float dx = x1 - x0;
    float dy = y1 - y0;
    int steps = abs(dx) > abs(dy) ? dx : dy;
    float x = x0;
    float y = y0;
    float xinc, yinc;
    xinc = dx / (float)steps;
    yinc = dy / (float)steps;
    for (int i = 0; i < steps; i++) {
        plotpixel(x, y);
        x += xinc;
        y += yinc;
    }
    glFlush();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    dda(900, 100, 900, 500);
    dda(500, 100, 900, 100);
    dda(500, 500, 900, 500);
    dda(500, 100, 500, 500);

    dda(480, 100, 480, 500);

    dda(200, 500, 480, 500);

    dda(390, 100, 480, 100);
    dda(390, 100, 390, 220);
    dda(280, 220, 390, 220);
    dda(200, 380, 200, 500);
    dda(280, 220, 200, 380);

    // inner squares
    dda(280, 270, 390, 270);
    dda(280, 270, 280, 420);
    dda(280, 420, 390, 420);
    dda(390, 270, 390, 420);

    dda(300, 300, 300, 400);
    dda(300, 300, 370, 300);
    dda(370, 300, 370, 400);
    dda(300, 400, 370, 400);
}
void init() {
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 0, 0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 1000, 1000, 0);
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(1000, 1000);
    glutCreateWindow("TRUCK DDA");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}