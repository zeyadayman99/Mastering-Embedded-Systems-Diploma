#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(){
	double matrix1[2][2];
	double matrix2[2][2];
	double matrix_sum[2][2];
	printf("enter elements of the 2 matices:");
	fflush(stdout);fflush(stdin);
	for(int i = 0; i < 2; i++){
		for(int j = 0 ; j < 2; j++){
			printf("\nenter matrix 1 [%d][%d]: ", i, j);
			fflush(stdout);fflush(stdin);
			scanf("%lf", &matrix1[i][j]);
		}
	}
	for(int i = 0; i < 2; i++){
		for(int j = 0 ; j < 2; j++){
			printf("\nenter matrix 2 [%d][%d]: ", i, j);
			fflush(stdout);fflush(stdin);
			scanf("%lf", &matrix2[i][j]);
		}
	}
	printf("\nsum of 2 matrices: \n");
	for(int i = 0; i < 2; i++){
		for(int j = 0 ; j < 2; j++){
			matrix_sum[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	for(int i = 0; i < 2; i++){
		for(int j = 0 ; j < 2; j++){
			printf("%lf ", matrix_sum[i][j]);
		}
		printf("\n");
	}
}
