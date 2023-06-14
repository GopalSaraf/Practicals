#include <GL/freeglut.h>
#include <cmath>

float rad(float deg) {
    const float PI = 3.14;
    return deg * PI / 180;
}

void koch(float x1, float y1, float x2, float y2, float n) {
    float x3 = (2 * x1 + x2) / 3;
    float y3 = (2 * y1 + y2) / 3;
    float x4 = (x1 + 2 * x2) / 3;
    float y4 = (y1 + 2 * y2) / 3;
    float x = x3 + (x4 - x3) * sin(rad(30)) + (y4 - y3) * cos(rad(30));
    float y = y3 - (x4 - x3) * sin(rad(60)) + (y4 - y3) * cos(rad(60));

    if (n > 0) {
        koch(x1, y1, x3, y3, n - 1);
        koch(x3, y3, x, y, n - 1);
        koch(x, y, x4, y4, n - 1);
        koch(x4, y4, x2, y2, n - 1);
    } else {
        glBegin(GL_LINE_STRIP);
        glClearColor(1.0, 1.0, 1.0, 0.0);
        glColor3f(0.0, 1.0, 1.0);
        glVertex2f(x1, y1);
        glColor3f(0.0, 1.0, 1.0);
        glVertex2f(x3, y3);
        glColor3f(1.0, 1.0, 0.0);
        glVertex2f(x, y);
        glColor3f(1.0, 0.0, 1.0);
        glVertex2f(x4, y4);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2f(x2, y2);
        glEnd();
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glColor3f(0.0, 0.0, 0.0);
    glLoadIdentity();

    float windowWidth = glutGet(GLUT_WINDOW_WIDTH);
    float windowHeight = glutGet(GLUT_WINDOW_HEIGHT);
    gluOrtho2D(0, windowWidth, 0, windowHeight);

    float x1 = windowWidth * 0.5, y1 = windowHeight * 0.9;
    float x2 = windowWidth * 0.3, y2 = windowHeight * 0.3;
    float x3 = windowWidth * 0.7, y3 = windowHeight * 0.3;

    float n = 5;

    koch(x1, y1, x2, y2, n);
    koch(x3, y3, x1, y1, n);
    koch(x2, y2, x3, y3, n);

    glFlush();
}

int main(int argv, char **argc) {
    glutInit(&argv, argc);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    int screen_width = glutGet(GLUT_SCREEN_WIDTH);
    int screen_height = glutGet(GLUT_SCREEN_HEIGHT);

    int window_width = screen_width * 0.8;
    int window_height = screen_height * 0.8;

    glutInitWindowPosition((screen_width - window_width) / 2,
                           (screen_height - window_height) / 2);

    glutInitWindowSize(window_width, window_height);

    glutCreateWindow("KOCH CURVE");

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}