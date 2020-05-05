#include<stdio.h>
#include<conio.h>
#include "MyLib.h"

int main()
{
    clear();
    showcredits();
    
    int age;
    printf("Enter the age : ");
    scanf("%d",&age);
    
    if(age>18){
          printf("Eligible !");
    }else{
          printf("Not Eligible !");
    }
    
    printf("\n\nPress any key to continue ...");
    getch();
    return 0;
}
