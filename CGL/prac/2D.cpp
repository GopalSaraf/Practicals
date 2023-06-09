#include <GL/glut.h>
#include <cmath>

// Polygon vertices
GLfloat vertices[][2] = {
    {-0.5, -0.5},
    {0.5, -0.5},
    {0.5, 0.5},
    {-0.5, 0.5},
};

// Function to draw the polygon
void drawPolygon() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(1.0, 0.0, 0.0);
    glLoadIdentity();
    gluOrtho2D(-250.0, 250.0, -250.0, 250.0);

    // Draw the polygon
    glBegin(GL_POLYGON);
    for (int i = 0; i < 4; i++) {
        glVertex2f(vertices[i][0], vertices[i][1]);
    }
    glEnd();

    glFlush();
}

// Function to multiply a 3x3 matrix with a 2D point
void multiplyMatrixVector(GLfloat matrix[][3], GLfloat vector[],
                          GLfloat result[]) {
    result[0] =
        matrix[0][0] * vector[0] + matrix[0][1] * vector[1] + matrix[0][2];
    result[1] =
        matrix[1][0] * vector[0] + matrix[1][1] * vector[1] + matrix[1][2];
}

// Function to perform translation and return the resulting transformation
// matrix
void translate(GLfloat tx, GLfloat ty, GLfloat resultMatrix[][3]) {
    GLfloat translationMatrix[][3] = {
        {1.0, 0.0, tx},
        {0.0, 1.0, ty},
        {0.0, 0.0, 1.0},
    };

    // Multiply translation matrix with the current transformation matrix
    GLfloat newMatrix[3][3];
    for (int i = 0; i < 3; i++) {
        multiplyMatrixVector(translationMatrix, resultMatrix[i], newMatrix[i]);
    }
    // Update the result matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultMatrix[i][j] = newMatrix[i][j];
        }
    }
}

// Function to perform scaling and return the resulting transformation matrix
void scale(GLfloat sx, GLfloat sy, GLfloat resultMatrix[][3]) {
    GLfloat scalingMatrix[][3] = {
        {sx, 0.0, 0.0},
        {0.0, sy, 0.0},
        {0.0, 0.0, 1.0},
    };

    // Multiply scaling matrix with the current transformation matrix
    GLfloat newMatrix[3][3];
    for (int i = 0; i < 3; i++) {
        multiplyMatrixVector(scalingMatrix, resultMatrix[i], newMatrix[i]);
    }
    // Update the result matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultMatrix[i][j] = newMatrix[i][j];
        }
    }
}

// Function to perform rotation and return the resulting transformation matrix
void rotate(GLfloat angle, GLfloat resultMatrix[][3]) {
    GLfloat radians = angle * 3.14159 / 180.0;
    GLfloat cosTheta = cos(radians);
    GLfloat sinTheta = sin(radians);

    GLfloat rotationMatrix[][3] = {
        {cosTheta, -sinTheta, 0.0},
        {sinTheta, cosTheta, 0.0},
        {0.0, 0.0, 1.0},
    };

    // Multiply rotation matrix with the current transformation matrix
    GLfloat newMatrix[3][3];
    for (int i = 0; i < 3; i++) {
        multiplyMatrixVector(rotationMatrix, resultMatrix[i], newMatrix[i]);
    }
    // Update the result matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultMatrix[i][j] = newMatrix[i][j];
        }
    }
}

// Keyboard callback function
void keyboard(unsigned char key, int x, int y) {
    static GLfloat transformationMatrix[][3] = {
        {1.0, 0.0, 0.0}, {0.0, 1.0, 0.0}, {0.0, 0.0, 1.0}};

    switch (key) {
        case 't': {
            GLfloat translationMatrix[][3] = {
                {1.0, 0.0, 0.1}, {0.0, 1.0, 0.1}, {0.0, 0.0, 1.0}};

            // Multiply translation matrix with the current transformation
            // matrix
            GLfloat newMatrix[3][3];
            for (int i = 0; i < 3; i++) {
                multiplyMatrixVector(translationMatrix, transformationMatrix[i],
                                     newMatrix[i]);
            }
            // Update the transformation matrix
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    transformationMatrix[i][j] = newMatrix[i][j];
                }
            }
            break;
        }
        case 's': {
            GLfloat scalingMatrix[][3] = {
                {1.1, 0.0, 0.0}, {0.0, 1.1, 0.0}, {0.0, 0.0, 1.0}};

            // Multiply scaling matrix with the current transformation matrix
            GLfloat newMatrix[3][3];
            for (int i = 0; i < 3; i++) {
                multiplyMatrixVector(scalingMatrix, transformationMatrix[i],
                                     newMatrix[i]);
            }
            // Update the transformation matrix
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    transformationMatrix[i][j] = newMatrix[i][j];
                }
            }
            break;
        }
        case 'r': {
            GLfloat rotationMatrix[][3] = {
                {cos(10 * 3.14159 / 180.0), -sin(10 * 3.14159 / 180.0), 0.0},
                {sin(10 * 3.14159 / 180.0), cos(10 * 3.14159 / 180.0), 0.0},
                {0.0, 0.0, 1.0}};

            // Multiply rotation matrix with the current transformation matrix
            GLfloat newMatrix[3][3];
            for (int i = 0; i < 3; i++) {
                multiplyMatrixVector(rotationMatrix, transformationMatrix[i],
                                     newMatrix[i]);
            }
            // Update the transformation matrix
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    transformationMatrix[i][j] = newMatrix[i][j];
                }
            }
            break;
        }
    }

    glutPostRedisplay();
}

// Function to perform the transformation on the polygon vertices
// void transformVertices() {
//     for (int i = 0; i < 4; i++) {
//         GLfloat newPoint[3];
//         multiplyMatrixVector(transformationMatrix, vertices[i], newPoint);
//         vertices[i][0] = newPoint[0];
//         vertices[i][1] = newPoint[1];
//     }
// }

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("2D Transformations");

    glutDisplayFunc(drawPolygon);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
