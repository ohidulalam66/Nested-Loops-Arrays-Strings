// 2D Array Addition print X and Y Matrix

#include <stdio.h>

int main()
{
    int rows, columns;
    scanf("%d %d", &rows, &columns);

    int x[rows][columns], y[rows][columns], add[rows][columns];
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

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            add[i][j] = x[i][j] + y[rows][columns];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            printf("%d ", add[i][j]);

        printf("\n");
    }

    return 0;
}