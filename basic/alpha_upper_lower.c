#include <stdio.h>

int main()
{
	char c;
	int n;

	printf("Enter a char : ");
	scanf("%c", &c);
	
	n = c;
	
	if (n >= 65 && n <= 90)
	{
		n = n + 32;
		printf("%c", n);
	}
	else
	{
		if (n >= 93 && n <= 122)
		{
			n = n - 32;
			printf("%c", n);
		}
	}
	
	printf("\n");
	return 0;
}
