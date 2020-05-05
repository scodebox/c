#include<stdio.h>

void main(){
	int n;
	printf("Enter len : ");
	scanf("%d",&n);

	printf("\n\n");

	int i,j;
	for(i=n;i>=1;i--){
		for(j=n;j>=i;j--)
			printf("%d ",j);
		printf("\n");
	}
}