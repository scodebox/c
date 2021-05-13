#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 10, b = 5, c;
    c = add(a, b);
    printf("%d", c);

    printf("\n");
    return 0;
}