#include<stdio.h>

void main(){
	int eid;
	float hour,charge,purchase;
	printf("Enter empployee ID : ");
	scanf("%d",&eid);

	printf("Total worked hours of a month : ");
	scanf("%f",&hour);

	printf("Per hour charge : ");
	scanf("%f",&charge);

	printf("empployee ID: %d \nSalary: %.2f\n",eid,(hour*charge));
}