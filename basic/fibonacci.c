#include <stdio.h>

int main()
{
	int first = 0, second = 1, next, c;
	printf("Enter the range : ");
	scanf("%d", &c);
	printf("%2d %2d", first, second);

	while (c > 0)
	{
		next = first + second;
		first = second;
		second = next;
		printf("%2d", next);
		c--;
	}

	printf("\n");
	return 0;
}
