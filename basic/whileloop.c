#include <stdio.h>

int main()
{
    clear();
    showcredits();

    int x;
    printf("Enter the number : ");
    scanf("%d", &x);

    while (x < 20)
    {
        printf("\n%d", x);
        x++;
    }

    return 0;
}
