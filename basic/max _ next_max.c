#include <stdio.h>

swap(int *f, int *s)
{
	int temp;

	temp = *f;
	*f = *s;
	*s = temp;
}

int main()
{
	int i, n, max, nextmax, num;

	printf("Give the value of n : ");
	scanf("%d", &n);

	printf("Enter a %d value : ", n);
	scanf("%d %d", &max, &nextmax);

	if (max < nextmax)
		swap(&max, &nextmax);

	for (i = 1; i < n - 1; i++)
	{
		scanf("%d", &num);
		if (max < num)
		{
			nextmax = max;
			max = num;
		}
		else
		{
			if (nextmax < num)
				nextmax = num;
		}
	}

	printf("MAX : %d\t NEXT MAX : %d", max, nextmax);
	return 0;
}
