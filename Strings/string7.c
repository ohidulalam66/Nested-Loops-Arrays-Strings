//  concatenation using strcat()
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

    strcat(name1, name2);
    // strcat(name1, "Alam");

    printf("Your full Name : %s \n", name1);
    printf("Your sure Name : %s", name2);

    return 0;
}