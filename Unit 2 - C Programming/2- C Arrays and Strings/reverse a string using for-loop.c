#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main(){
	//reverse a string
	//equivalent to strrev()
	char name[20];
	printf("enter a string: ");
	fflush(stdout);fflush(stdin);
	gets(name);
	for(int i = 0, j = strlen(name) - 1; i <= j; i++, j--){
		char temp = name[i];
		name[i] = name[j];
		name[j] = temp;

	}
	printf("\nreverse of the string is: %s", name);

}
