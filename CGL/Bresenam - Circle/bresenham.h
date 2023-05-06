#pragma once

#include <GL/freeglut.h>

#ifdef __APPLE__
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

class Circle {
   private:
    int x, y, radius;
    float col_R, col_G, col_B;

   public:
    Circle(int x, int y, int radius, float col_R = 1.0, float col_G = 1.0,
           float col_B = 1.0)
        : x(x),
          y(y),
          radius(radius),
          col_R(col_R),
          col_G(col_G),
          col_B(col_B) {}

    void draw() {
        int x = 0, y = radius;
        int d = 3 - 2 * radius;

        while (x <= y) {
            drawPoints(x, y);
            x++;

            if (d < 0)
                d = d + 4 * x + 6;
            else {
                y--;
                d = d + 4 * (x - y) + 10;
            }

            drawPoints(x, y);
        }
    }

    void drawPoints(int x, int y) {
        glColor3f(col_R, col_G, col_B);
        glBegin(GL_POINTS);
        glVertex2i(this->x + x, this->y + y);
        glVertex2i(this->x + y, this->y + x);
        glVertex2i(this->x - y, this->y + x);
        glVertex2i(this->x - x, this->y + y);
        glVertex2i(this->x - x, this->y - y);
        glVertex2i(this->x - y, this->y - x);
        glVertex2i(this->x + y, this->y - x);
        glVertex2i(this->x + x, this->y - y);
        glEnd();
    }

    static void draw(int x, int y, int radius, float col_R = 1.0,
                     float col_G = 1.0, float col_B = 1.0) {
        Circle circle(x, y, radius, col_R, col_G, col_B);
        circle.draw();
    }
};