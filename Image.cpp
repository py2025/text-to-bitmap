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

void image_init(Image *img, int width, int height) {
    img->width = width;
    img->height = height;
    Matrix_init(&(img->pixelR), width, height);
    Matrix_init(&(img->pixelG), width, height);
    Matrix_init(&(img->pixelB), width, height);
}

int getImgHeight(Image *img){
    return img->height;
}

int getImgWidth(Image *img){
    return img->width;
}

int printImg(Image *img, ostream& os){
    
}