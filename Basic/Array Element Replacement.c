#include<stdio.h>
#include<conio.h>
#include "MyLib.h"

int main()
{
    clear();
    showcredits();
    
    int i,size,n,index;
    int arr[100];
    
    printf("Enter no. of elements : ");
    scanf("%d",&size);
    
    printf("Enter %d elements : ",size);
    for(i=0 ; i<size ; i++){
       scanf("%d",&arr[i]);
    }
    
    printf("Enter array index : ");
    scanf("%d",&index);
    printf("Enter the number to be overwritten with : ");
    scanf("%d",&n);
    
    arr[index]=n;
    
    printf("\nArray Elements : ");
    
    for(i=0 ; i<size ; i++){
       printf("%d, ",arr[i]);
    }
    printf("\b\b  \b\b\n");
    
    printf("\n\nPress any key to continue ...");
    getch();
    return 0;
}
