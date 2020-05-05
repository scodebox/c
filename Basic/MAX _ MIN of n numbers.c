#include<stdio.h>
#include<conio.h>
int main()
{
	int MAX, MIN, temp, i, n;
	printf("ENTER THE N : ");
	scanf("%d",&n);
	printf("GIVE %d NUMBERS : ",n);
	scanf("%d",&MAX);
	MIN=MAX;
	for(i=1;i<n;i++){
		scanf("%d",&temp);
		if(temp>MAX)	MAX=temp;
		else if(temp<MIN)	MIN=temp;
	}
	printf("MAX = %d, MIN = %d",MAX,MIN);	
	getch();
	return 0;
}

