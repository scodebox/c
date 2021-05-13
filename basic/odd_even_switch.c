#include <stdio.h>

int main()
{
    int r, n;
    printf("Enter the number : ");
    scanf("%d", &n);

    r = n % 2;

    switch (r)
    {
    case 0:
        printf("%d is even", n);
        break;
    case 1:
        printf("%d is odd", n);
        break;
    }

    printf("\n");

    return 0;
}
