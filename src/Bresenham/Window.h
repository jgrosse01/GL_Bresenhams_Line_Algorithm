//
// Created by jgros on 8/31/2022.
//

#ifndef Window_h
#define Window_h

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <GL/freeglut.h>

int*** ppm_img;

void init();
void display();
void reshape(int w, int h);
void idle();
// ?????
void writeScreenToPPMIMG();
void readPPMIMGToScreen();

#endif //Window_h
