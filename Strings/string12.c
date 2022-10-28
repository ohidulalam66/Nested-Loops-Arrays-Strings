// string palindrome
#include <stdio.h>
#include <string.h>
#define max_size 100

int main()
{
    char name1[max_size];

    printf("Enter Your full name : ");
    gets(name1);

    int d = strcmp(name1, strrev(name1));
    if (d == 0)
        printf("String is a palindrome");
    else
        printf("String is not palindrome");

    return 0;
}

// This is not work