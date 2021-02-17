#ifndef __MATRIX_H__
#define __MATRIX_H__

static const int MAX_MATRIX_WIDTH = 500;
static const int MAX_MATRIX_HEIGHT = 500;
struct Matrix {
    int width;
    int height;
    int data[MAX_MATRIX_WIDTH * MAX_MATRIX_HEIGHT];
};

void Matrix_init(Matrix *mat, int width, int height);
int* Matrix_at(Matrix *mat, int row, int column);
int Matrix_width(Matrix *mat);
int Matrix_height(Matrix *mat);
void Matrix_fill(Matrix *mat, int value);

#endif