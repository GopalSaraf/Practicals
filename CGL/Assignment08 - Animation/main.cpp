#include <GL/glut.h>
#include <cmath>

GLfloat angle = 0.0;  // Angle of rotation for the windmill blades

void drawWindmill() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glColor3f(0.5, 0.5, 0.5);  // Black color for the windmill structure

    // Draw the windmill structure
    glBegin(GL_POLYGON);
    glVertex2f(-0.02, -0.5);
    glVertex2f(0.02, -0.5);
    glVertex2f(0.02, 0.1);
    glVertex2f(-0.02, 0.1);
    glEnd();

    glTranslatef(0.0, 0.1, 0.0);  // Move to the top of the windmill structure

    glColor3f(0.9, 0.9, 0.9);  // Light gray color for the windmill blades

    // Draw the windmill blades
    glPushMatrix();
    glRotatef(angle, 0.0, 0.0, 1.0);  // Rotate the blades around the z-axis
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0, 0.0);
    glVertex2f(-0.2, 0.05);
    glVertex2f(0.2, 0.05);
    glEnd();
    glPopMatrix();

    glFlush();
}

void update(int value) {
    angle += 2.0;  // Increment the angle for rotation

    // Redraw the windmill
    glutPostRedisplay();

    // Call update function again after 16 milliseconds (about 60 frames per
    // second)
    glutTimerFunc(16, update, 0);
}

void reshape(int width, int height) {
    // Set the viewport to cover the entire window
    glViewport(0, 0, width, height);

    // Set the projection matrix
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    // Set the orthographic projection
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Windmill Animation");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
    glutDisplayFunc(drawWindmill);
    glutReshapeFunc(reshape);
    glutTimerFunc(0, update, 0);
    glutMainLoop();
    return 0;
}
