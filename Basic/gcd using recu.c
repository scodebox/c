#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter two no : ");
	scanf("%d %d",&a,&b);
	c=gcd(a,b);
	printf("\nanswer : %d",c);
	getch();
	return 0;
}
int gcd(int a,int b){
	
	if(b==0){
		return a;
	}else{
		return gcd(b,a%b);
	}
}

