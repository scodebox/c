#include<stdio.h>
int main()
{
	int n, MAX , num, i;
	printf("ENTER THE TOTAL NUMBER : ");
	scanf("%d",&n);
	if(n>0){
		printf("ENTER THE NUMBERS : ");
	scanf("%d",&num);
	MAX = num;
	for(i=1; i<n; i++){
		scanf("%d",&num);
		if(num > MAX ){
			MAX = num;
		}	
	}
	}
	printf("MAX : %d ", MAX);
	
}

