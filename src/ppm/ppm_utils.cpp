//
// Created by jgros on 8/31/2022.
//

#include <fstream>
#include "../Bresenham/Window.h"

/**
 * Save File to PPM file
 * @param Image The 3D array of colors to be passed in for saving.
 */
void save_ppm(int width, int height, int max_color_val = 255) {
    // create new file
    std::ofstream img("../../saved_files/bresenhamline.ppm");
    // write header line
    img << "P3 " << width << " " << height << " " << max_color_val << std::endl;
    // iterative loops to save RGB color info to ppm
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            img << ppm_img[i][j][0] << " " << ppm_img[i][j][1] << " " << ppm_img[i][j][2] << std::endl;
        }
    }
    img.close();
}