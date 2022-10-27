#include <stdio.h>

int main()
{
    char name[100]; // Array for String
    printf("Enter your name?\t");
    gets(name);
    printf("Hello, %s. I'm Jony.", name);
    return 0;
}