#include <stdio.h>

int main()
{
    int ch = 'a';

    while (ch <= 'z')
    {
        printf("%c\t%d\n", ch, ch);
        ch++;
    }

    printf("\n");
    return 0;
}
