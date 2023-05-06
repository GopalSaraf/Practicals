#define GL_SILENCE_DEPRECATION

#include <GL/freeglut.h>
#include <cmath>

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

    float windowWidth = glutGet(GLUT_WINDOW_WIDTH);
    float windowHeight = glutGet(GLUT_WINDOW_HEIGHT);

    // Draw the middle circle
    Circle middleCircle(windowWidth / 2, windowHeight / 4,
                        fminf(windowWidth, windowHeight) * 0.2, 1.0, 1.0, 1.0);
    middleCircle.draw();

    // Draw the smaller circles on both sides in a parabolic shape
    float y = windowHeight / 2 - 0.09 * windowHeight;
    float a = 0.5 * windowHeight * windowHeight;

    for (int i = 0; i < 6; i++) {
        float x = windowWidth / 2 + (i + 1) * 0.08 * windowWidth;
        int radius = sqrt(2 * a / (y - windowHeight / 3));
        Circle leftCircle(x + radius, y, radius, 1.0, 1.0, 1.0);
        leftCircle.draw();

        x = windowWidth / 2 - (i + 1) * 0.08 * windowWidth;
        Circle rightCircle(x - radius, y, radius, 1.0, 1.0, 1.0);
        rightCircle.draw();

        y += 0.06 * windowHeight + radius * 0.2;
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
    glutCreateWindow("Bresenham Circle Necklace");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();
    glutMainLoop();
    return 0;
}
