#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
struct Matrix creatematrix(int rows,int cols){
    struct Matrix matrix;
    matrix.rows=rows;
    matrix.cols=cols;
    matrix.data=(int **)malloc(rows*sizeof(int*));
    for (int i=0;i<rows;i++){
            matrix.data[i]=(int *)malloc(cols*sizeof(int));
    }
    return matrix;
}
struct Matrix addition(struct Matrix mat1,struct Matrix mat2){
    if(mat1.rows==mat2.rows && mat1.cols==mat2.cols){
        struct Matrix resultant=creatematrix(mat1.rows,mat2.cols);
        for(int i=0;i<mat1.rows;i++){
            for(int j=0;j<mat1.cols;j++){
                resultant.data[i][j]=mat1.data[i][j]+mat2.data[i][j];
            }
        }
        return resultant;
    }
    else{
        printf("Not suitable for addition.");
    }

}
struct Matrix multiplication(struct Matrix mat1,struct Matrix mat2){
    if(mat1.cols==mat2.rows){
        struct Matrix resultant=creatematrix(mat1.rows,mat2.cols);
        for (int i=0;i<mat1.rows;i++){
            for (int j=0;j<mat2.cols;j++){
                resultant.data[i][j]=0;
                for (int k=0;k<mat1.cols;k++){
                    resultant.data[i][j]+=mat1.data[i][k]*mat2.data[k][j];
                }
            }
        }
        return resultant;

    }else{
    printf("Not suitable for multiplication.");
    }
}
struct Matrix transpose(struct Matrix mat){
    struct Matrix resultant=creatematrix(mat.cols,mat.rows);
    for (int i=0;i<mat.cols;i++){
        for(int j=0;j<mat.rows;j++){
            resultant.data[i][j]=mat.data[j][i];
        }
    }
    return resultant;
}
int determinant3x3(struct Matrix mat) {
    if (mat.rows != mat.cols) {
        printf("Cannot calculate determinant because it is not a square matrix.\n");
        exit(EXIT_FAILURE);
    }

    if (mat.rows == 1) {
        return mat.data[0][0];
    } else if (mat.rows == 2) {
        return (mat.data[0][0] * mat.data[1][1]) - (mat.data[0][1] * mat.data[1][0]);
    } else if (mat.rows == 3) {
        return (
            mat.data[0][0] * (mat.data[1][1] * mat.data[2][2] - mat.data[1][2] * mat.data[2][1]) -
            mat.data[0][1] * (mat.data[1][0] * mat.data[2][2] - mat.data[1][2] * mat.data[2][0]) +
            mat.data[0][2] * (mat.data[1][0] * mat.data[2][1] - mat.data[1][1] * mat.data[2][0])
        );
    }

    return 0;
}

void printmatrix(struct Matrix mat){
    for(int i=0;i<mat.rows;i++){
        for (int j=0;j<mat.cols;j++){
            printf(" %d ",mat.data[i][j]);
        }
        printf("\n");
    }
}
