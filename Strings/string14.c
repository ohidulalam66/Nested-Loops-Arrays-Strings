// strupr() and strlwr()
#include <stdio.h>
#include <string.h>
#define max_size 100

int main()
{
    char name[max_size];

    printf("Enter Your's name : ");
    gets(name);

    printf("\nUpper String is: %s", strupr(name));
    printf("\nLower String is: %s", strlwr(name));
    return 0;
}