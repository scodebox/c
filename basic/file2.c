#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("file.txt", "r");

    char ch;

    ch = fgetc(fp);

    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fp);
    }

    fclose(fp);

    return 0;
}
