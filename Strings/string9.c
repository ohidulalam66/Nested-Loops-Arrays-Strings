// String compare using strcmp()
#include <stdio.h>
#include <string.h>
#define max_size 100

int main()
{
    char name1[max_size], name2[max_size];

    printf("Enter Your full name : ");
    gets(name1);
    printf("Enter Your friend name : ");
    gets(name2);

    int total = strcmp(name1, name2);

    if (total == 0)
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}