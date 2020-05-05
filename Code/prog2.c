#include<stdio.h>

void main(){
	int len,i;
	char text[5];
	printf("Enter len :");
	scanf("%d",&len);

	printf("Enter Chars:");
	scanf("%s",text);

	printf("Reverse: ");
	for(i=len-1;i>=0;i--)
		printf("%c",text[i]);

	printf("\n");
}