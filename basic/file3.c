#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int c = 0, space = 0, line = 0;
    char ch;

    fp = fopen("file.txt", "r");

    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        if (ch == ' ')
            space++;
        if (ch == '\n')
            line++;
    }
    printf("\n Total char : %d ", c);
    printf("\n Total space : %d ", space);
    printf("\n Total line : %d ", line);

    fclose(fp);

    return 0;
}
