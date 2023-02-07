// 2. Write a C program to interchange the diagonals of a square matrix.

#include <stdio.h>

int main()
{
    int sqr;
    scanf("%d", &sqr);

    int array[sqr][sqr];
    for (int i = 0; i < sqr; ++i)
    {
        for (int j = 0; j < sqr; ++j)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("\n");

    int pick = 0;
    for (int i = 0; i < sqr; ++i)
    {
        pick = array[i][i];
        array[i][i] = array[i][sqr - i - 1];
        array[i][sqr - i - 1] = pick;
        for (int j = 0; j < sqr; ++j)
            printf("%d ", array[i][j]);
        printf("\n");
    }

    return 0;
}