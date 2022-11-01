// string swapping
#include <stdio.h>
#include <string.h>
#define max_size 100

int main()
{
    char name1[max_size], name2[max_size], tempName[max_size];

    printf("Enter Your's name : ");
    gets(name1);
    printf("Enter Your friend's name : ");
    gets(name2);

    printf("Your's Name = %s\n", name1);
    printf("Your friend's Name = %s\n", name2);

    strcpy(tempName, name1);
    strcpy(name1, name2);
    strcpy(name2, tempName);

    printf("\n\nYour's Name = %s\n", name1);
    printf("Your friend's Name = %s\n", name2);

    return 0;
}