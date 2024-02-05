#include"stdio.h"

int main(){
	//Even or Odd Numbers
	int num;
	printf("please enter a number you want to check: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &num);
	if(num % 2 == 0 && num != 0){
		printf("%d is an even number", num);
	}
	else if(num == 0){
		printf("0 is neither even nor odd");
	}
	else{
		printf("%d is a odd number", num);
	}

}
