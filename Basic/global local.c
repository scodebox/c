#include<stdio.h>
#include<conio.h>
int main()
{
    int i=10,j;
    j=abc(i);
    printf("%d",++i);
    getch();
    return 0;
}
int abc(int i)
{
    return i--;
}
