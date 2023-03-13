#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    gets(str1);
    gets(str2);

    if (strstr(str1, str2) != NULL)
    {
        printf("%s is a substring of %s\n", str2, str1);
    }
    else
    {
        printf("%s is not a substring of %s\n", str2, str1);
    }

    return 0;
}
