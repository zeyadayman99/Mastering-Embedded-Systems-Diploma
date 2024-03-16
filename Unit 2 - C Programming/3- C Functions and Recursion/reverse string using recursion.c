#include "stdio.h"
#include "string.h"

void getReverseSentence(char sentence[], int index, int length);
int main(){
	char sentence[20];
	int length;
	printf("enter a sentence ");
	fflush(stdout);fflush(stdin);
	gets(sentence);
	length = strlen(sentence);
	getReverseSentence(sentence, 0, length - 1);
	printf("\nreverse is %s", sentence);
}

void getReverseSentence(char sentence[], int index, int length){
	char temp = sentence[index];
	sentence[index] = sentence[length - index];
	sentence[length - index] = temp;
	if (index == length / 2)
	{
		return;
	}
	getReverseSentence(sentence, index + 1, length);
}
