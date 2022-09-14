//
// Created by jgros on 8/31/2022.
//

#ifndef Window_h
#define Window_h

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <GL/freeglut.h>
#include <iostream>
#include <vector>

void init();
void display();
void reshape(int w, int h);
void idle();

void bresenham(int x1, int y1, int x2, int y2);

#endif //Window_h
