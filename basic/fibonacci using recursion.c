#include<stdio.h>
#include<conio.h>
void fib(int);
int main()
{
	int n;
	printf("Enter the range : ");
	scanf("%d",&n);
	printf("%d %d",0,1);
	fib(n);
	getch();
	return 0;
}
void fib(int n){
	static int first=0, second=1,sum;
	if(n>0){
		sum=first+second;
		first=second;
		second=sum;
		printf(" %d",sum);
		fib(n-1);
	}
}

