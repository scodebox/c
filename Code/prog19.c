#include<stdio.h>

void main(){
	int days,weeks,years;

    printf("Enter a days: ");
    scanf("%d",&days);

    years = days/365;
    days = days%365;

    weeks = days/7;
    days = days%7;

    printf(" %d Years\n %d weeks \n %d days\n",years,weeks,days );
    
}