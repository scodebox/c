#include<stdio.h>
#include<conio.h>
#include "MyLib.h"

int main()
{
    clear();
    showcredits();
    
    int a;
    printf("Enter case number : ");
    scanf("%d",&a);
    
    switch(a)
    {
        case 1: printf("Case 1");
                break;
        case 2: printf("Case 2");
                break;
        default:printf("Default");
                break;
    }
    
    printf("\n\nPress any key to continue ...");
    getch();
    return 0;
}
