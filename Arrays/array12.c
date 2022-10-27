// Sum of diagonal elements of a matrix

#include <stdio.h>
#define max_size 100

int main()
{
    int A[max_size][max_size], rows, columns, i, j, sum = 0;

    printf("Enter Numbers of Rows And Columns for the Matrix : \n");
    scanf("%d %d", &rows, &columns);

    while (rows != columns)
    {
        printf("Error! Rows and columns must be equal to Sum diagonal elements.\n");
        printf("Enter Numbers of Rows And Columns for the Matrix : \n");
        scanf("%d %d", &rows, &columns);
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter %dth row & %dth column A Matrix :", i + 1, j + 1);
            scanf("%d", &A[i][j]);
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

    printf("\n");
    // Sum of diagonal elements of a matrix
    printf("Diagonal elements: ");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (i == j)
            {
                printf("%d\t", A[i][j]);
                sum += A[i][j];
            }
        }
    }
    printf("\nsum of Diagonal elements : %d", sum);

    return 0;
}