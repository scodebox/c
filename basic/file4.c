#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp, *ft;
    char ch;
    fp=fopen("d:\\123\\file.txt","r");
    if(fp==NULL){
        puts("File not found");
        exit (1);
    }
    ft=fopen("d:\\123\\filecopy.txt","w");
    if(ft==NULL){
        puts("File not found");
        fclose(fp);
        exit (2);
    }
    ch=fgetc(fp);
    while(ch!=EOF){
        fprintf(ft,"%c",ch);  
        ch=fgetc(fp);
    }

    fclose(fp);
    fclose(ft);
    printf("Your file copied succesfully.");

    getch();
    return 0;

}
