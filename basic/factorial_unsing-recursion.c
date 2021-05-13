#include <stdio.h>

int fact(int a)
{
	if (a == 1 || a == 0)
	{
		return 1;
	}
	else
	{
		return a * fact(a - 1);
	}
}

int main()
{
	int a, b;
	printf("Enter a number : ");
	scanf("%d", &a);
	b = fact(a);
	printf("\n ans %d", b);

	return 0;
}