#include <stdio.h>s

int main()
{

        int a;
        printf("Enter case number : ");
        scanf("%d", &a);

        switch (a)
        {
        case 1:
                printf("Case 1");
                break;
        case 2:
                printf("Case 2");
                break;
        default:
                printf("Default");
                break;
        }

        return 0;
}