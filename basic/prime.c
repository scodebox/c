#include <stdio.h>

int main()
{
	int n, i, flag;

	printf("Enter a number to check : ");
	scanf("%d", &n);

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
		}
	}

	if (flag == 1)
	{
		printf("Not prime");
	}
	else
	{
		printf("prime number");
	}

	return 0;
}
