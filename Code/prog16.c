#include<stdio.h>

void main(){
	float item1,item2,purchase;
	printf("Enter item 1 weight : ");
	scanf("%f",&item1);

	printf("Enter item 2 weight : ");
	scanf("%f",&item2);

	printf("No of purchased : ");
	scanf("%f",&purchase);

	printf("Average value of the items : %f\n",(item1+item2)/purchase);
}