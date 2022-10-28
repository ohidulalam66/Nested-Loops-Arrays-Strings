// copy string using strcpy()

#include <stdio.h>
#include <string.h>
#define max_size 100

int main()
{
    char source[max_size], target[max_size];

    printf("Enter Your full name : ");
    gets(source);

    // strcpy(I want to put it on the variable, The variable being copied)
    strcpy(target, source);

    printf("\nSource Code = %s\n", source);
    printf("Target Code = %s\n", target);

    return 0;
}