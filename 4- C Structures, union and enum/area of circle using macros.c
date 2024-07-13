#include<stdio.h>

#define pi 3.14
int main(){
	int radius;
	printf("enter circle radius: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &radius);
	printf("area = %f", pi * radius * radius);
	return 0;
}
