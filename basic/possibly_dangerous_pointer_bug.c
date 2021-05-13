#include <stdio.h>

int main()
{
    printf("Warning ! Results Unknown !\n");
    printf("Proceed at your own risk !\n");
    printf("Press any key to continue ...");

    printf("\n");

    int x, *p;
    p = &x;
    while (1)
    {
        *p = 0;
        p = p + 1;
        printf("%d\n", p);
    }
}