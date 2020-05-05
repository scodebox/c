#include<stdio.h>
#include<conio.h>
#include "MyLib.h"

int main()
{
    clear();
    showcredits();
    
    int a=3,b=2,c;
    c=a&b;
    printf("a & b = %d",c);
    
    c=a|b;
    printf("\n\na | b = %d",c);
    
    c=a^b;
    printf("\n\na ^ b = %d",c);
    
    printf("\n\nPress any key to continue ...");
    getch();
    return 0;
}
