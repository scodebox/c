#include<stdio.h>
#include<conio.h>
int main()
{
	char c;
	int n;
	printf("Enter a char : ");
	scanf("%c",&c);
	n=c;
	//	printf("%d",n);
	if(n>=65 && n<=90){
		n=n+32;
		printf("%c",n);
	}else{if(n>=93 && n<=122){
		n=n-32;
		printf("%c",n);
	}
	}
	

	getch();
	return 0;
}

