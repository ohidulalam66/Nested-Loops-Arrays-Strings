// Some Number Add/Sum
#include <stdio.h>
int main()
{
    int applePrices[100], sum = 0, n;

    printf("How Many Apple Prices You Buy: \t");
    scanf("%d", &n);

    printf("Enter %d Apple Prices: \t", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &applePrices[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum += applePrices[i];
    }

    printf("Sum Apple Prices: %d \n", sum);
    float avg = sum / (float)n;
    printf("Average Apple Prices: %.2f \n", avg);

    return 0;
}