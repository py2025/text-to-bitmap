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

void Matrix_fill(Matrix *mat, int value) {
    int *end = mat->data + Matrix_width(mat) * Matrix_height(mat);
    for (int *i = mat->data; i < end; ++i) {
        *i = value;
    }
}