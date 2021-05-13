#include<stdio.h>
#include<conio.h>
int main()
{
	int m1[3][3];
	int i,j;
	
	printf("Enter the a matrix : ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&m1[i][j]);
		}
	}
	
	printf("\n Your entered : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3d",m1[i][j]);
		}
		printf("\n");
	}
	printf("\n |DIAGONAL|\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				printf("%3d",m1[i][j]);
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
		
	getch();
	return 0;
}

