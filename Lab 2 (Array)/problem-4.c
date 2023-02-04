// 4. Write a C program to read n number of values and print the second largest value.
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
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
    printf("%d", secMax);

    return 0;
}