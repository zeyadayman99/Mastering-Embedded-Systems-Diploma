#include <stdio.h>
#include <string.h>

void sum(void) {
	int i = 1;
	int count = 0;
	jump:
	if(i<= 100){
		count += i;
		i++;
		goto jump;
	}
	else
		printf("%d", count);
}

int main() {
	printf("the sum of numbers from 1 to 100 = ");
	fflush(stdin);
	sum();
	return 0;
}
