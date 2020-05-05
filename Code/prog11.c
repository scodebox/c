#include<stdio.h>

void main(){
	int i,num,max;
	printf("Enter 3 int : ");
	scanf("%d",&max);
	for (i=0;i<2;i++){
		scanf("%d",&num);
		if (num > max)
			max = num;
	}

	printf("MAX : %d\n",max);	
}