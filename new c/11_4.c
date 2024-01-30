#include <stdio.h>

void addMatrices(int *mat1, int *mat2, int rows, int cols, int *resMat);

int main()
{

    int mat1[] = {1, 2, 3, 4, 5, 6};
    int mat2[] = {3, 4, 5, 1, 2, 3};

    int rows = 2;
    int cols = 3;

    int resMat[rows * cols];

    addMatrices(mat1, mat2, rows, cols, resMat);

    printf("\nAfter adding two matrices:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%5d", *(resMat + i * cols + j));
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}

void addMatrices(int *mat1, int *mat2, int rows, int cols, int *resMat)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            *(resMat + i * cols + j) = *(mat1 + i * cols + j) + *(mat2 + i * cols + j);
        }
    }
}