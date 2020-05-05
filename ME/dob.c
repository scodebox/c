#include<stdio.h>

void main(){
	int dob,temp;
	printf("Enter DD : ");
	scanf("%d",&dob);

	printf("Enter MM : ");
	scanf("%d",&temp);
	dob=dob<<4;
	dob=dob|temp;

	printf("Enter YY : ");
	scanf("%d",&temp);
	dob=dob<<7;
	dob=dob|temp;

	printf("\n Date: %d/%d/%d \n",(dob&63488)>>11,(dob&1920)>>7,(dob&127));
}