// find a Maximum number
#include <stdio.h>
int main()
{

    int number[50], n, i;

    printf("You give some numbers from which you want to get the Maximum number: \n");
    scanf("%d", &n);

    printf("Write %d numbers:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }

    int max = number[0];

    for (i = 1; i < n; i++)
    {
        if (max < number[i])
        {
            max = number[i];
        }
    }

    printf("%d of the %d numbers are Maximum number.\n", max, n);

    return 0;
}