// String reverse using strrev()
#include <stdio.h>
#include <string.h>
#define max_size 100

int main()
{
    char name1[max_size];

    printf("Enter Your full name : ");
    gets(name1);

    strrev(name1);
    printf("Your full Name Reverse : %s \n", name1);

    return 0;
}