#include<stdio.h>

void main(){
	int a,b;
	printf("Enter first number A = ");
	scanf("%d",&a);
	printf("Enter second number B = ");
	scanf("%d",&b);

	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("A : %d\n",a);	
	printf("B : %d\n",b);	
}