#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], frq[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        frq[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        int counter = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                counter++;
        }

        if (frq[i] != 0)
            frq[i] = counter;
    }

    for (int i = 0; i < n; i++)
    {
        if (frq[i] == 1)
            printf("%d ", arr[i]);
    }

    return 0;
}