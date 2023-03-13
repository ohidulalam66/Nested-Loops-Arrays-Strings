// Write the output of the code if n=1.
// Is there any wrong with the output? If yes, fix the code to get the right output.
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("The input is 1\n");
        break;
    case 2:
        printf("The input is 2\n");
        break;
    default:
        printf("The input is neither 1 nor 2\n");
    }
    return 0;
}