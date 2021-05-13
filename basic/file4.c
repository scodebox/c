#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp, *ft;
    char ch;

    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        puts("File not found");
        exit(1);
    }
    ft = fopen("filecopy.txt", "w");

    if (ft == NULL)
    {
        puts("File not found");
        fclose(fp);
        exit(2);
    }
    ch = fgetc(fp);

    while (ch != EOF)
    {
        fprintf(ft, "%c", ch);
        ch = fgetc(fp);
    }

    fclose(fp);
    fclose(ft);
    printf("Your file copied succesfully.");

    return 0;
}
