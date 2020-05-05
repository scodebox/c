#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;

    char name[20];
    int roll;
    float marks;

    fp=fopen("d:\\123\\file.txt","w");

    printf("Enter your name : ");
    gets(name);
    fprintf(fp,"Name : %s",name);

    printf("Enter your roll : ");
    scanf("%d",&roll);
    fprintf(fp,"\n Roll : %d",roll);

    printf("Enter your marks : ");
    scanf("%f",&marks);
    fprintf(fp,"\n Marks : %f",marks);

    fclose(fp);

    getch();
    return 0;
}
