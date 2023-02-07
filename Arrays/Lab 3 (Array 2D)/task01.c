// 1. Write a C program to check if the given two matrices are equal or not. The matrices will have the same dimension.

#include <stdio.h>

int main()
{
    int rows, columns;
    scanf("%d %d", &rows, &columns);

    int x[rows][columns], y[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            scanf("%d", &x[i][j]);
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            scanf("%d", &y[i][j]);
    }

    int point = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (x[i][j] != y[i][j])
                point = 0;
        }
    }

    if (point == 1)
        printf("Both matrices are equal.");
    else
        printf("Both matrices are not equal.");
    return 0;
}