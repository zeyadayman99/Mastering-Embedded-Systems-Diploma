#include"stdio.h"

int main(){
	//positive or negative Numbers
	int num;
	printf("please enter a number you want to check: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &num);
	if(num > 0){
		printf("%d is positive", num);
	}
	else if(num < 0){
		printf("%d is negative", num);
	}
	else{
		printf("%d is neither negative nor positive", num);
	}
}

