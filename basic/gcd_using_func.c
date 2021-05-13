#include <stdio.h>

int gcd(int a, int b)
{
    int r = a % b;
    if (r == 0)
    {
        return b;
    }
    return gcd(b, r);
}

int main()
{

    int a = 15, b = 65;
    int c = gcd(a, b);
    printf("%d", c);

    printf("\n");

    return 0;
}
