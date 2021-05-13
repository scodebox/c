#include<stdio.h>
#include<conio.h>
int main()
{
    static int m1[3][3],m2[3][3],ans[3][3];
    int i,j,k;

    printf("ENTER THE 1ST NUMBER : ");          //input 1st matrix
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&m1[i][j]);

    printf("YOU ENTERED : \n");                         //display 1st matrix
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%3d",m1[i][j]);
        }
        printf("\n");
    }

    printf("ENTER THE 2ND NUMBER : ");          //input 1st matrix
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&m2[i][j]);

    printf("YOU ENTERED : \n");                         //display 2nd matrix
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%3d",m2[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            for(k=0;k<3;k++)
                ans[i][j] = ans[i][j]+ ( m1[i][k] * m2[k][j] );

    printf("THE NSWER IS : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%3d",ans[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
