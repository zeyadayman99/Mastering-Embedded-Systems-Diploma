#include <stdio.h>

int main(){
	int num;
	printf("enter the number you want to find factorial of : ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &num);
	if(num == 0){
		printf("factorial of %d = 1", num);
	}
	else{
		int factorial = 1;
		for(int i = num; i > 0; i--){
			factorial *= i;
		}
		printf("factorial of %d = %d", num, factorial);
	}

}
