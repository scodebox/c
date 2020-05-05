#include<stdio.h>
#include<conio.h>
#include "MyLib.h"

int gcd(int a,int b)
{
    int r=a%b;
    if(r==0){
       return b;
    }
    return gcd(b,r);
}

int main()
{
    clear();
    showcredits();
    
    int a=15,b=65;
    int c=gcd(a,b);
    printf("%d",c);

    printf("\n\nPress any key to continue ...");
    getch();
    return 0;
}
