#include"stdio.h"
#include <ctype.h>

int main(){
	//is Alphabet or not
	char ch;
	printf("please enter a char you want to check: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &ch);
//	isalpha() Return Value = 0 in case not Alphabet
//	or return = any other number in case Alphabet
	if(isalpha(ch) == 0){
		printf("%c isn't an alphabet", ch);
	}
	else if(isalpha(ch) != 0){
		printf("%c is an alphabet", ch);
	}
	another solution
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("%c is an alphabet.", ch);
    else
        printf("%c isn't an alphabet.", ch);
	return 0;
}

