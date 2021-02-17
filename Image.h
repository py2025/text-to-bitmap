#ifndef __IMAGE_H_
#define __IMAGE_H_

struct Pixel {
    int r;
    int g;
    int b;
};

struct Image {
    int width;
    int height;
    Matrix
}
void writePixel();

Pixel pullPixel();

void image_init(int width, int height);

int getImgHeight()

#endif