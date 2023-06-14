#define GL_SILENCE_DEPRECATION

#include <GL/freeglut.h>

#ifdef __APPLE__
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

#include "DDA.h"

void init() { glClearColor(0, 0, 0, 1); }

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    float windowWidth = glutGet(GLUT_WINDOW_WIDTH);
    float windowHeight = glutGet(GLUT_WINDOW_HEIGHT);

    float squareSize = fminf(windowWidth, windowHeight) * 0.9 / 8;

    float centerX = windowWidth / 2.0;
    float centerY = windowHeight / 2.0;

    float boardX = centerX - squareSize * 4;
    float boardY = centerY - squareSize * 4;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            float x = boardX + j * squareSize;
            float y = boardY + i * squareSize;

            int mode = i % 2 == 0 ? Line::DARKED : Line::SIMPLE;

            Line::draw(x, y, x + squareSize, y, mode);
            Line::draw(x + squareSize, y, x + squareSize, y + squareSize, mode);
            Line::draw(x + squareSize, y + squareSize, x, y + squareSize, mode);
            Line::draw(x, y + squareSize, x, y, mode);

            if (i % 2 == j % 2) {
                Line::draw(x, y, x + squareSize, y + squareSize, Line::DASHED);
                Line::draw(x + squareSize, y, x, y + squareSize, Line::DASHED);
            }
        }
    }

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

    int screen_width = glutGet(GLUT_SCREEN_WIDTH);
    int screen_height = glutGet(GLUT_SCREEN_HEIGHT);

    int window_width = screen_width * 0.8;
    int window_height = screen_height * 0.8;

    glutInitWindowPosition((screen_width - window_width) / 2,
                           (screen_height - window_height) / 2);

    glutInitWindowSize(window_width, window_height);
    glutCreateWindow("DDA Chess");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();
    glutMainLoop();
    return 0;
}
