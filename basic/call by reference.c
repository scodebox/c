#include<stdio.h>
#include<conio.h>
void inc(int *p)
{
	*p=*p+1;
}
int main()
{
	int p=10;
	inc(&p);
	printf("%d",p);

	getch();
	return 0;
}

