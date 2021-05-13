#include <stdio.h>

int add(int *a, int *b)
{
    int x;
    x = *a + *b;

    return x;
}

int main()
{
    int a, c, b;
    printf("Enter the 1st no : ");
    scanf("%d", &a);
    printf("\nEnter the 2st no : ");
    scanf("%d", &b);

    c = add(&a, &b);
    printf("\n ans : %d", c);

    return 0;
}