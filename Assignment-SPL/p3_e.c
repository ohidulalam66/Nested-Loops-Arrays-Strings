#include <stdio.h>
int main()
{
    char c = 'A';
    while (c <= 'F')
    {
        switch (c)
        {
        case 'A':
        case 'B':
        case 'C':
            c++;
            continue;
        case 'D':
        case 'E':
        case 'F':
            c++;
        }
        putchar(c);
    }
    return 0;
}