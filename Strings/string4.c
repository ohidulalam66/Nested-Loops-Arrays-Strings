// finding length of String using strlen() func
#include <stdio.h>
#include <string.h>
#define max_size 100

int main()
{
    char name[max_size];

    printf("Enter Your full name : ");
    gets(name);

    // int length = strlen(name);
    printf("Full Name Length : %d", strlen(name));

    return 0;
}