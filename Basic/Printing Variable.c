#include<stdio.h>
#include<conio.h>
#include "MyLib.h"

#define x 10

int main()
{
    clear();
    showcredits();
    
    /*const int x=10;
    x=x+1;*/
    printf("%d",x);
    
    printf("\n\t\tWelcome to \r C programming");
    
    printf("\n\nPress any key to continue ...");
    getch();
    return 0;
}
