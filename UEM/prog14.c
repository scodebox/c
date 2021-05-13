#include<stdio.h>

void main(){
	float c,f;
	printf("Celsius = ");
	scanf("%f",&c);

	f = ((c*5)/9)+32;
	
	printf("Fahrenheit  : %f\n",f);
}