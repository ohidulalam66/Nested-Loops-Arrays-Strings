// String reverse without strrev()
#include <stdio.h>
#include <string.h>
#define max_size 100

int main()
{
    char name1[max_size], name2[max_size];

    printf("Enter Your full name : ");
    gets(name1);

    int i = 0, j, length = 0;
    while (name1[i] != '\0')
    {
        i++;
        length++;
    }
    for (j = 0; i = length - 1; i >= 0, i--, j++)
    {
        name1[i] = name2[j];
    }
    name2[j] = '\0';

    printf("Your full Name : %s \n", name1);
    printf("Your full Name Reverse: %s \n", name2);

    return 0;
}