#include <stdio.h>
int main()
{
	int n, t, r, s = 0;

	printf("Enter a number for check : ");
	scanf("%d", &n);
	
	t = n;
	
	while (n != 0)
	{
		r = n % 10;
		s = s + (r * r * r);
		n = n / 10;
	}
	
	if (s == t)
	{
		printf("amstrong\n");
	}
	else
	{
		printf("not amstrong\n");
	}

	return 0;
}
