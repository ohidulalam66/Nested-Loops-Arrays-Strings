#include <stdio.h>

int main()
{
    int n, i, j, is_prime;
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        is_prime = 1;

        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
