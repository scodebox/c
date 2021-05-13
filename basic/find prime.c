#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,flag;
	for(i=2;i<500;i++){
		for(j=2;j<=i/2;i++){
			if(j%i==0){
				flag=0;
				break;
			}else{
				flag=1;
			}
		}
		if(flag==1){
			printf("%d\t is a Prime NO.",i);
		}
	}


	getch();
	return 0;
}

