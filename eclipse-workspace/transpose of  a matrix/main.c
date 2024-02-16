/*
 * main.c
 *
 *  Created on: Feb 16, 2024
 *      Author: zeadayman
 */
#include"stdio.h"

int main(){
	int matrix[3][3];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("Enter Element at position [%d][%d] ", i, j);
			fflush(stdout);fflush(stdin);
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("\nyour matrix is:\n");
	for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				printf("%d ", matrix[i][j]);
			}
			printf("\n");
		}
	printf("\ntranspose of matrix is:\n");
		for(int i = 0; i < 3; i++){
				for(int j = 0; j < 3; j++){
					printf("%d ", matrix[j][i]);
				}
				printf("\n");
			}
}
