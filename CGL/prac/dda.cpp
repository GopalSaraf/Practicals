#define GL_SILENCE_DEPRECATION

#include <GL/freeglut.h>
#include <iostream>
using namespace std;

struct Point_ {
    float x, y;

    Point_(float x, float y) : x(x), y(y) {}
};

struct Color_ {
    GLubyte r, g, b;

    Color_(GLubyte r, GLubyte g, GLubyte b) : r(r), g(g), b(b) {}
};

void dda(Point_ p1, Point_ p2, Color_ color = {255, 255, 255}) {
    float x = p1.x;
    float y = p1.y;

    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;

    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float xinc = dx / steps;
    float yinc = dy / steps;

    glBegin(GL_POINTS);
    glColor3ub(color.r, color.g, color.b);
    glVertex2f(x, y);

    for (int i = 0; i < steps; i++) {
        x += xinc;
        y += yinc;
        glVertex2f(x, y);
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

    dda(leftTop, leftBottom);
    dda(leftTop, rightTop);
    dda(leftBottom, rightBottom);
    dda(rightTop, rightBottom);

    dda(leftTop2, leftBottom2);
    dda(leftTop2, rightTop2);
    dda(leftBottom2, rightBottom2);
    dda(rightTop2, rightBottom2);

    dda(mount1leftBot, mount1Mid);
    dda(mount1Mid, mount1rightBot);
    dda(mount2leftBot, mount2Mid);
    dda(mount2Mid, mount2rightBot);

    dda(baseUpperLeft, baseLowerLeft);
    dda(baseLowerLeft, baseLowerRight);
    dda(baseUpperRight, baseLowerRight);

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

    glutCreateWindow("DDA");
    glClearColor(0, 0, 0, 1);

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}