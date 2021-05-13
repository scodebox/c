#include <stdio.h>

int main()
{
    float C, F;
    printf("Enter the Centigrade value : ");
    scanf("%f", &C);
    F = 1.8 * (C + 32);
    printf("\n\nIn fareanite scale : %f", F);
    return 0;
}
