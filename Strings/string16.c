// Number of capital-small letters, digits
#include <stdio.h>
#define max_size 100

int main()
{
    char str[max_size];
    int i, capitalLetter, smallLetter, digit;
    printf("Enter String : ");
    gets(str);

    i = capitalLetter = smallLetter = digit = 0;

    /*
    ASCII Values:
    A-Z = 65-90
    a-z = 97-122
    0-9 = 48–57
     */

    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
            capitalLetter++;
        else if (str[i] >= 97 && str[i] <= 122)
            smallLetter++;
        else if (str[i] >= 48 && str[i] <= 57)
            digit++;

        i++;
    }

    printf("Total Capital Letter =  %d\n", capitalLetter);
    printf("Total Small Letter = %d\n", smallLetter);
    printf("Total Digits = %d\n", digit);

    return 0;
}