#include"stdio.h"

int main(){
	//swap two numbers without Temp variable
	int a, b;

	printf("Enter Two Numbers to Swap: ");
	printf("\r\na and b = ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d %d", &a, &b);
	printf("before swap: a = %d, b = %d", a, b);
	if(a == 0){
		a = b;
		b = 0;
	}
	else if(b == 0){
		b = a;
		a = 0;
	}
	else{
		a = a + b;
		b = a - b;
		a = a - b;
	}
//	another way
//	else {
//	        a = a * b;
//	        b = a / b;
//	        a = a / b;
//	    }
	printf("\r\nafter swap: a = %d, b = %d", a, b);
}
