#include<stdio.h>

void main(){
	int n;
	printf("Enter len : ");
	scanf("%d",&n);

	printf("\n\n");

	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
			printf("%d ",j);
		printf("\n");
	}
}