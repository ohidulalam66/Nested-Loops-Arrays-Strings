// fibonacci Series
#include <stdio.h>
int main()
{
    int fibonacci[50], n, i, series;

    printf("Enter the number of terms:");
    scanf("%d", &n);

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (i = 2; i <= n; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        series = fibonacci[i];
        printf("%d\t", series);
    }

    return 0;
}