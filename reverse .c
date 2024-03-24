#include <stdio.h>
#include <string.h>

void reverse(int num) {
	char reversed_num [20];
	int i = 0;
	while(num > 0) {
		reversed_num[i] = num % 10;
		num /= 10;
		i++;
	}
	for (int j = 0; j < strlen(reversed_num); j++)
		printf("%d", reversed_num[j]);
}

int main() {
	int num;
	printf("please enter the number to reverse: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);
	printf("reverse of %d = ", num);
	reverse(num);
	return 0;
}
