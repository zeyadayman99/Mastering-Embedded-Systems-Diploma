#include "stdio.h"

void getPrimeNumbers(int num1, int num2);
int main(){
	int num1, num2;
	printf("enter two numbers (interval): ");
	fflush(stdout);fflush(stdin);
	scanf("%d %d", &num1, &num2);
	printf("\nprime numbers between %d and %d = ", num1, num2);
	getPrimeNumbers(num1, num2);
	return 0;
}
void getPrimeNumbers(int num1,int num2){
	int size = num2 - num1;
	for(int i = 0; i < size; i++){
		int counter = 0;
		for(int j = 2; j < num1; j++){
			if(num1 % j == 0){
				counter = 1;
				break;
			}
		}
		if(counter == 0){
			printf("%d ", num1);
		}
		num1++;
	}
}
