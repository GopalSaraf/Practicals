#include <iostream>
#include <GL/freeglut.h>

#include <math.h>
using namespace std;
int cx = 400, cy = 400, R = 80;
struct color {
    GLubyte r, g, b;
};
double ang(int a) { return (double)a * (3.142 / 180); }
void plotpixel(int x, int y) {
    glPointSize(1.5);
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
    int x = 0;
    int y = r;
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
void drawcircle(int x, int y, int r) {
    circle(x, y, r);
    circle(x, y, r + 10);
    circle(x + r * cos(ang(0)), y + r * cos(ang(0)), (r - 60));
    circle(x + 1.4 * r * cos(ang(247)), y + 1.4 * r * sin(ang(247)), (r - 60));
    circle(x + 1.4 * r * cos(ang(-247)), y + 1.4 * r * sin(ang(-247)),
           (r - 60));
    circle(x - 1.4 * r * cos(ang(247)), y - 1.4 * r * sin(ang(247)), (r - 60));
    circle(x + 1.3 * r * cos(ang(220)), y - 1.3 * r * cos(ang(220)), (r - 60));
    circle(x + 1.4 * r * cos(ang(290)), y + 1.4 * r * sin(ang(290)), (r - 60));
    circle(x + 1.4 * r * cos(ang(335)), y + 1.4 * r * sin(ang(335)), (r - 60));
    circle(x + 1.4 * r * cos(ang(383)), y + 1.4 * r * sin(ang(383)), (r - 60));

    circle(x - 2 * r * cos(ang(60)), y - 2 * r * cos(ang(60)), (r - 60));
    circle(x + 2 * r * cos(ang(60)), y - 2 * r * cos(ang(60)), (r - 60));
    circle(x - 2 * r * cos(ang(60)), y + 2 * r * cos(ang(60)), (r - 60));
    circle(x + 2 * (r - 25) * cos(ang(-90)), y + 2 * (r - 25) * sin(ang(-90)),
           (r - 60));
    circle(x - 2 * (r - 25) * cos(ang(90)), y + 2 * (r - 25) * sin(ang(90)),
           (r - 60));

    circle(x + 2 * (r - 25) * cos(ang(-172)), y + 2 * (r - 25) * sin(ang(-172)),
           (r - 60));

    circle(x - 2 * (r - 25) * cos(ang(180)), y + 2 * (r - 25) * sin(ang(180)),
           (r - 60));
    // circle(x+2*(r-10)*cos(ang(110)),y+2*(r-10)*cos(ang(-110)),(r-60));
    // circle(x-2*(r-10)*cos(ang(270)),y+2*(r-10)*sin(ang(270)),(r-60));
}
void draw() { drawcircle(cx, cy, R); }
void init() {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    gluOrtho2D(0, 800, 0, 800);
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("BRESENHAM CIRCLE");
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
}
