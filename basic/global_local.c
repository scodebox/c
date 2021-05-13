#include <stdio.h>

int abc(int i)
{
    return i--;
}

int main()
{
    int i = 10, j;
    j = abc(i);
    printf("%d", ++i);

    return 0;
}