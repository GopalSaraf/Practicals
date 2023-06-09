#include <GL/freeglut.h>

int x1 = 0, y1 = 0;
int length = 100;

int velocity = 3;

void display() {
    // clear window and set foreground color to white and create a polygon
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    gluOrtho2D(0, 500, 0, 500);
    glColor3f(1.0, 1.0, 1.0);

    glBegin(GL_QUADS);
    glVertex2i(x1, y1);
    glVertex2i(x1 + length, y1);
    glVertex2i(x1 + length, y1 + length);
    glVertex2i(x1, y1 + length);
    glEnd();

    // appply rotation and draw the polygon again
    // glRotatef(45, 0, 0, 1);
    // glColor3f(0.0, 0.0, 1.0);

    // glBegin(GL_QUADS);
    // glVertex2i(x1, y1);
    // glVertex2i(x1 + length, y1);
    // glVertex2i(x1 + length, y1 + length);
    // glVertex2i(x1, y1 + length);
    // glEnd();

    glFlush();
}

void update(int _) {
    x1 += velocity;
    y1 += velocity;

    if (x1 > 400) {
        velocity = -3;
    } else if (x1 < 0) {
        velocity = 3;
    }

    glutTimerFunc(1000 / 60, update, 0);
    glutPostRedisplay();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(500, 500);
    glEnable(GL_DEPTH_TEST);
    glutCreateWindow("Box Animation");
    glutDisplayFunc(display);
    glutTimerFunc(1000 / 60, update, 0);

    glutMainLoop();
}