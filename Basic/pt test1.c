#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=4;i++){
		for(j=i+1;j<=4;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}

	getch();
	return 0;
}

