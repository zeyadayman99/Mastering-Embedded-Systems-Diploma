/*
 * main.c
 *
 *  Created on: Feb 4, 2024
 *      Author: zeada
 */
#include"stdio.h"
int main(){
	int rows;
	printf("Enter Number of Rows: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &rows);
	for (int i = 0; i <= rows; i++) {
		for (int j = 0; j <= rows - i; j++) {
			printf("%d ", j + i);
		}
		printf("\n");
	}
	return 0;
}


