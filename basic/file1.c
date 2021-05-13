#include<stdio.h>

int main()
{
    FILE *fp;

    char name[20];
    int roll;
    float marks;

    fp=fopen("file.txt","w");

    printf("Enter your name : ");
    scanf("%s",name);
    fprintf(fp,"Name : %s",name);

    printf("Enter your roll : ");
    scanf("%d",&roll);
    fprintf(fp,"\n Roll : %d",roll);

    printf("Enter your marks : ");
    scanf("%f",&marks);
    fprintf(fp,"\n Marks : %f",marks);

    fclose(fp);
    return 0;
}
