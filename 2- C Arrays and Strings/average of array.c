#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main(){
	int data_num;
	printf("enter the number of data: ");
	fflush(stdout);fflush(stdin);
	scanf("%d", &data_num);
	double data[data_num];
	for(int i = 1; i <= data_num; i++){
		printf("\ndata number %d = ", i);
		fflush(stdout);fflush(stdin);
		scanf("%lf", &data[i-1]);
	}
	double sum = 0.0;
	for(int i = 0 ; i < data_num; i++){
		sum += data[i];
	}
	printf("Average of Data = %lf", (double)(sum / data_num));
}
