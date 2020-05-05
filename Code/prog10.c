#include<stdio.h>

void main(){
	int num, first, last;
	printf("Enter 2 digit number : ");
	scanf("%d",&num);

	last = num%10;
	num = num/10;
	first = num%10;

	printf("Reverse order : %d%d\n",last,first);	
}