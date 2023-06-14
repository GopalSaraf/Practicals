#define GL_SILENCE_DEPRECATION  // Define a macro to silence deprecation
                                // warnings

#include <GL/freeglut.h>  // Include the freeglut library
#include <OpenGL/gl.h>    // Include the OpenGL library
#include <iostream>       // Include the input/output stream library
#include <vector>         // Include the vector container library
#include <queue>          // Include the queue container library
using namespace std;      // Using the standard namespace

#include "structures.h"  // Include the structures header file
#include "floodfill.h"   // Include the flood fill header file
#include "palette.h"     // Include the palette header file

int noOfPoints;         // Number of points for the polygon
vector<Point_> points;  // Vector to store the points of the polygon

vector<vector<ColorRGB>> pixels;       // 2D vector to store the pixel colors
ColorRGB backgroundColor = {0, 0, 0};  // Background color
ColorRGB foregroundColor = {255, 255, 255};  // Foreground color
ColorRGB selectedFillColor = {255, 0, 0};    // Selected fill color

// Function to get user input for the number of points
void getUserInput() {
    // cout << "Enter the number of points: ";
    // cin >> noOfPoints;
    noOfPoints = 4;
}

// Function to initialize the OpenGL settings
void init() {
    int width = glutGet(GLUT_WINDOW_WIDTH);
    int height = glutGet(GLUT_WINDOW_HEIGHT);

    // Clear the pixels matrix and set all colors to the background color
    pixels.clear();

    pixels.resize(height, vector<ColorRGB>(width, backgroundColor));

    // Set the clear color to the background color
    glClearColor(backgroundColor.r, backgroundColor.g, backgroundColor.b, 1);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, width, 0, height);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glutPostRedisplay();
}

// Function to handle window reshape event
void reshape(int w, int h) {
    glViewport(0, 0, w, h);

    vector<vector<ColorRGB>> newPixels;

    int startX = (w - pixels[0].size()) / 2;
    int startY = (h - pixels.size()) / 2;

    newPixels.resize(h, vector<ColorRGB>(w, backgroundColor));

    for (int y = 0; y < pixels.size(); y++) {
        for (int x = 0; x < pixels[y].size(); x++) {
            newPixels[y + startY][x + startX] = pixels[y][x];
        }
    }

    pixels = newPixels;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, w, 0, h);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glutPostRedisplay();
}

// Function to display the contents on the window
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    int width = glutGet(GLUT_WINDOW_WIDTH);
    int height = glutGet(GLUT_WINDOW_HEIGHT);

    // Draw pixels
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            glColor3ub(pixels[y][x].r, pixels[y][x].g, pixels[y][x].b);
            glBegin(GL_POINTS);
            glVertex2i(x, y);
            glEnd();
        }
    }

    // Draw the polygon
    glColor3ub(foregroundColor.r, foregroundColor.g, foregroundColor.b);

    glBegin(points.size() == noOfPoints ? GL_LINE_LOOP : GL_LINE_STRIP);
    for (int i = 0; i < points.size(); i++)
        glVertex2i(points[i].x, points[i].y);
    glEnd();

    // Draw the color palette
    drawPalette();

    glFlush();
}

// Function to handle mouse events
void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        if (points.size() < noOfPoints) {
            // Store the clicked point in the points vector
            Point_ point;
            point.x = x;
            point.y = glutGet(GLUT_WINDOW_HEIGHT) - y;
            points.push_back(point);
            glutPostRedisplay();
        } else {
            int width = glutGet(GLUT_WINDOW_WIDTH);
            int height = glutGet(GLUT_WINDOW_HEIGHT);

            int palleteBoxLength = min(width, height) / 20;
            int palleteBoxPadding = palleteBoxLength / 10;

            int paletteWidth = palleteBoxLength * 4 + palleteBoxPadding * 3;
            int paletteHeight = palleteBoxLength * 3 + palleteBoxPadding * 2;

            // Check if the click is inside the color palette
            if (x >= 0 && x <= paletteWidth && y >= 0 && y <= paletteHeight) {
                int row = y / palleteBoxLength;
                int col = x / palleteBoxLength;

                if (row >= 0 && row < 3 && col >= 0 && col < 4)
                    selectedFillColor = colorPalette[row * 4 + col];
            } else {
                // Perform flood fill algorithm on the clicked point
                floodFill(x, glutGet(GLUT_WINDOW_HEIGHT) - y, backgroundColor,
                          foregroundColor, selectedFillColor, pixels, points);
                backgroundColor = selectedFillColor;
            }
        }
    }
}

int main(int args, char **argv) {
    getUserInput();
    glutInit(&args, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    int screen_width = glutGet(GLUT_SCREEN_WIDTH);
    int screen_height = glutGet(GLUT_SCREEN_HEIGHT);

    int window_width = screen_width * 0.8;
    int window_height = screen_height * 0.8;

    glutInitWindowPosition((screen_width - window_width) / 2,
                           (screen_height - window_height) / 2);

    glutInitWindowSize(window_width, window_height);
    glutCreateWindow("Polygon Filling");
    init();
    glutReshapeFunc(reshape);
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}
