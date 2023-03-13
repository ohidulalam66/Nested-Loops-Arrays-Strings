#include <stdio.h>

int main()
{
    float temp;
    scanf("%f", &temp);
    if (temp < 0)
    {
        printf("ICE\n");
    }
    else if (temp <= 100)
    {
        printf("WATER\n");
    }
    else
    {
        printf("STEAM\n");
    }

    return 0;
}
