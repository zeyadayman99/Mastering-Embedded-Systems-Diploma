#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main(){
	char name[20];
	char char_to_be_searched;
	printf("enter a string: ");
	fflush(stdout);fflush(stdin);
	gets(name);
	printf("\nenter a character to find frequency: ");
	fflush(stdout);fflush(stdin);
	scanf("%c", &char_to_be_searched);
	int count = 0;
	for(int i = 0; i < strlen(name); i++){
		if(char_to_be_searched == name[i])
			count++;
	}
	printf("\n%c in string %s exits %d times", char_to_be_searched, name, count);
}
