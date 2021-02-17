<<<<<<< Updated upstream
#ifndef __IMAGE_H_
#define __IMAGE_H_

#include "Matrix.h"

struct Pixel {
    int r;
    int g;
    int b;
};

struct Image {
    int width;
    int height;
    Matrix pixelR;
    Matrix pixelG;
    Matrix pixelB;
};

void writePixel();

Pixel pullPixel();

void image_init(int width, int height);

int getImgHeight(Image img);
=======
#ifndef __IMAGE_H__
#define __IMAGE_H__


>>>>>>> Stashed changes

#endif