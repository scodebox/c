#include <stdio.h>

int main()
{
	int n, r, i = 0, j;
	int ar[10];

	printf("Enter a number : ");
	scanf("%d", &n);
	
	while (n > 0)
	{
		r = n % 2;
		ar[i] = r;
		n = n / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		printf("%d", ar[j]);
	}


	return 0;
}
