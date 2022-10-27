// Transpose Matrix
#include <stdio.h>
#define max_size 100

int main()
{
    int A[max_size][max_size], transpose[max_size][max_size], rows, columns, i, j;

    printf("Enter Numbers of Rows And Columns for the Matrix : \n");
    scanf("%d %d", &rows, &columns);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter %dth row & %dth column A Matrix :", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            transpose[j][i] = A[i][j];
        }
    }

    printf("\nA Matrix :\n");
    printf("\t");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
        printf("\t");
    }
    printf("\nA Transpose Matrix :\n");
    printf("\t\t");

    for (i = 0; i < columns; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
        printf("\t\t");
    }

    return 0;
}