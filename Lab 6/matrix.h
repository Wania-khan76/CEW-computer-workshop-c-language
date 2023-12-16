#ifndef MATRIX_H
#define MATRIX_H
struct Matrix{
    int rows;
    int cols;
    int **data;
};
struct Matrix creatematrix(int rows,int cols);
struct Matrix addition(struct Matrix mat1,struct Matrix mat2);
struct Matrix multiplication(struct Matrix mat1,struct Matrix mat2);
struct Matrix transpose(struct Matrix mat);
int determinant3x3(struct Matrix mat);
void printmatrix(struct Matrix mat);

#endif // MATRIX_H
