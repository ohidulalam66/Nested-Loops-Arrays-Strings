#include <stdio.h>

int main()
{
    int n, i, prev = 1, current = 1, next;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", prev);
        next = prev + current;
        prev = current;
        current = next;
    }

    return 0;
}
