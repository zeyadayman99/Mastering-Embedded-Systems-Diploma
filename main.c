#include "stdio.h"

int getFactorial(int num);
int main(){
	int num;
	printf("enter the number you want to find factorial for: ");
	fflush(stdout);fflush(stdin);
	scanf("%d", &num);
	printf("\nfactorial of %d = %d", num, getFactorial(num));
	return 0;
}

int getFactorial(int num){
	int factorial = 1;
	while(num > 0){
		factorial *= num;
		num--;
		getFactorial(num);
	}
	return factorial;
}
