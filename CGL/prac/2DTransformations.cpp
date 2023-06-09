#include <GL/glut.h>
#include <cmath>

// Polygon vertices
GLfloat vertices[][2] = {{-0.5, -0.5}, {0.5, -0.5}, {0.5, 0.5}, {-0.5, 0.5}};

int selectedVertex = 0;                 // Index of the selected vertex
GLfloat referencePoint[] = {0.0, 0.0};  // Reference point for transformations

// Function to draw the polygon
void drawPolygon() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glLoadIdentity();

    // Draw the polygon
    glBegin(GL_POLYGON);
    for (int i = 0; i < 4; i++) {
        glVertex2f(vertices[i][0], vertices[i][1]);
    }
    glEnd();

    glFlush();
}

// Function to multiply a 2x2 matrix with a 2D point
void multiplyMatrixVector(GLfloat matrix[][2], GLfloat vector[]) {
    GLfloat result[2];
    result[0] = matrix[0][0] * vector[0] + matrix[0][1] * vector[1];
    result[1] = matrix[1][0] * vector[0] + matrix[1][1] * vector[1];
    vector[0] = result[0];
    vector[1] = result[1];
}

// Function to perform translation
void translate(GLfloat tx, GLfloat ty) {
    GLfloat translationMatrix[][2] = {{1.0, 0.0}, {0.0, 1.0}};

    // Update the translation matrix
    translationMatrix[0][1] = tx;
    translationMatrix[1][1] = ty;

    // Apply translation to each vertex
    for (int i = 0; i < 4; i++) {
        multiplyMatrixVector(translationMatrix, vertices[i]);
    }
}

// Function to perform scaling
void scale(GLfloat sx, GLfloat sy) {
    GLfloat scalingMatrix[][2] = {{1.0, 0.0}, {0.0, 1.0}};

    // Update the scaling matrix
    scalingMatrix[0][0] = sx;
    scalingMatrix[1][1] = sy;

    // Apply scaling to each vertex
    for (int i = 0; i < 4; i++) {
        multiplyMatrixVector(scalingMatrix, vertices[i]);
    }
}

// Function to perform rotation
void rotate(GLfloat angle) {
    GLfloat radians = angle * 3.14159 / 180.0;
    GLfloat cosTheta = cos(radians);
    GLfloat sinTheta = sin(radians);

    GLfloat rotationMatrix[][2] = {{cosTheta, -sinTheta}, {sinTheta, cosTheta}};

    // Apply rotation to each vertex
    for (int i = 0; i < 4; i++) {
        GLfloat x = vertices[i][0] - referencePoint[0];
        GLfloat y = vertices[i][1] - referencePoint[1];
        GLfloat vector[] = {x, y};
        multiplyMatrixVector(rotationMatrix, vector);
        vertices[i][0] = vector[0] + referencePoint[0];
        vertices[i][1] = vector[1] + referencePoint[1];
    }
}

// Keyboard callback function
void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 't':
            translate(0.1, 0.1);
            break;
        case 's':
            scale(1.1, 1.1);
            break;
        case 'r':
            rotate(10.0);
            break;
    }
    glutPostRedisplay();
}

// Mouse callback function
void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        GLfloat mouseX = x / 250.0;
        GLfloat mouseY = y / 250.0;

        GLfloat minDist = 0.1;  // Minimum distance to select a vertex

        // Find the closest vertex to the mouse click
        for (int i = 0; i < 4; i++) {
            GLfloat distX = vertices[i][0] - mouseX;
            GLfloat distY = vertices[i][1] - mouseY;
            GLfloat distance = sqrt(distX * distX + distY * distY);
            if (distance < minDist) {
                minDist = distance;
                selectedVertex = i;
            }
        }
    }
}

// Main function
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("2D Transformations");
    glClearColor(1.0, 1.0, 1.0, 0.0);
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
    glutDisplayFunc(drawPolygon);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}
