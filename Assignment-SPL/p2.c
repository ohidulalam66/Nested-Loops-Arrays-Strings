// Write down the outputs of the code segments and explain the output of each code segment where n = 5.
#include <stdio.h>

int main()
{
    int x, y, i, n;
    x = i = 0;
    y = 2;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        x += i;
    x += y;

    printf("x = %d\n", x);
    return 0;
}

/* #include <stdio.h>

int main()
{
    int x, y, i, n;
    x = i = 0;
    y = 2;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        x += i;
    x += y;

    printf("x = %d\n", x);
    return 0;
} */