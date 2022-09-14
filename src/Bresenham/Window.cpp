//
// Created by jgros on 8/31/2022.
//

#include "Window.h"
#include <GL/freeglut.h>
#include <vector>

using namespace std;

vector<vector<int>> line_coords;

void init() {
    //calculate and store bresenham line coordinates
    bresenham(20,200,300,250);
    //initialize window default values
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0,glutGet(GLUT_WINDOW_WIDTH),0,glutGet(GLUT_WINDOW_HEIGHT),-1,1);
}

void display() {
    //Clear all pixels
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);

    glColor3ub(255,255,255);

    for (auto & line_coord : line_coords) {
        for (int j = 0; j < line_coord.size()-1; j++) {
            glVertex2i(line_coord.at(j), line_coord.at(j+1));
        }
    }

    glEnd();
    glFlush();
}

void idle() {

}

void reshape(int w, int h) {
    glutPostRedisplay();
}

void bresenham(int x1, int y1, int x2, int y2) {
    int new_slope = 2 * (y2 - y1);
    int new_slope_error = new_slope - (x2 - x1);

    vector<int> temp;

    for (int i = x1, j = y1; i <= x2; i++) {
        temp.clear();
        temp.push_back(i);
        temp.push_back(j);

        line_coords.push_back(temp);

        new_slope_error += new_slope;

        if (new_slope_error >= 0) {
            j++;
            new_slope_error -= 2 * (x2-x1);
        }
    }
}
