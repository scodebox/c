#include<stdio.h>
#include<conio.h>
int main()
{
	int m1[3][3],m2[3][3],m3[3][3];
	int i,j;
	
	printf("Enter the 1st matrix : ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&m1[i][j]);
		}
	}
	
	printf("\n Your 1st matrix : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3d",m1[i][j]);
		}
		printf("\n");
	}
	
	
	printf("Enter the 2nd matrix : ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&m2[i][j]);
		}
	}
	
	printf("\n Your 2nd matrix : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3d",m2[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			m3[i][j]=m1[i][j]+m2[i][j];
		}
	}
	
	
	printf("\n Your answer is : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3d",m3[i][j]);
		}
		printf("\n");
	}
	
	
	getch();
	return 0;
}

