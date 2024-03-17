#include "stdio.h"
int clear_specific_bit(int number, int  position);
void main(){
	int number, bit_position;
	printf("enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &number);
	printf("\nBit position = ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &bit_position);
	printf("result = %d", clear_specific_bit(number, bit_position));
}

int clear_specific_bit(int number, int  position){
	number &= ~(1<<position);
	return number;
}
