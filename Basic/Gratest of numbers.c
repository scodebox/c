#include<stdio.h>
int main()
{
    int num[5],grt=0,i;
    printf("Enter the numbers : ");
    for(i=0;i<5;i++)
        scanf("%d",&num[i]);
    for(i=0;i<5;i++){
        if(grt<num[i]){
            grt=num[i];
        }
    }
    printf("The graest of those numbers : %d",grt);
    return 0;
}
