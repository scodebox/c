#include<stdio.h>
#include<string.h>

int main(){
	char c;
	c = getchar();
//	printf("\n%c",c);
	++c;
	ungetch(c); // unread the char.
	char i;
	i = getchar();
	printf("\n%c",c);
	return 0;
}
