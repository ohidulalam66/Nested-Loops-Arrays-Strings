// Strings Introductions
#include <stdio.h>
int main()
{
    char ch[] = {'O', 'H', 'I', 'D', 'U', 'L', '\0'};
    char name[] = "Mohammad Ohidul Alam";
    // Line breaks must be used when using multiple lines
    char name1[] = "Mohammad Ohidul Alam \
    BSc in CSE, PUC";

    // ch[0] = 'O';
    // ch[1] = 'H';
    // ch[2] = 'I';
    // ch[3] = 'D';
    // ch[4] = 'U';
    // ch[5] = 'L';
    // // null Char obviously input
    // ch[6] = '\0';

    printf("%s\n", ch);
    printf("%s\n", name);
    printf("%s\n", name1);

    return 0;
}