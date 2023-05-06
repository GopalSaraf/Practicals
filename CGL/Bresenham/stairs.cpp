#define GL_SILENCE_DEPRECATION

#include <GL/freeglut.h>

#ifdef __APPLE__
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

#include "bresenham.h"

void init() { glClearColor(0, 0, 0, 1); }

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, w, 0, h);
    glMatrixMode(GL_MODELVIEW);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    float w = glutGet(GLUT_WINDOW_WIDTH);
    float h = glutGet(GLUT_WINDOW_HEIGHT);

    float x1 = w * 0.1, y1 = h * 0.15;
    float x2 = w * 0.2, y2 = h * 0.15;
    float x_inc = w * 0.1, y_inc = h * 0.1;
    int num_steps = 15;

    for (int i = 0; i < num_steps; i++) {
        Line::draw(x1, y1, x2, y2, i % 2 == 0 ? Line::DARKED : Line::SIMPLE);

        x1 = x2, y1 = y2;
        i % 2 ? x2 += x_inc : y2 += y_inc;
    }

    glFlush();
}

int main(int args, char** argv) {
    glutInit(&args, argv);
    glutInitDisplayMode(GLUT_RGB);

    int screen_width = glutGet(GLUT_SCREEN_WIDTH);
    int screen_height = glutGet(GLUT_SCREEN_HEIGHT);

    int window_width = screen_width * 0.8;
    int window_height = screen_height * 0.8;

    glutInitWindowPosition((screen_width - window_width) / 2,
                           (screen_height - window_height) / 2);

    glutInitWindowSize(window_width, window_height);
    glutCreateWindow("Bresenham Stairs");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();
    glutMainLoop();
    return 0;
}
