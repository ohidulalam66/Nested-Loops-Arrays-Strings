// Matrix Addition & Subtraction

#include <stdio.h>
#define max_size 100

int main()
{
    int apples[max_size][max_size], Mangoes[max_size][max_size], addApplesMangoes[max_size][max_size], subApplesMangoes[max_size][max_size], rows, columns, i, j;

    // scan Session
    printf("How many rows do you want?\n");
    scanf("%d", &rows);

    printf("How many columns do you want?\n");
    scanf("%d", &columns);

    printf("Create a matrix for apples with inter and use rows and columns:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter %dth row & %dth column :", i + 1, j + 1);
            scanf("%d", &apples[i][j]);
        }
        printf("\n");
    }

    printf("\nCreate a matrix for Mangoes with inter and use rows and columns:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter %dth row & %dth column :", i + 1, j + 1);
            scanf("%d", &Mangoes[i][j]);
        }
        printf("\n");
    }

    // print Session
    printf("Apples :");
    for (i = 0; i < rows; i++)
    {
        printf("\n");
        for (j = 0; j < columns; j++)
        {
            printf("%d\t", apples[i][j]);
        }
        printf("\t");
    }

    printf("\n\nMangoes :");
    for (i = 0; i < rows; i++)
    {
        printf("\n");
        for (j = 0; j < columns; j++)
        {
            printf("%d\t", Mangoes[i][j]);
        }
        printf("\t");
    }

    printf("\n\nApples & Mangoes Addition:");
    for (i = 0; i < rows; i++)
    {
        printf("\n");
        for (j = 0; j < columns; j++)
        {
            addApplesMangoes[i][j] = apples[i][j] + Mangoes[i][j];
            printf("%d\t", addApplesMangoes[i][j]);
        }
        printf("\t");
    }

    printf("\n\nApples & Mangoes Subtraction:");
    for (i = 0; i < rows; i++)
    {
        printf("\n");
        for (j = 0; j < columns; j++)
        {
            subApplesMangoes[i][j] = apples[i][j] - Mangoes[i][j];
            printf("%d\t", subApplesMangoes[i][j]);
        }
        printf("\t");
    }

    return 0;
}