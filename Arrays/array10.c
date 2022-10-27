// Multiplication Matrix Array
#include <stdio.h>
#define maxSize 100

int main()
{
    int firstNumber[maxSize][maxSize], secondNumber[maxSize][maxSize], firstNumberRows, firstNumberColumns, secondNumberRows, secondNumberColumns, i, j, k, sum = 0, multiplication[maxSize][maxSize];

    // scanning part
    printf("You can Multiplication the product of matrixes :\n");
    printf("First set the rows and columns for the matrix :\t");
    scanf("%d %d", &firstNumberRows, &firstNumberColumns);
    printf("Second set the rows and columns for the matrix :");
    scanf("%d %d", &secondNumberRows, &secondNumberColumns);

    // check rows and columns same
    while (firstNumberColumns != secondNumberRows)
    {
        printf("Error!! Column of first numbers not equal to row of second.\n");
        printf("First set the rows and columns for the matrix :\t");
        scanf("%d %d", &firstNumberRows, &firstNumberColumns);
        printf("Second set the rows and columns for the matrix :");
        scanf("%d %d", &secondNumberRows, &secondNumberColumns);
    }

    // scanning first
    printf("\n\n");
    for (i = 0; i < firstNumberRows; i++)
    {
        for (j = 0; j < firstNumberColumns; j++)
        {
            printf("Enter %dth row & %dth column First Number :", i + 1, j + 1);
            scanf("%d", &firstNumber[i][j]);
        }
    }
    //    scanning second
    printf("\n");
    for (i = 0; i < secondNumberRows; i++)
    {
        for (j = 0; j < secondNumberColumns; j++)
        {
            printf("Enter %dth row & %dth column Second Number :", i + 1, j + 1);
            scanf("%d", &secondNumber[i][j]);
        }
    }

    // multiplication start
    for (i = 0; i < firstNumberRows; i++)
    {
        for (j = 0; j < secondNumberColumns; j++)
        {
            for (k = 0; k < firstNumberColumns; k++)
            {
                sum = sum + firstNumber[i][k] * secondNumber[k][j];
            }
            multiplication[i][j] = sum;
            sum = 0;
        }
    }

    //    printing first
    printf("\n\nFirst Numbers :");
    for (i = 0; i < firstNumberRows; i++)
    {
        for (j = 0; j < firstNumberColumns; j++)
        {
            printf("%d\t", firstNumber[i][j]);
        }
        printf("\n");
        printf("\t\t");
    }

    //    printing second
    printf("\nSecond Numbers :");
    for (i = 0; i < secondNumberRows; i++)
    {
        for (j = 0; j < secondNumberColumns; j++)
        {
            printf("%d\t", secondNumber[i][j]);
        }
        printf("\n");
        printf("\t\t");
    }

    //    printing multiplication
    printf("\nMultiplication Numbers :");
    for (i = 0; i < firstNumberRows; i++)
    {
        for (j = 0; j < secondNumberColumns; j++)
        {
            printf("%d\t", multiplication[i][j]);
        }
        printf("\n");
        printf("\t\t\t");
    }
    return 0;
}