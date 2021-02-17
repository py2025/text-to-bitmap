#include "Image.h"

void writePixel(Image *img, Pixel pxl, int row, int column) {
    *Matrix_at(&(img->pixelR), row, column) = pxl.r;
    *Matrix_at(&(img->pixelG), row, column) = pxl.g;
    *Matrix_at(&(img->pixelB), row, column) = pxl.b;
}

Pixel pullPixel(Image *img, int row, int column) {
    Pixel p {*Matrix_at(&(img->pixelR), row, column),
            *Matrix_at(&(img->pixelG), row, column),
            *Matrix_at(&(img->pixelB), row, column)};
    return p;
}