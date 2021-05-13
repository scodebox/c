#include <stdio.h>

/*


    *
   * *
  * * *
 * * * *
* * * * *


*/

int main()
{
	int temp, i, j, k, n;
	printf("Enter the number of caluam  : ");
	scanf("%d", &n);

	temp = n;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < temp; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("* ");
		}
		printf("\n");
		temp--;
	}

	return 0;
}