#pragma once
#include <GL/freeglut.h>
#include <vector>
#include "structures.h"

using namespace std;

vector<ColorRGB> colorPalette = {
    {254, 254, 254},  // White
    {0, 0, 0},        // Black
    {255, 0, 0},      // Red
    {0, 255, 0},      // Green
    {0, 0, 255},      // Blue
    {255, 255, 0},    // Yellow
    {255, 0, 255},    // Magenta
    {0, 255, 255},    // Cyan
    {128, 0, 0},      // Maroon
    {0, 128, 0},      // Dark Green
    {0, 0, 128},      // Navy
    {128, 128, 128}   // Gray
};

// Function to draw the color palette
void drawPalette() {
    int width = glutGet(GLUT_WINDOW_WIDTH);
    int height = glutGet(GLUT_WINDOW_HEIGHT);

    int palleteBoxLength = min(width, height) / 20;
    int palleteBoxPadding = palleteBoxLength / 10;

    for (int i = 0; i < colorPalette.size(); i++) {
        int row = i / 4;
        int col = i % 4;

        int startX = col * palleteBoxLength + palleteBoxPadding;
        int startY =
            height - ((row + 1) * palleteBoxLength) + palleteBoxPadding;
        int endX = startX + palleteBoxLength - palleteBoxPadding;
        int endY = startY + palleteBoxLength - palleteBoxPadding;

        glBegin(GL_QUADS);
        glColor3ub(colorPalette[i].r, colorPalette[i].g, colorPalette[i].b);
        glVertex2i(startX, startY);
        glVertex2i(endX, startY);
        glVertex2i(endX, endY);
        glVertex2i(startX, endY);
        glEnd();
    }
}