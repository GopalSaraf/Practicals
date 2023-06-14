#define GL_SILENCE_DEPRECATION

#include <GL/glut.h>
#include <stdio.h>
#include <math.h>

int length, xi, yi, choice;
double angle, ET[3][3], ETResult[3][3];

void drawET(double ET[3][3]) {
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 3; i++) {
        glVertex2d(ET[i][0], ET[i][1]);
    }
    glEnd();
    glFlush();
}

void Display() {
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    gluOrtho2D(-320, 320, -240, 240);
    glColor3f(1, 1, 1);

    glBegin(GL_LINES);
    glVertex2d(-320, 0);
    glVertex2d(320, 0);
    glVertex2d(0, -240);
    glVertex2d(0, 240);
    glEnd();

    glColor3f(1, 0, 0);
    drawET(ET);

    glFlush();
}

void mult3X3(double ET[3][3], double temp[3][3]) {
    double sum;
    int i, j, k;
    double ETResult[3][3];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum = 0;
            for (k = 0; k < 3; k++) {
                sum += ET[i][k] * temp[k][j];
            }
            ETResult[i][j] = sum;
        }
    }

    // Copy ETResult to ET
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            ET[i][j] = ETResult[i][j];
        }
    }
}

void translationET() {
    double tx, ty;
    double temp[3][3];

    printf("\nTranslating Equilateral triangle");
    printf("\nEnter Tx: ");
    scanf("%lf", &tx);
    printf("Enter Ty: ");
    scanf("%lf", &ty);

    temp[0][0] = 1;
    temp[0][1] = 0;
    temp[0][2] = 0;
    temp[1][0] = 0;
    temp[1][1] = 1;
    temp[1][2] = 0;
    temp[2][0] = tx;
    temp[2][1] = ty;
    temp[2][2] = 1;

    mult3X3(ET, temp);

    glColor3f(0.0, 1.0, 0.0);
    drawET(ET);
}

void rotationET() {
    double angle;
    double temp[3][3];

    printf("\n** ROTATION **\n");
    printf("Enter Angle (in degrees): ");
    scanf("%lf", &angle);

    angle = angle * (M_PI / 180);

    temp[0][0] = cos(angle);
    temp[0][1] = sin(angle);
    temp[0][2] = 0;
    temp[1][0] = -sin(angle);
    temp[1][1] = cos(angle);
    temp[1][2] = 0;
    temp[2][0] = 0;
    temp[2][1] = 0;
    temp[2][2] = 1;

    mult3X3(ET, temp);

    glColor3f(0.0, 1.0, 0.0);
    drawET(ET);
}

void reflectX() {
    double temp[3][3];

    temp[0][0] = 1;
    temp[0][1] = 0;
    temp[0][2] = 0;
    temp[1][0] = 0;
    temp[1][1] = -1;
    temp[1][2] = 0;
    temp[2][0] = 0;
    temp[2][1] = 0;
    temp[2][2] = 1;

    mult3X3(ET, temp);

    glColor3f(0.0, 1.0, 0.0);
    drawET(ET);
}

void reflectY() {
    double temp[3][3];

    temp[0][0] = -1;
    temp[0][1] = 0;
    temp[0][2] = 0;
    temp[1][0] = 0;
    temp[1][1] = 1;
    temp[1][2] = 0;
    temp[2][0] = 0;
    temp[2][1] = 0;
    temp[2][2] = 1;

    mult3X3(ET, temp);

    glColor3f(0.0, 1.0, 0.0);
    drawET(ET);
}

void scaleET() {
    double sx, sy;
    double temp[3][3];

    printf("\nScaling Equilateral triangle");
    printf("\nSx: ");
    scanf("%lf", &sx);
    printf("Sy: ");
    scanf("%lf", &sy);

    temp[0][0] = sx;
    temp[0][1] = 0;
    temp[0][2] = 0;
    temp[1][0] = 0;
    temp[1][1] = sy;
    temp[1][2] = 0;
    temp[2][0] = 0;
    temp[2][1] = 0;
    temp[2][2] = 1;

    mult3X3(ET, temp);

    glColor3f(1.0, 1.0, 0.0);
    drawET(ET);
}

void Menu(int item) {
    switch (item) {
        case 1:
            translationET();
            break;
        case 2:
            rotationET();
            break;
        case 3:
            reflectX();
            break;
        case 4:
            reflectY();
            break;
        case 5:
            scaleET();
            break;
        case 6:
            exit(0);
            break;
    }
}

int main(int argc, char **argv) {
    printf("Enter X-coordinate of the Base point: ");
    scanf("%d", &xi);
    printf("Enter Y-coordinate of the Base point: ");
    scanf("%d", &yi);
    printf("Enter length of sides: ");
    scanf("%d", &length);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            ET[i][j] = 0.0;
        }
    }

    ET[0][0] = xi;
    ET[0][1] = yi;
    ET[0][2] = 1;
    ET[1][0] = xi + length;
    ET[1][1] = yi;
    ET[1][2] = 1;
    ET[2][0] = xi + length / 2;
    ET[2][1] = yi + (length * sqrt(3)) / 2;
    ET[2][2] = 1;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutCreateWindow("2D Transformations");
    glutDisplayFunc(Display);

    glutCreateMenu(Menu);
    glutAddMenuEntry("Translate", 1);
    glutAddMenuEntry("Rotate", 2);
    glutAddMenuEntry("Reflect about X-axis", 3);
    glutAddMenuEntry("Reflect about Y-axis", 4);
    glutAddMenuEntry("Scale", 5);
    glutAddMenuEntry("Exit", 6);
    glutAttachMenu(GLUT_RIGHT_BUTTON);

    glutMainLoop();
    return 0;
}
