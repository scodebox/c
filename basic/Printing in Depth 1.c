#include<stdio.h>
#include<conio.h>

int main()
{
    
    int x=125;
    printf("%d",x);
    printf("\n%4d",x);
    printf("\n%5d",x);
    printf("\n%6d",x);
    printf("\n%7d",x);
    printf("\n%8d",x);
    
    printf("\n\n%d",x);
    printf("\n%-4d",x);
    printf("\n%-5d",x);
    printf("\n%-6d",x);
    printf("\n%-7d",x);
    printf("\n%-8d",x);
    
    printf("\n\n%5d",125);
    printf("\n%5d",1024);
    printf("\n%5d",12);
    
    printf("\n\n\t%-5d Hello",125);
    printf("\n\t%-5d Hello",1024);
    printf("\n\t%-5d Hello",12);
    
    printf("\n\nPress any key to continue ...");
    getch();
    return 0;
}
