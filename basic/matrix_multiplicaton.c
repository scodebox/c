#include <stdio.h>

int main()
{
	int ar1[3][3], ar2[3][3], ar3[3][3];
	int i, j, k, sum;

	printf("Enter 1st matrix : ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &ar1[i][j]);
		}
	}
	printf("\n");
	printf("You Entered 1st MATRIX	:-\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%3d", ar1[i][j]);
		}
		printf("\n");
	}

	printf("Enter 2st matrix : ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &ar2[i][j]);
		}
	}
	printf("\n");
	printf("You Entered 2nd MATRIX	:-\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%3d", ar2[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum = 0;
			for (k = 0; k < 3; k++)
			{
				sum = sum + (ar1[i][k] * ar2[k][j]);
				ar3[i][j] = sum;
			}
		}
	}

	printf("\n");
	printf("Your answer is 	:-\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%3d", ar3[i][j]);
		}
		printf("\n");
	}

	return 0;
}
