#include<stdio.h>
#include<conio.h>
#include "MyLib.h"

int main()
{
    clear();
    showcredits();
    
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    
    while(x<20){
        printf("\n%d",x);
        x++;
    }
    

    printf("\n\nPress any key to continue ...");
    getch();
    return 0;
}
