#pragma once
#include <GL/freeglut.h>
#include <queue>
#include <vector>
#include "structures.h"

using namespace std;

bool fillingInProgress = false;

// Function to perform flood fill algorithm
void floodFill(int x, int y, ColorRGB oldColor, ColorRGB boundaryColor,
               ColorRGB newColor, vector<vector<ColorRGB>> &pixels,
               vector<Point_> &points) {
    if (fillingInProgress) {
        return;
    }

    int width = glutGet(GLUT_WINDOW_WIDTH);
    int height = glutGet(GLUT_WINDOW_HEIGHT);

    vector<vector<bool>> visited(height, vector<bool>(width, false));

    int dx[] = {0, 0, -1, 1};
    int dy[] = {-1, 1, 0, 0};

    queue<pair<int, int>> q;
    q.push(make_pair(x, y));

    fillingInProgress = true;

    while (!q.empty()) {
        pair<int, int> currentPoint = q.front();
        q.pop();

        int currentX = currentPoint.first;
        int currentY = currentPoint.second;

        if (currentX < 0 || currentY < 0 || currentX >= width ||
            currentY >= height) {
            continue;
        }

        if (visited[currentY][currentX] ||
            pixels[currentY][currentX] == boundaryColor ||
            pixels[currentY][currentX] == newColor) {
            continue;
        }

        if (pixels[currentY][currentX] == oldColor) {
            pixels[currentY][currentX] = newColor;
            visited[currentY][currentX] = true;

            bool insideBoundary = false;
            for (int i = 0, j = points.size() - 1; i < points.size(); j = i++) {
                if ((points[i].y > currentY) != (points[j].y > currentY) &&
                    (currentX < (points[j].x - points[i].x) *
                                        (currentY - points[i].y) /
                                        (points[j].y - points[i].y) +
                                    points[i].x)) {
                    insideBoundary = !insideBoundary;
                }
            }

            if (insideBoundary) {
                for (int i = 0; i < 4; i++) {
                    int newX = currentX + dx[i];
                    int newY = currentY + dy[i];
                    q.push(make_pair(newX, newY));
                }
            }
        }
    }

    fillingInProgress = false;
    glutPostRedisplay();
}