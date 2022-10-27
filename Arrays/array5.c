// Linear Search from 75, 47, 89, 32, 23, 15, 90, 55, 34, 4, 62
#include <stdio.h>
int main()
{
    int number[] = {75, 47, 89, 32, 23, 15, 90, 55, 4, 62};
    int value, i, position = -1;
    printf("75, 47, 89, 32, 23, 15, 90, 55, 4, 62 Which number do you want to find?\n");
    scanf("%d", &value);

    for (i = 0; i < 10; i++)
    {
        if (value == number[i])
        {
            // position = i;
            position = i + 1;
            break;
        }
    }

    if (position == -1)
        printf("The number cannot be found");
    else
        printf("Position of %d is %d", value, position);

    return 0;
}