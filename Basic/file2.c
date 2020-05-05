#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    fp=fopen("d:\\123\\file.txt","r");

    char ch;

    ch=fgetc(fp);

    while(ch!=EOF){
        printf("%c",ch);
        ch=fgetc(fp);
    }

    fclose(fp);

    getch();
    return 0;

}
