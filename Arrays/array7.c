// 2D Array or Matrix Array
#include <stdio.h>
#define max_size 100

int main()
{
    int apples[max_size][max_size], rows, columns, i, j;

    // scan Session
    printf("How many rows do you want?\n");
    scanf("%d", &rows);

    printf("How many columns do you want?\n");
    scanf("%d", &columns);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter %dth row & %dth column :", i + 1, j + 1);
            scanf("%d", &apples[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // print Session
    printf("Apples :");
    for (i = 0; i < rows; i++)
    {
        printf("\n");
        for (j = 0; j < columns; j++)
        {
            printf("%d\t", apples[i][j]);
        }
        printf("\n");
    }

    return 0;
}