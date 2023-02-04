// 6. Write a C program that read n number of values and prints the maximum sum of 2 values.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], counter = 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[0], secMax = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secMax && arr[i] < max)
            secMax = arr[i];
    }
    counter = max + secMax;
    printf("%d", counter);

    return 0;
}