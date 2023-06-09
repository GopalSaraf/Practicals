
#include <iostream>
#include <GL/freeglut.h>
#include <math.h>
using namespace std;
int cx = 300, cy = 300, R = 70;
struct color {
    GLubyte r, g, b;
};
double ang(int q) { return (double)q * 3.142 / 180; }

void init() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0, 0, 0, 0);
    glColor3f(1, 0, 0);
    gluOrtho2D(0, 600, 0, 600);
}
void circle(int centerX, int centerY, int radius) {
    int x = 0;
    int y = radius;
    int d = 3 - 2 * radius;

    while (x <= y) {
        glBegin(GL_POINTS);
        glVertex2f(centerX + x, centerY + y);
        glVertex2f(centerX - x, centerY + y);
        glVertex2f(centerX + x, centerY - y);
        glVertex2f(centerX - x, centerY - y);
        glVertex2f(centerX + y, centerY + x);
        glVertex2f(centerX - y, centerY + x);
        glVertex2f(centerX + y, centerY - x);
        glVertex2f(centerX - y, centerY - x);
        glEnd();

        if (d >= 0) {
            d = d + 4 * (x - y) + 10;
            y--;
        } else {
            d = d + 4 * x + 6;
                }
        x++;
    }
}
void draw_circles(int x, int y, int r) {
    circle(x, y, r);
    circle(x, 200, (r - 40));
    circle(x, 140, (r - 40));

    circle(x + 1.5 * r * cos(ang(50)), y + 1.4 * r * sin(ang(50)), r - 40);
    circle(x + 2.2 * r * cos(ang(50)), y + 2.3 * r * sin(ang(50)), r - 40);
    circle(x + 3.0 * r * cos(ang(50)), y + 3.2 * r * sin(ang(50)), r - 40);
    circle(x + 4 * r * cos(ang(50)), y + 4 * r * sin(ang(50)), r - 40);

    circle(x + 1.5 * r * cos(ang(130)), y + 1.4 * r * sin(ang(130)), r - 40);
    circle(x + 2.2 * r * cos(ang(130)), y + 2.3 * r * sin(ang(130)), r - 40);
    circle(x + 3.0 * r * cos(ang(130)), y + 3.2 * r * sin(ang(130)), r - 40);
    circle(x + 4 * r * cos(ang(130)), y + 4 * r * sin(ang(130)), r - 40);
    circle(x + 1.5 * r * cos(ang(237)), y + 1.4 * r * sin(ang(237)), r - 40);
    circle(x + 1.5 * r * cos(ang(305)), y + 1.4 * r * sin(ang(305)), r - 40);
}
void draw() {
    glClear(GL_COLOR_BUFFER_BIT);

    draw_circles(cx, cy, R);
    glFlush();
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Necklace");
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
}