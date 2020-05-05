#include<stdio.h>

void main(){
	int n,space;
	printf("Enter len : ");
	scanf("%d",&n);

	printf("\n\n");

	space = (n*2)-2;
	int i,j,k,s;
	for(i=1;i<=7;i++){

		for(j=1;j<=i;j++)
			printf("%d ",j);

		for(s=1;s<=space;s++)
			printf("  ");
		space-=2;


		for(k=j-1;k>=1;k--)
			printf("%d ",k);


		printf("\n");
	}

}