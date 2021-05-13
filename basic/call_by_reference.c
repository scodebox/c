#include <stdio.h>

void inc(int *p)
{
	*p = *p + 1;
}

int main()
{
	int p = 10;
	inc(&p);
	printf("%d", p);

	printf("\n");
	return 0;
}
