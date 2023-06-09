#include <GL/glut.h>
#include <iostream>
#include <vector>

using namespace std;

// Structure to represent a 2D point
struct Point {
    GLfloat x, y;
};

// Function to clip a polygon using Sutherland-Hodgman algorithm
vector<Point> sutherlandHodgmanClip(vector<Point> polygon, GLfloat xMin,
                                    GLfloat yMin, GLfloat xMax, GLfloat yMax) {
    vector<Point> clippedPolygon;

    int n = polygon.size();

    // Clip against left edge
    for (int i = 0; i < n; ++i) {
        Point current = polygon[i];
        Point previous = polygon[(i + n - 1) % n];

        if (previous.x >= xMin && current.x >= xMin) {
            // Both points are inside the boundary
            clippedPolygon.push_back(current);
        } else if (previous.x >= xMin && current.x < xMin) {
            // Entry point
            GLfloat slope = (current.y - previous.y) / (current.x - previous.x);
            GLfloat newY = previous.y + slope * (xMin - previous.x);
            clippedPolygon.push_back({xMin, newY});
        } else if (previous.x < xMin && current.x >= xMin) {
            // Exit point
            GLfloat slope = (current.y - previous.y) / (current.x - previous.x);
            GLfloat newY = previous.y + slope * (xMin - previous.x);
            clippedPolygon.push_back({xMin, newY});
            clippedPolygon.push_back(current);
        }
    }

    polygon = clippedPolygon;
    clippedPolygon.clear();

    // Clip against right edge
    for (int i = 0; i < n; ++i) {
        Point current = polygon[i];
        Point previous = polygon[(i + n - 1) % n];

        if (previous.x <= xMax && current.x <= xMax) {
            // Both points are inside the boundary
            clippedPolygon.push_back(current);
        } else if (previous.x <= xMax && current.x > xMax) {
            // Entry point
            GLfloat slope = (current.y - previous.y) / (current.x - previous.x);
            GLfloat newY = previous.y + slope * (xMax - previous.x);
            clippedPolygon.push_back({xMax, newY});
        } else if (previous.x > xMax && current.x <= xMax) {
            // Exit point
            GLfloat slope = (current.y - previous.y) / (current.x - previous.x);
            GLfloat newY = previous.y + slope * (xMax - previous.x);
            clippedPolygon.push_back({xMax, newY});
            clippedPolygon.push_back(current);
        }
    }

    polygon = clippedPolygon;
    clippedPolygon.clear();

    // Clip against bottom edge
    for (int i = 0; i < n; ++i) {
        Point current = polygon[i];
        Point previous = polygon[(i + n - 1) % n];

        if (previous.y >= yMin && current.y >= yMin) {
            // Both points are inside the boundary
            clippedPolygon.push_back(current);
        } else if (previous.y >= yMin && current.y < yMin) {
            // Entry point
            GLfloat slope = (current.y - previous.y) / (current.x - previous.x);
            GLfloat newX = previous.x + (yMin - previous.y) / slope;
            clippedPolygon.push_back({newX, yMin});
        } else if (previous.y < yMin && current.y >= yMin) {
            // Exit point
            GLfloat slope = (current.y - previous.y) / (current.x - previous.x);
            GLfloat newX = previous.x + (yMin - previous.y) / slope;
            clippedPolygon.push_back({newX, yMin});
            clippedPolygon.push_back(current);
        }
    }

    polygon = clippedPolygon;
    clippedPolygon.clear();

    // Clip against top edge
    for (int i = 0; i < n; ++i) {
        Point current = polygon[i];
        Point previous = polygon[(i + n - 1) % n];

        if (previous.y <= yMax && current.y <= yMax) {
            // Both points are inside the boundary
            clippedPolygon.push_back(current);
        } else if (previous.y <= yMax && current.y > yMax) {
            // Entry point
            GLfloat slope = (current.y - previous.y) / (current.x - previous.x);
            GLfloat newX = previous.x + (yMax - previous.y) / slope;
            clippedPolygon.push_back({newX, yMax});
        } else if (previous.y > yMax && current.y <= yMax) {
            // Exit point
            GLfloat slope = (current.y - previous.y) / (current.x - previous.x);
            GLfloat newX = previous.x + (yMax - previous.y) / slope;
            clippedPolygon.push_back({newX, yMax});
            clippedPolygon.push_back(current);
        }
    }

    return clippedPolygon;
}

// Function to draw the original and clipped polygons
void drawPolygons() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 1.0f, 1.0f);

    // Original polygon
    vector<Point> originalPolygon = {
        {-0.5f, -0.5f}, {0.5f, -0.5f}, {0.5f, 0.5f}, {-0.5f, 0.5f}};
    glBegin(GL_LINE_LOOP);
    for (const auto& point : originalPolygon) {
        glVertex2f(point.x, point.y);
    }
    glEnd();

    // Clipped polygon
    vector<Point> clippedPolygon =
        sutherlandHodgmanClip(originalPolygon, -0.25f, -0.25f, 0.25f, 0.25f);
    glBegin(GL_LINE_LOOP);
    for (const auto& point : clippedPolygon) {
        glVertex2f(point.x, point.y);
    }
    glEnd();

    glFlush();
}

// Function to set up the OpenGL environment
void setup() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Sutherland-Hodgman Clipping");

    setup();

    glutDisplayFunc(drawPolygons);
    glutMainLoop();

    return 0;
}
