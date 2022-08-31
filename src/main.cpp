#include <iostream>
#include "Bresenham/Window.h"

int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100,100);

    glutCreateWindow("Bresenham's Line Algorithm");

    init();

    glutDisplayFunc( display );
    glutReshapeFunc( reshape );
    glutIdleFunc( idle );

    glutMainLoop();
    return 0;
}
