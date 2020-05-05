#include<stdio.h>
#include<conio.h>
int main()
{int ar[3][3];
int i,j;
printf("Enter the matrix\n");
for(i=0;i<3;i++)
{
                for(j=0;j<3;j++)
                {
                                scanf("%d",&ar[i][j]);
                }
}
printf("The matrix is\n");

for(i=0;i<3;i++)
{
                for(j=0;j<3;j++)
                {
                                printf("%3d",ar[i][j]);
                }
                printf("\n");
}
printf("\n The diagonal is\n");
for(i=0;i<3;i++)
{
                for(j=0;j<3;j++)
                {
                                if(i==j)
                                {
                                printf("%3d",ar[i][j]);
                                }
                                else
                                {
                                    printf(" ");
                                }
                }
                printf("\n");
}
printf("\n\n another diagonal is\n");
for(i=0;i<3;i++)
{
                for(j=0;j<3;j++)
                {
                                if(i+j==2)
                                {
                                printf("%3d",ar[i][j]);
                                }
                                 else
                                {
                                    printf(" ");
                                }
                }
              printf("\n");  
}
getch();
return 0;
}
