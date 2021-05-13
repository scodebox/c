#include <stdio.h>

int main()
{

    int a = 3, b = 2, c;
    c = a & b;
    printf("a & b = %d", c);

    c = a | b;
    printf("\n\na | b = %d", c);

    c = a ^ b;
    printf("\n\na ^ b = %d", c);

    printf("\n");

    return 0;
}
