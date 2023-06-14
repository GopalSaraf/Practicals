#pragma once

#include <GL/freeglut.h>
#include <cmath>

#ifdef __APPLE__
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

class Line {
   public:
    enum MODE {
        SIMPLE = 0x0001,
        DARKED = 0x0010,
        DASHED = 0x0100,
        DOTTED = 0x1000,
    };

   private:
    float x1, y1, x2, y2;
    int mode;

    bool wantDark, wantDash, wantDot;

    float color_R, color_G, color_B;

    int spacing_dash = 10;
    int spacing_dot = 2;
    int dark_pixel_size = 5;

   public:
    Line(float x1, float y1, float x2, float y2, int mode = SIMPLE)
        : x1(x1), y1(y1), x2(x2), y2(y2), mode(mode) {
        setColor();
        wantDark = (mode & DARKED);
        wantDash = (mode & DASHED);
        wantDot = (mode & DOTTED);
    }

    void draw() {
        float dy, dx;
        dy = y2 - y1;
        dx = x2 - x1;
        int steps = abs(dy) > abs(dx) ? abs(dy) : abs(dx);

        float xinc, yinc;
        xinc = dx / (float)steps;
        yinc = dy / (float)steps;

        if (wantDark) glPointSize(dark_pixel_size);
        glBegin(GL_POINTS);

        displayPoint(x1, y1);

        bool is_dash_space = false, is_dot_space = false;
        int prev = -1, curr = 0;

        for (; curr < steps + 1; curr++) {
            x1 += ((curr - prev) * xinc);
            y1 += ((curr - prev) * yinc);
            prev = curr;

            is_dash_space = wantDash && curr % spacing_dash == 0;
            is_dot_space = wantDot && curr % spacing_dot == 0;

            if (is_dash_space || is_dot_space) {
                curr += (wantDark ? (dark_pixel_size + 5) : 4);
                continue;
            }

            displayPoint(x1, y1);
        }

        glEnd();
        if (wantDark) glPointSize(1);
    }

    static void draw(float x1, float y1, float x2, float y2, int mode = SIMPLE,
                     float R = 1, float G = 1, float B = 1) {
        Line line(x1, y1, x2, y2, mode);
        line.setMode(mode);
        line.setColor(R, G, B);
        line.draw();
    }

    void setMode(int mode) { this->mode = mode; }

    void setColor(float R = 1, float G = 1, float B = 1) {
        color_R = R;
        color_G = G;
        color_B = B;
        glColor3f(color_R, color_G, color_B);
    }

   private:
    void displayPoint(float x, float y) { glVertex2f(x, y); }
};