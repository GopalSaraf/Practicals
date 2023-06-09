#define GL_SILENCE_DEPRECATION  // Define a macro to silence deprecation
                                // warnings

#include <GL/freeglut.h>  // Include the freeglut library
#include <OpenGL/gl.h>    // Include the OpenGL library
#include <iostream>       // Include the input/output stream library
#include <vector>         // Include the vector container library
#include <queue>          // Include the queue container library
using namespace std;      // Using the standard namespace

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

int noOfPoints;         // Number of points for the polygon
vector<Point_> points;  // Vector to store the points of the polygon

bool fillingInProgress =
    false;  // Flag to indicate if flood filling is in progress

vector<vector<ColorRGB>> pixels;       // 2D vector to store the pixel colors
ColorRGB backgroundColor = {0, 0, 0};  // Background color
ColorRGB foregroundColor = {255, 255, 255};  // Foreground color
ColorRGB selectedFillColor = {255, 0, 0};    // Selected fill color

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

// Function to get user input for the number of points
void getUserInput() {
    cout << "Enter the number of points: ";
    cin >> noOfPoints;
    // noOfPoints = 4;
}

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

    // add hexagon points to the vector
    // points.push_back({width / 2, height / 2 + 200});
    // points.push_back({width / 2 + 200, height / 2 + 100});
    // points.push_back({width / 2 + 200, height / 2 - 100});
    // points.push_back({width / 2, height / 2 - 200});
    // points.push_back({width / 2 - 200, height / 2 - 100});
    // points.push_back({width / 2 - 200, height / 2 + 100});

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

// Function to perform flood fill algorithm
void floodFill(int x, int y, ColorRGB oldColor, ColorRGB boundaryColor,
               ColorRGB newColor) {
    if (fillingInProgress) {
        return;
    }

    int width = glutGet(GLUT_WINDOW_WIDTH);
    int height = glutGet(GLUT_WINDOW_HEIGHT);

    vector<vector<bool>> visited(height, vector<bool>(width, false));

    int dx[] = {0, 0, -1, 1};
    int dy[] = {-1, 1, 0, 0};

    queue<pair<int, int>> q;
    q.push({x, y});

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

        if (insideBoundary && pixels[currentY][currentX] == oldColor) {
            pixels[currentY][currentX] = newColor;
            visited[currentY][currentX] = true;

            glColor3ub(newColor.r, newColor.g, newColor.b);
            glPointSize(8);
            glBegin(GL_POINTS);
            glVertex2i(currentX, currentY);
            glEnd();
            glFlush();

            for (int i = 0; i < 4; i++) {
                int newX = currentX + dx[i];
                int newY = currentY + dy[i];
                q.push(make_pair(newX, newY));
            }
        }
    }

    fillingInProgress = false;
    backgroundColor = newColor;
    glutPostRedisplay();
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
                          foregroundColor, selectedFillColor);
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

// #define GL_SILENCE_DEPRECATION  // Define a macro to silence deprecation
//                                 // warnings

// #include <GL/freeglut.h>  // Include the freeglut library
// #include <OpenGL/gl.h>    // Include the OpenGL library
// #include <iostream>       // Include the input/output stream library
// #include <vector>         // Include the vector container library
// #include <queue>          // Include the queue container library
// using namespace std;      // Using the standard namespace

// // Define a struct to represent a point with x and y coordinates
// struct Point_ {
//     int x;
//     int y;
// };

// // Define a struct to represent the RGB color
// struct ColorRGB {
//     GLubyte r, g, b;

//     // Overload the equality operator for comparing colors
//     bool operator==(const ColorRGB &other) {
//         return (r == other.r && g == other.g && b == other.b);
//     }

//     // Overload the inequality operator for comparing colors
//     bool operator!=(const ColorRGB &other) { return !(*this == other); }
// };

// int noOfPoints;         // Number of points for the polygon
// vector<Point_> points;  // Vector to store the points of the polygon

// bool fillingInProgress =
//     false;  // Flag to indicate if flood filling is in progress

// vector<vector<ColorRGB>> pixels;       // 2D vector to store the pixel colors
// ColorRGB backgroundColor = {0, 0, 0};  // Background color
// ColorRGB foregroundColor = {255, 255, 255};  // Foreground color
// ColorRGB selectedFillColor = {255, 0, 0};    // Selected fill color

// vector<ColorRGB> colorPalette = {
//     {254, 254, 254},  // White
//     {0, 0, 0},        // Black
//     {255, 0, 0},      // Red
//     {0, 255, 0},      // Green
//     {0, 0, 255},      // Blue
//     {255, 255, 0},    // Yellow
//     {255, 0, 255},    // Magenta
//     {0, 255, 255},    // Cyan
//     {128, 0, 0},      // Maroon
//     {0, 128, 0},      // Dark Green
//     {0, 0, 128},      // Navy
//     {128, 128, 128}   // Gray
// };

// // Function to get user input for the number of points
// void getUserInput() {
//     // cout << "Enter the number of points: ";
//     // cin >> noOfPoints;
//     noOfPoints = 4;
// }

// // Function to draw the color palette
// void drawPalette() {
//     int width = glutGet(GLUT_WINDOW_WIDTH);
//     int height = glutGet(GLUT_WINDOW_HEIGHT);

//     int palleteBoxLength = min(width, height) / 20;
//     int palleteBoxPadding = palleteBoxLength / 10;

//     for (int i = 0; i < colorPalette.size(); i++) {
//         int row = i / 4;
//         int col = i % 4;

//         int startX = col * palleteBoxLength + palleteBoxPadding;
//         int startY =
//             height - ((row + 1) * palleteBoxLength) + palleteBoxPadding;
//         int endX = startX + palleteBoxLength - palleteBoxPadding;
//         int endY = startY + palleteBoxLength - palleteBoxPadding;

//         glBegin(GL_QUADS);
//         glColor3ub(colorPalette[i].r, colorPalette[i].g, colorPalette[i].b);
//         glVertex2i(startX, startY);
//         glVertex2i(endX, startY);
//         glVertex2i(endX, endY);
//         glVertex2i(startX, endY);
//         glEnd();
//     }
// }

// // Function to initialize the OpenGL settings
// void init() {
//     int width = glutGet(GLUT_WINDOW_WIDTH);
//     int height = glutGet(GLUT_WINDOW_HEIGHT);

//     // Clear the pixels matrix and set all colors to the background color
//     pixels.clear();

//     pixels.resize(height, vector<ColorRGB>(width, backgroundColor));

//     // Set the clear color to the background color
//     glClearColor(backgroundColor.r, backgroundColor.g, backgroundColor.b, 1);

//     glMatrixMode(GL_PROJECTION);
//     glLoadIdentity();
//     gluOrtho2D(0, width, 0, height);

//     glMatrixMode(GL_MODELVIEW);
//     glLoadIdentity();

//     glutPostRedisplay();
// }

// // Function to handle window reshape event
// void reshape(int w, int h) {
//     glViewport(0, 0, w, h);

//     vector<vector<ColorRGB>> newPixels;

//     int startX = (w - pixels[0].size()) / 2;
//     int startY = (h - pixels.size()) / 2;

//     newPixels.resize(h, vector<ColorRGB>(w, backgroundColor));

//     for (int y = 0; y < pixels.size(); y++) {
//         for (int x = 0; x < pixels[y].size(); x++) {
//             newPixels[y + startY][x + startX] = pixels[y][x];
//         }
//     }

//     pixels = newPixels;

//     glMatrixMode(GL_PROJECTION);
//     glLoadIdentity();
//     gluOrtho2D(0, w, 0, h);

//     glMatrixMode(GL_MODELVIEW);
//     glLoadIdentity();

//     glutPostRedisplay();
// }

// // Function to display the contents on the window
// void display() {
//     glClear(GL_COLOR_BUFFER_BIT);
//     glLoadIdentity();

//     int width = glutGet(GLUT_WINDOW_WIDTH);
//     int height = glutGet(GLUT_WINDOW_HEIGHT);

//     // add hexagon points to the vector
//     // points.push_back({width / 2, height / 2 + 200});
//     // points.push_back({width / 2 + 200, height / 2 + 100});
//     // points.push_back({width / 2 + 200, height / 2 - 100});
//     // points.push_back({width / 2, height / 2 - 200});
//     // points.push_back({width / 2 - 200, height / 2 - 100});
//     // points.push_back({width / 2 - 200, height / 2 + 100});

//     // Draw pixels
//     for (int y = 0; y < height; y++) {
//         for (int x = 0; x < width; x++) {
//             glColor3ub(pixels[y][x].r, pixels[y][x].g, pixels[y][x].b);
//             glBegin(GL_POINTS);
//             glVertex2i(x, y);
//             glEnd();
//         }
//     }

//     // Draw the polygon
//     glColor3ub(foregroundColor.r, foregroundColor.g, foregroundColor.b);

//     glBegin(points.size() == noOfPoints ? GL_LINE_LOOP : GL_LINE_STRIP);
//     for (int i = 0; i < points.size(); i++)
//         glVertex2i(points[i].x, points[i].y);
//     glEnd();

//     // Draw the color palette
//     drawPalette();

//     glFlush();
// }

// // Function to perform flood fill algorithm
// void floodFill(int x, int y, ColorRGB oldColor, ColorRGB boundaryColor,
//                ColorRGB newColor) {
//     if (fillingInProgress) {
//         return;
//     }

//     int width = glutGet(GLUT_WINDOW_WIDTH);
//     int height = glutGet(GLUT_WINDOW_HEIGHT);

//     vector<vector<bool>> visited(height, vector<bool>(width, false));

//     int dx[] = {0, 0, -1, 1};
//     int dy[] = {-1, 1, 0, 0};

//     queue<pair<int, int>> q;
//     q.push({x, y});

//     fillingInProgress = true;

//     while (!q.empty()) {
//         pair<int, int> currentPoint = q.front();
//         q.pop();

//         int currentX = currentPoint.first;
//         int currentY = currentPoint.second;

//         if (currentX < 0 || currentY < 0 || currentX >= width ||
//             currentY >= height) {
//             continue;
//         }

//         if (visited[currentY][currentX] ||
//             pixels[currentY][currentX] == boundaryColor ||
//             pixels[currentY][currentX] == newColor) {
//             continue;
//         }

//         bool insideBoundary = false;
//         for (int i = 0, j = points.size() - 1; i < points.size(); j = i++) {
//             if ((points[i].y > currentY) != (points[j].y > currentY) &&
//                 (currentX < (points[j].x - points[i].x) *
//                                     (currentY - points[i].y) /
//                                     (points[j].y - points[i].y) +
//                                 points[i].x)) {
//                 insideBoundary = !insideBoundary;
//             }
//         }

//         if (insideBoundary && pixels[currentY][currentX] == oldColor) {
//             pixels[currentY][currentX] = newColor;
//             visited[currentY][currentX] = true;

//             glColor3ub(newColor.r, newColor.g, newColor.b);
//             glPointSize(8);
//             glBegin(GL_POINTS);
//             glVertex2i(currentX, currentY);
//             glEnd();
//             glFlush();

//             for (int i = 0; i < 4; i++) {
//                 int newX = currentX + dx[i];
//                 int newY = currentY + dy[i];
//                 q.push(make_pair(newX, newY));
//             }
//         }
//     }

//     fillingInProgress = false;
//     backgroundColor = newColor;
//     glutPostRedisplay();
// }

// // Function to handle mouse events
// void mouse(int button, int state, int x, int y) {
//     if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
//         if (points.size() < noOfPoints) {
//             // Store the clicked point in the points vector
//             Point_ point;
//             point.x = x;
//             point.y = glutGet(GLUT_WINDOW_HEIGHT) - y;
//             points.push_back(point);
//             glutPostRedisplay();
//         } else {
//             int width = glutGet(GLUT_WINDOW_WIDTH);
//             int height = glutGet(GLUT_WINDOW_HEIGHT);

//             int palleteBoxLength = min(width, height) / 20;
//             int palleteBoxPadding = palleteBoxLength / 10;

//             int paletteWidth = palleteBoxLength * 4 + palleteBoxPadding * 3;
//             int paletteHeight = palleteBoxLength * 3 + palleteBoxPadding * 2;

//             // Check if the click is inside the color palette
//             if (x >= 0 && x <= paletteWidth && y >= 0 && y <= paletteHeight)
//             {
//                 int row = y / palleteBoxLength;
//                 int col = x / palleteBoxLength;

//                 if (row >= 0 && row < 3 && col >= 0 && col < 4)
//                     selectedFillColor = colorPalette[row * 4 + col];
//             } else {
//                 // Perform flood fill algorithm on the clicked point
//                 floodFill(x, glutGet(GLUT_WINDOW_HEIGHT) - y,
//                 backgroundColor,
//                           foregroundColor, selectedFillColor);
//             }
//         }
//     }
// }

// int main(int args, char **argv) {
//     getUserInput();
//     glutInit(&args, argv);
//     glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

//     int screen_width = glutGet(GLUT_SCREEN_WIDTH);
//     int screen_height = glutGet(GLUT_SCREEN_HEIGHT);

//     int window_width = screen_width * 0.8;
//     int window_height = screen_height * 0.8;

//     glutInitWindowPosition((screen_width - window_width) / 2,
//                            (screen_height - window_height) / 2);

//     glutInitWindowSize(window_width, window_height);
//     glutCreateWindow("Polygon Filling");
//     init();
//     glutReshapeFunc(reshape);
//     glutDisplayFunc(display);
//     glutMouseFunc(mouse);
//     glutMainLoop();
//     return 0;
// }
