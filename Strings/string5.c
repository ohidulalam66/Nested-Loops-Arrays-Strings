// finding length of String without strlen()
#include <stdio.h>
#define max_size 100

int main()
{
    char name[max_size];

    printf("Enter Your full name : ");
    gets(name);

    int i = 0, length = 0;

    while (name[i] != '\0')
    {
        i++;
        length++;
    }

    printf("Name length = %d", length);

    return 0;
}