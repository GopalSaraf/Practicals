#pragma once
#include <GL/freeglut.h>

// Define a struct to represent a point with x and y coordinates
struct Point_ {
    int x;
    int y;
};

// Define a struct to represent the RGB color
struct ColorRGB {
    GLubyte r, g, b;

    // Overload the equality operator for comparing colors
    bool operator==(const ColorRGB &other) {
        return (r == other.r && g == other.g && b == other.b);
    }

    // Overload the inequality operator for comparing colors
    bool operator!=(const ColorRGB &other) { return !(*this == other); }
};