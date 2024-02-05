#include"stdio.h"

int main(){
	//ASCII Equivalent of a Char
	char c;
	printf("please enter a character: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &c);
	printf("ASCII Equivalent of %c = %d", c, (int)c);
}
