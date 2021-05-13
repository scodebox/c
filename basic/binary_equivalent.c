#include <stdio.h>

#define size 32

int main()
{

    int n, i, r /*,sign=1*/;
    static int arr[size];

    /*if(n<0){
       sign=-1;
       n*=sign;
    }*/

    printf("Enter the number : ");
    scanf("%d", &n);

    printf("\n\nBinary Equivalent : ");

    for (i = size - 1; i >= 0 && n > 0; i--)
    {
        r = n % 2;
        arr[i] = r;
        n /= 2;
    }

    /*if(sign==-1){
       
    }*/

    for (i = 0; i < size; i++)
    {
        if (i % 4 == 0)
            printf(" ");
        if (i % 8 == 0)
            printf("  ");
        printf("%d", arr[i]);
    }

    printf("\n");
    return 0;
}
