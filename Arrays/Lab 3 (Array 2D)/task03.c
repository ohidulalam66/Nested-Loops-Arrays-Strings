// Write a C program to find the sum of the diagonals of a square matrix.

// Sum of diagonal elements of a matrix

#include <stdio.h>
#define max_size 100

int main()
{
    int pickup;
    scanf("%d", &pickup);
    int array[pickup][pickup];

    for (int i = 0; i < pickup; i++)
    {
        for (int j = 0; j < pickup; j++)
            scanf("%d", &array[i][j]);
    }
    printf("\n");

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < pickup; i++)
    {
        for (int j = 0; j < pickup; j++)
        {
            if (i == j)
            {
                sum1 += array[i][j];
                sum2 += array[i][pickup - i - 1];
            }
        }
    }
    printf("\nSum of left-top  diagonal = %d", sum1);
    printf("\nSum of right-top diagonal = %d", sum2);

    return 0;
}