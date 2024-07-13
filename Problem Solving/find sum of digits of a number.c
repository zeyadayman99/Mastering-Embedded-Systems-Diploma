
#include <stdio.h>
#include <string.h>

int sum_of_digits (int num) {
	int sum = 0;
	for (int i = num; i > 0; i++) {
		sum += (num%10);
		num /= 10;
	}
	return sum;
}
int main() {
	int num;
	printf("please enter the number to find sum: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);
	printf("sum of %d digits = %d", num, sum_of_digits (num));
	return 0;
}
