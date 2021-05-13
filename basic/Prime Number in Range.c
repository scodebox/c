#include<stdio.h>
#include<conio.h>
#include "MyLib.h"

enum boolean{false,true};

int isPrime(int n)
{
    if(n==1){
       return false;
    }
    int i;
    for(i=2;i<=n/2;i++){
       if(n%i==0){
          return false;
       }
    }
    return true;
}

void printPrimes(int lb,int ub)
{
    int i;
    for(i=lb;i<ub;i++){
       if(isPrime(i)){
          printf("%d is prime\n",i);
       }
    }  
}

int main()
{
    clear();
    showcredits();
    
    int l=10,u=100;
    printPrimes(l,u);

    printf("\n\nPress any key to continue ...");
    getch();
    return 0;
}
