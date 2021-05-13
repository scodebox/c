#include<stdio.h>

void main(){
	int c;
	printf("Enter Number : ");
	scanf("%d",&c);

	if (c%2==0)
		printf("Even number\n");
	else
		printf("odd number\n");
}