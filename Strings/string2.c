#include <stdio.h>

int main()
{
    char name[100];

    printf("Enter Your name : \n");
    // Scanf cannot take string values due to speech so the gets function must be used
    gets(name);

    printf("Your Full Name : %s", name);
    return 0;
}