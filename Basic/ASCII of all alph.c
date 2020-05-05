#include<stdio.h>
#include<conio.h>
#include "MyLib.h"

int main()
{
    clear();
    showcredits();
    
    int ch='a';
    
    while(ch<='z')
    {
         printf("%c\t%d\n",ch,ch);
         ch++;
    }

    printf("\n\nPress any key to continue ...");
    getch();
    return 0;
}
