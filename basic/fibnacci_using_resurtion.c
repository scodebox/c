#include <stdio.h>

void fib(int);

int main()
{
	int n;
	printf("Enter the range : ");
	scanf("%d", &n);
	printf("%d %d", 0, 1);
	fib(n);

	return 0;
}

void fib(int n)
{
	static long int fst = 0, snd = 1, sum = 0;
	if (n > 0)
	{
		sum = fst + snd;
		fst = snd;
		snd = sum;
		printf("%2ld", sum);
		fib(n - 1);
	}
}
