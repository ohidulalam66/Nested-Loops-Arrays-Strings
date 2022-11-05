// Number of vowels, consonants, words, digits and other
#include <stdio.h>
#define max_size 100

int main()
{
    char str[max_size], ch;
    int i, vowels, consonants, words, digits, other;
    printf("Enter String : ");
    gets(str);

    i = vowels = consonants = words = digits = other = 0;

    while ((ch = str[i]) != '\0')
    {

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'U' || ch == 'E' || ch == 'I' || ch == 'O')
            vowels++;
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            consonants++;
        else if (ch >= '0' && ch <= '9')
            digits++;
        else if (ch == ' ')
            words++;
        else
            other++;

        i++;
    }
    words++;

    printf("Total Vowels =  %d\n", vowels);
    printf("Total Consonants = %d\n", consonants);
    printf("Total Digits = %d\n", digits);
    printf("Total Words = %d\n", words);
    printf("Total Other = %d\n", other);

    return 0;
}