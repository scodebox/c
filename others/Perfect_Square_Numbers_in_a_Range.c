#include <stdio.h.h>
#include <math.h>


void main(){
	int a,b;

	a=100;
	b=500;
	
	printf("%d\n",(int)(floor(sqrt(b))-ceil(sqrt(a))+1));
}