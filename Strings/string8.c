// concatenation without strcat()
#include <stdio.h>
#include <string.h>
#define max_size 100

int main()
{
    char name1[max_size], name2[max_size];

    printf("Enter Your full name : ");
    gets(name1);
    printf("Enter Your sure name : ");
    gets(name2);

    int i = 0, j = 0, length = 0;

    while (name1[i] != '\0')
    {
        i++;
        length++;
    }
    while (name2[j] != '\0')
    {
        name1[length + j] = name2[j];
        j++;
    }

    printf("Your full Name : %s \n", name1);
    printf("Your sure Name : %s", name2);

    return 0;
}