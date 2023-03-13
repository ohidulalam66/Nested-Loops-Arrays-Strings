// Write down the outputs of the following programs
#include <stdio.h>
int main()
{
    int x = 0, i = 0;
    do
    {
        if (i % 5 == 0)
        {
            x++;
            printf("%d", x);
        }
        ++i;
    } while (i < 20);
    printf("\nx = %d", x);
    return 0;
}