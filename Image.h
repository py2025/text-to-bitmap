#ifndef __IMAGE_H_
#define __IMAGE_H_

#include "Matrix.h"

#include <fstream>

using namespace std;

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

void writePixel(Image* img, Pixel pxl, int row, int column);

Pixel pullPixel(Image* img, int row, int column);

void image_init(Image* img, int width, int height);

int getImgHeight(Image* img);

int getImgWidth(Image* img);

int printImg(Image* img, ostream& os);

void Image_fill(Image *img, Pixel p);

#endif