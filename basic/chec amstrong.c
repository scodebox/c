#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,t,r,s ;
	for(i=0;i<500;i++){
		n=i;
		s=0;
		t=n;
		while(n!=0){
			r=n%10;
			s=s+(r*r*r);
			n=n/10;
		}
		if(t==s){
			printf("%d \t Amstrong \n",t);
		}
	}


	getch();
	return 0;
}

