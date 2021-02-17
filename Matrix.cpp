#include "Matrix.h"

void Matrix_init(Matrix *mat, int width, int height) {
    mat->width = width;
    mat->height = height;
}

int* Matrix_at(Matrix *mat, int row, int column) {
    return mat->data + (row * mat->width + column);
}

int Matrix_width(Matrix *mat) {
    return mat->width;
}

int Matrix_height(Matrix *mat) {
    return mat->height;
}