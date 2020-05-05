#include<stdio.h>
int main()
{
    char  str[100];
    int l,i,n,f=0;
    printf("Enter the length of the string : ");
    scanf("%d",&l);
    printf("Enter the string :");
    for(i=0;i<l;i++){
        scanf("%c",&str[i]);
    }
    n=l;
    for(i=0;i<l/2;i++){
        if(str[i]==str[n-1]){
            f=1;
            n--;
        }
    }
    if(f==0){
        printf("pallindrom");
    }else{
        printf("Not pallindrom");
    }
    return 0;
}
