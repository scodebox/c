#include<stdio.h>

void main(){
	int a,b,temp;
	printf("Enter first number A = ");
	scanf("%d",&a);
	printf("Enter second number B = ");
	scanf("%d",&b);

	temp = a;
	a = b;
	b = temp;

	
	printf("A : %d\n",a);	
	printf("B : %d\n",b);	
}