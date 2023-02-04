// 5. Write a C program that read n number of values and prints the maximum consecutive sum of 2 values.

#include <stdio.h>

int main()
{
    int n; // arr[100];
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int x, y, kick = 0, sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        x = arr[i];
        y = arr[i + 1];
        kick = x + y;
        if (kick > sum)
            sum = kick;
    }

    printf("%d", sum);

    return 0;
}