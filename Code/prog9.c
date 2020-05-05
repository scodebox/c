#include<stdio.h>

void main(){
	int num, first, last;
	printf("Enter 3 digit number : ");
	scanf("%d",&num);

	last = num%10;
	num = num/10;
	num = num/10;
	first = num%10;

	printf("SUM of first and last : %d\n",(last+first));	
}