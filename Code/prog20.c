#include<stdio.h>
#include <math.h>
void main(){
	int x1,x2,y1,y2;
	float ans;

    printf("Enter 1st cordinate: ");
    scanf("%d%d",&x1,&y1);

    printf("Enter 2nd cordinate: ");
    scanf("%d%d",&x2,&y2);

    ans = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    ans = sqrt(ans);



    printf("Distance: %f\n",ans);
    
}