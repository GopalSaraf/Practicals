

// #include <GL/gl.h>
#include <GL/freeglut.h>

void setpixel(GLint x, GLint y) {
    glBegin(GL_POINTS);
    glVertex2i(x, y);
    glEnd();
}

void DDA(float x1, float y1, float x2, float y2) {
    float dx, dy, xin, yin, steps, x, y;

    dx = x2 - x1;
    dy = y2 - y1;

    x = x1;
    y = y1;

    if (dx >= dy) {
        steps = dx;
    } else {
        steps = dy;
    }

    xin = dx / steps;
    yin = dy / steps;
    setpixel(x, y);

    for (int i = 0; i <= steps; i++) {
        if (i % 5 / 3 == 0) {
            setpixel(x, y);
        }
        x = x + xin;
        y = y + yin;
        glFlush();
    }
}

void draw() {
    glClear(GL_COLOR_BUFFER_BIT);
    DDA(100, 100, 600, 100);
    DDA(100, 100, 100, 600);
    DDA(100, 600, 600, 600);
    DDA(600, 100, 600, 600);

    DDA(100, 350, 350, 600);
    DDA(350, 600, 600, 350);
    DDA(350, 100, 100, 350);
    DDA(350, 100, 600, 350);

    DDA(225, 225, 225, 350 + 127);
    DDA(225, 350 + 127, 350 + 127, 350 + 127);
    DDA(225, 225, 350 + 127, 225);
    DDA(350 + 127, 225, 350 + 127, 350 + 127);
    glFlush();
}

void init() {
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(1024, 768);
    glutCreateWindow("Diamond");
    glClearColor(0.0, 0.0, 0.0, 0);
    glColor3f(1.0, 1.0, 1.0);
    gluOrtho2D(0, 1024, 0, 768);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}
