#include <stdio.h>
#include <math.h>
float find_SQRT(int num) {
	int start = 0;
	int end = num;
	float numSqrt;

	while(start <= end) {
		float mid = (end + start) / 2;
		if(mid * mid == num)
			return mid;
		if(mid * mid < num){
			numSqrt = start;
			start = mid + 1;
		}
		else
			end = mid - 1;
	}
	float increment = 0.1;
	for (int i = 0; i < 3; i++){
		while(numSqrt * numSqrt <= num)
			numSqrt += increment;
		numSqrt = numSqrt - increment;
		increment = increment / 10;
	}
	return numSqrt;

}
int main() {
	int num;
	printf("please enter the number to find square root: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);
	//1st way--> printf("square root of %d = %lf", num, sqrt(num));
	//2nd way-->
	printf("square root of %d = %lf", num, find_SQRT(num));
	return 0;
}
