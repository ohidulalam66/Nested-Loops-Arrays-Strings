#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], reversed_str[100];
    int i, j, len;
    gets(str);

    len = strlen(str);

    // Reverse the string
    for (i = len - 1, j = 0; i >= 0; i--, j++)
    {
        reversed_str[j] = str[i];
    }

    reversed_str[j] = '\0'; // Add null terminator

    printf("%s\n", reversed_str);

    return 0;
}
