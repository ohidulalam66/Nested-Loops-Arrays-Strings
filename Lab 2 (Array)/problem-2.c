// 2. Write a C program to read n number of values in an array and a value ‘x’.Print “Yes” if x is in the array else print “No”.
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int x, flag = 0;
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            flag++;
            break;
        }
    }
    if (flag != 0)
        printf("Yes");
    else
        printf("No");

    return 0;
}