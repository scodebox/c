#include <stdio.h>

/*

  1
 234
56789

*/

int main()
{
	int temp, i, j, k, n, c = 1;
	printf("Enter the number of caluam  : ");
	scanf("%d", &n);
	temp = n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < temp; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= ((2 * i) - 1); k++)
		{
			printf("%d", c);
			c++;
		}
		printf("\n");
		temp--;
	}

	return 0;
}