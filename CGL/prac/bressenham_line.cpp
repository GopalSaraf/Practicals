#define GL_SILENCE_DEPRECATION

#include <GL/freeglut.h>
#include <iostream>

using namespace std;

struct Point_ {
    int x, y;

    Point_(int x, int y) : x(x), y(y) {}
};

struct Color_ {
    GLubyte r, g, b;

    Color_(GLubyte r, GLubyte g, GLubyte b) : r(r), g(g), b(b) {}
};

void bressenham(Point_ p1, Point_ p2, Color_ color = {255, 255, 255}) {
    int x1 = p1.x, y1 = p1.y, x2 = p2.x, y2 = p2.y;
    int dx, dy, i, e;
    int incx, incy, inc1, inc2;
    int x, y;

    dx = x2 - x1;
    dy = y2 - y1;

    if (dx < 0) dx = -dx;
    if (dy < 0) dy = -dy;

    incx = 1;
    incy = 1;

    if (x2 < x1) incx = -1;
    if (y2 < y1) incy = -1;

    x = x1;
    y = y1;

    glBegin(GL_POINTS);
    glColor3ub(color.r, color.g, color.b);

    if (dx > dy) {
        glVertex2i(x, y);
        e = 2 * dy - dx;
        inc1 = 2 * (dy - dx);
        inc2 = 2 * dy;
        for (i = 0; i < dx; i++) {
            x += incx;
            glVertex2i(x, y);

            if (e >= 0) {
                y += incy;
                e += inc1;
            } else
                e += inc2;
        }

    } else {
        glVertex2i(x, y);
        e = 2 * dx - dy;
        inc1 = 2 * (dx - dy);
        inc2 = 2 * dx;
        for (i = 0; i < dy; i++) {
            y += incy;
            glVertex2i(x, y);

            if (e >= 0) {
                x += incx;
                e += inc1;
            } else
                e += inc2;
        }
    }

    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    int width = glutGet(GLUT_WINDOW_WIDTH);
    int height = glutGet(GLUT_WINDOW_HEIGHT);

    Point_ leftTop(width * 0.25, height * 0.75);
    Point_ leftBottom(width * 0.25, height * 0.25);
    Point_ rightTop(width * 0.75, height * 0.75);
    Point_ rightBottom(width * 0.75, height * 0.25);

    Point_ leftTop2(width * 0.30, height * 0.70);
    Point_ leftBottom2(width * 0.30, height * 0.30);
    Point_ rightTop2(width * 0.70, height * 0.70);
    Point_ rightBottom2(width * 0.70, height * 0.30);

    Point_ mount1leftBot(width * 0.30, height * 0.30);
    Point_ mount1Mid(width * 0.40, height * 0.60);
    Point_ mount1rightBot(width * 0.50, height * 0.30);

    Point_ mount2leftBot(width * 0.50, height * 0.30);
    Point_ mount2Mid(width * 0.60, height * 0.65);
    Point_ mount2rightBot(width * 0.70, height * 0.30);

    Point_ baseUpperLeft(width * 0.45, height * 0.25);
    Point_ baseUpperRight(width * 0.55, height * 0.25);
    Point_ baseLowerLeft(width * 0.40, height * 0.20);
    Point_ baseLowerRight(width * 0.60, height * 0.20);

    bressenham(leftTop, leftBottom);
    bressenham(leftTop, rightTop);
    bressenham(leftBottom, rightBottom);
    bressenham(rightTop, rightBottom);

    bressenham(leftTop2, leftBottom2);
    bressenham(leftTop2, rightTop2);
    bressenham(leftBottom2, rightBottom2);
    bressenham(rightTop2, rightBottom2);

    bressenham(mount1leftBot, mount1Mid);
    bressenham(mount1Mid, mount1rightBot);
    bressenham(mount2leftBot, mount2Mid);
    bressenham(mount2Mid, mount2rightBot);

    bressenham(baseUpperLeft, baseLowerLeft);
    bressenham(baseLowerLeft, baseLowerRight);
    bressenham(baseUpperRight, baseLowerRight);

    glFlush();
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, w, 0, h);
    glMatrixMode(GL_MODELVIEW);
}

int main(int args, char** argv) {
    glutInit(&args, argv);
    glutInitDisplayMode(GLUT_RGB);

    int width = glutGet(GLUT_SCREEN_WIDTH);
    int height = glutGet(GLUT_SCREEN_HEIGHT);

    glutInitWindowSize(width * 0.8, height * 0.8);
    glutInitWindowPosition((width * 0.2) / 2, (height * 0.2) / 2);

    glutCreateWindow("bressenham");
    glClearColor(0, 0, 0, 1);

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}