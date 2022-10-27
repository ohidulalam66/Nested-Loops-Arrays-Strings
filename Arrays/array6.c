// copy all elements of an array to another array

#include <stdio.h>
#define max_number 100
int main()
{
    int numbers1[max_number], numbers2[max_number], n, i;

    printf("How many numbers copy?\t");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the %dth number: \t", i + 1);
        scanf("%d", &numbers1[i]);
    }

    printf("Numbers 1:\t");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", numbers1[i]);
    }

    for (i = 0; i < n; i++)
    {
        numbers2[i] = numbers1[i];
    }

    printf("\nNumbers 2:\t");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", numbers2[i]);
    }

    return 0;
}