#include<stdio.h>
#include<conio.h>
#include "MyLib.h"

int main()
{
    clear();
    showcredits();
    
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    if(n%2==0){
          printf("%d is even",n);
    }else{
          printf("%d is odd",n);
    }

    printf("\n\nPress any key to continue ...");
    getch();
    return 0;
}
