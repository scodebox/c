#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter a number : ");
	scanf("%d",&a);
	b=fact(a);
	printf("\n ans %d",b);

	getch();
	return 0;
}
int fact(int a)
{
	if(a==1 || a==0){
			return 1;
		}
		else{
				return a*fact(a-1);
		}
}
