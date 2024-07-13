#include "stdio.h"

void power_of_number(int number, int power);
int main(){
	int num, power;
	printf("enter base number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d", &num);
	printf("\nenter power number(positive integer): ");
	fflush(stdout);fflush(stdin);
	scanf("%d", &power);
	printf("%d ^ %d = ", num, power);
	power_of_number(num, power);
	return 0;
}

void power_of_number(int number, int power){
	static int total = 1;
	if(power > 0)
		total *= number;
	else{
		printf("%d", total);
		return;
	}
	power_of_number(number, power - 1);
}
