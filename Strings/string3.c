// Display string character-wise
#include <stdio.h>
#define max_size 100

int main()
{
    char name[max_size], i = 0;

    printf("Enter Your full name : ");
    gets(name);

    printf("This is Your full name character-wise :");
    while (name[i] != '\0')
    {
        printf("%c\t", name[i]);
        i++;
    }

    return 0;
}