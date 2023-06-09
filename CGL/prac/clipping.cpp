#include <GL/glut.h>

float smallWindowMinX = 50, smallWindowMinY = 50;
float smallWindowMaxX = 100, smallWindowMaxY = 100;
float viewportXMin = 150, viewportYMin = 150;
float viewportXMax = 400, viewportYMax = 400;

// Bit codes for the right, left, top, & bottom
const int RIGHT = 0b1000;
const int LEFT = 0b0010;
const int TOP = 0b0100;
const int BOTTOM = 0b0001;

// Compute the region code for a given point (x, y)
int computeOutCode(float x, float y) {
    int code = 0b0000;
    if (y > smallWindowMaxY)  // Above the clip window
        code |= TOP;
    else if (y < smallWindowMinY)  // Below the clip window
        code |= BOTTOM;
    if (x > smallWindowMaxX)  // To the right of the clip window
        code |= RIGHT;
    else if (x < smallWindowMinX)  // To the left of the clip window
        code |= LEFT;
    return code;
}

// Function to perform Cohen-Sutherland line clipping
void clipLine(float x0, float y0, float x1, float y1) {
    int outcode0, outcode1, outcodeOut;

    outcode0 = computeOutCode(x0, y0);
    outcode1 = computeOutCode(x1, y1);

    while (true) {
        if (outcode0 == 0 && outcode1 == 0) {
            float scaleX = (viewportXMax - viewportXMin) /
                           (smallWindowMaxX - smallWindowMinX);
            float scaleY = (viewportYMax - viewportYMin) /
                           (smallWindowMaxY - smallWindowMinY);

            float viewportX0 = viewportXMin + (x0 - smallWindowMinX) * scaleX;
            float viewportY0 = viewportYMin + (y0 - smallWindowMinY) * scaleY;
            float viewportX1 = viewportXMin + (x1 - smallWindowMinX) * scaleX;
            float viewportY1 = viewportYMin + (y1 - smallWindowMinY) * scaleY;

            glColor3f(1.0, 1.0, 0.0);
            glBegin(GL_LINES);
            glVertex2d(viewportX0, viewportY0);
            glVertex2d(viewportX1, viewportY1);
            glEnd();
            break;
        } else if ((outcode0 & outcode1) != 0) {
            break;
        } else {
            float x, y;
            outcodeOut = outcode0 != 0 ? outcode0 : outcode1;
            // Compute the intersection point
            float m = (y1 - y0) / (x1 - x0);

            if ((outcodeOut & TOP) != 0) {
                x = x0 + (smallWindowMaxY - y0) / m;
                y = smallWindowMaxY;
            } else if (outcodeOut & BOTTOM) {
                x = x0 + (smallWindowMinY - y0) / m;
                y = smallWindowMinY;
            } else if (outcodeOut & RIGHT) {
                y = y0 + (smallWindowMaxX - x0) * m;
                x = smallWindowMaxX;
            } else {
                y = y0 + (smallWindowMinX - x0) * m;
                x = smallWindowMinX;
            }

            if (outcodeOut == outcode0) {
                x0 = x;
                y0 = y;
                outcode0 = computeOutCode(x0, y0);
            } else {
                x1 = x;
                y1 = y;
                outcode1 = computeOutCode(x1, y1);
            }
        }
    }
}

void display() {
    gluOrtho2D(0.0, 500.0, 0.0, 500.0);

    // float x0 = 60, y0 = 20, x1 = 80, y1 = 120;
    // float x2 = 60, y2 = 20, x3 = 100, y3 = 80;
    // float x4 = 100, y4 = 80, x5 = 40, y5 = 80;
    // float x6 = 40, y6 = 80, x7 = 80, y7 = 120;

    float poly_start_x = 60, poly_start_y = 40;
    float poly_end_x = 80, poly_end_y = 110;

    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glLineWidth(2);

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    // glVertex2d(x0, y0);
    // glVertex2d(x1, y1);
    // glVertex2d(x2, y2);
    // glVertex2d(x3, y3);
    // glVertex2d(x4, y4);
    // glVertex2d(x5, y5);
    // glVertex2d(x6, y6);
    // glVertex2d(x7, y7);
    glVertex2d(poly_start_x, poly_start_y);
    // glVertex2d(poly_end_x, poly_start_y);
    glVertex2d(poly_end_x, poly_end_y);
    // glVertex2d(poly_start_x, poly_end_y);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(viewportXMin, viewportYMin);
    glVertex2f(viewportXMax, viewportYMin);
    glVertex2f(viewportXMax, viewportYMax);
    glVertex2f(viewportXMin, viewportYMax);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(smallWindowMinX, smallWindowMinY);
    glVertex2f(smallWindowMaxX, smallWindowMinY);
    glVertex2f(smallWindowMaxX, smallWindowMaxY);
    glVertex2f(smallWindowMinX, smallWindowMaxY);
    glEnd();

    // Perform clipping for each line segment
    // clipLine(x0, y0, x1, y1);
    // clipLine(x2, y2, x3, y3);
    // clipLine(x4, y4, x5, y5);
    // clipLine(x6, y6, x7, y7);
    // clipLine(poly_start_x, poly_start_y, poly_end_x, poly_start_y);
    // clipLine(poly_end_x, poly_start_y, poly_end_x, poly_end_y);
    // clipLine(poly_end_x, poly_end_y, poly_start_x, poly_end_y);
    // clipLine(poly_start_x, poly_end_y, poly_start_x, poly_start_y);
    clipLine(poly_start_x, poly_start_y, poly_end_x, poly_end_y);

    glFlush();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Cohen-Sutherland Line Clipping Algorithm");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
