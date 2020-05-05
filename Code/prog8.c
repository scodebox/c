#include<stdio.h>

void main(){
	char input;
	printf("Enter char : ");
	scanf("%c",&input);
	if (input >= 'a' && input <= 'z'){
		printf("Lower case : %c\n",(input-32));
	}
	else printf("Invalid input!\n");
	
}