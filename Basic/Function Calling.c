#include<stdio.h>
#include<conio.h>
#include "MyLib.h"

int main()
{
    clear();
    showcredits();
    
    int a=10,b=5,c;
    c=add(a,b);
    printf("%d",c);

    printf("\n\nPress any key to continue ...");
    getch();
    return 0;
}

int add(int a,int b)
{
    return a+b;
}
