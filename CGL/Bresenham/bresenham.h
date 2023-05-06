#pragma once

#include <GL/freeglut.h>

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
    int x1, y1, x2, y2;
    int mode;
    float col_R, col_G, col_B;
    int dark_point_size = 5;
    int coord_to_inc, coord_other_to_inc, coord_to_inc_end;
    int dx, dy, i1, i2, d, increment;

   public:
    Line(int x1, int y1, int x2, int y2, int mode = SIMPLE, float col_R = 1.0,
         float col_G = 1.0, float col_B = 1.0)
        : x1(x1),
          y1(y1),
          x2(x2),
          y2(y2),
          mode(mode),
          col_R(col_R),
          col_G(col_G),
          col_B(col_B) {
        dx = x2 - x1, dy = y2 - y1;

        init();
        setColor(col_R, col_G, col_B);
    }

    void draw() {
        switch (mode) {
            case DARKED:
                glPointSize(dark_point_size);
                break;
            case DASHED:
                glLineStipple(100, 0x0000);
                glEnable(GL_LINE_STIPPLE);
                break;
            case DOTTED:
                glLineStipple(1, 0x0101);
                glEnable(GL_LINE_STIPPLE);
                break;
            default:
                break;
        }

        glBegin(GL_POINTS);

        for (; coord_to_inc <= coord_to_inc_end; coord_to_inc++) {
            isSampling_X() ? glVertex2i(coord_to_inc, coord_other_to_inc)
                           : glVertex2i(coord_other_to_inc, coord_to_inc);

            (d < 0) ? (d += i1) : (d += i2, coord_other_to_inc += increment);
        }

        glEnd();

        if (mode == DARKED) {
            glPointSize(1);
        } else if (mode == DASHED || mode == DOTTED) {
            glDisable(GL_LINE_STIPPLE);
        }
    }

    void setColor(float col_R, float col_G, float col_B) {
        glColor3f(col_R, col_G, col_B);
    }

    static void draw(float x1, float y1, float x2, float y2, int mode = SIMPLE,
                     float R = 1, float G = 1, float B = 1) {
        Line line(x1, y1, x2, y2, mode);
        line.setColor(R, G, B);
        line.draw();
    }

   private:
    void init() {
        if (isSampling_X()) {
            if (dx < 0) swapPoints();

            i1 = 2 * abs(dy), i2 = 2 * (abs(dy) - abs(dx));
            d = i1 - dx;
            coord_to_inc = x1, coord_other_to_inc = y1, coord_to_inc_end = x2;
            increment = (dy < 0) ? -1 : 1;
        } else {
            if (dy < 0) swapPoints();

            i1 = 2 * abs(dx), i2 = 2 * (abs(dx) - abs(dy));
            d = i1 - dy;
            coord_to_inc = y1, coord_other_to_inc = x1, coord_to_inc_end = y2;
            increment = (dx < 0) ? -1 : 1;
        }
    }

    bool isSampling_X() { return abs(dx) > abs(dy); }

    void swapPoints() {
        int _x1 = x1, _y1 = y1, _x2 = x2, _y2 = y2;
        x1 = _x2, x2 = _x1;
        y1 = _y2, y2 = _y1;
    }
};