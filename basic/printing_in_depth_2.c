#include <stdio.h>

int main()
{

    float x = 125;
    printf("%f", x);
    printf("\n%10.0f", x);
    printf("\n%10.1f", x);
    printf("\n%10.2f", x);
    printf("\n%10.3f", x);
    printf("\n%10.4f", x);

    printf("\n\n%f", x);
    printf("\n%-10.0f|", x);
    printf("\n%-10.1f|", x);
    printf("\n%-10.2f|", x);
    printf("\n%-10.3f|", x);
    printf("\n%-10.4f|", x);

    printf("\n\n%f", x);
    printf("\n%.0f|", x);
    printf("\n%.1f|", x);
    printf("\n%.2f|", x);
    printf("\n%.3f|", x);
    printf("\n%.4f|", x);

    printf("\n");

    return 0;
}
