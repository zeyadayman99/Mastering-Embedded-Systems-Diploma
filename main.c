/*
 * main.c
 *
 *  Created on: Feb 13, 2024
 *      Author: zeadayman
 */
#include"stdio.h"

int main(){
	//simple calculator +, -, *, / using switch-case
	int operation;
	int num;
	jump:
	printf("for addition press 1, for subtraction press 2, for multiplication press 3, "
			"for division press 4 ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &operation);
	switch(operation){
	case 1:{
		printf("\nenter the number of numbers you want to add ");
		fflush(stdout);
		fflush(stdin);
		scanf("%d", &num);
		int numbers[num];
		int result = 0;
		printf("\nenter the numbers you want to add ");
		for(int i = 0; i < num; i++){
			fflush(stdout);
			fflush(stdin);
			scanf("%d", &numbers[i]);
		}

		for(int i = 0; i < num; i++)
			result += numbers[i];
		fflush(stdout);
		fflush(stdin);
		printf("\nresult = %d", result);
		break;
	}
	case 2:
	{
		int num1, num2;
		printf("\nenter the numbers you want to subtract");
		fflush(stdout);
		fflush(stdin);
		scanf("%d %d", &num1, &num2);
		if(num1 > num2)
			printf("\nresult = %d", num1 - num2);
		else
			printf("\nresult = %d", num2 - num1);
		break;
	}
	case 3:{
		printf("\nenter the number of numbers you want to multiply ");
		fflush(stdout);
		fflush(stdin);
		scanf("%d", &num);
		int numbers[num];
		int result = 1;
		printf("\nenter the numbers you want to multiply ");
		for(int i = 0; i < num; i++){
			fflush(stdout);
			fflush(stdin);
			scanf("%d", &numbers[i]);
		}
		for(int i = 0; i < num; i++)
			result *= numbers[i];
		fflush(stdout);
		fflush(stdin);
		printf("\nresult = %d", result);
		break;
	}

	case 4:{
		int num1, num2;
		printf("\nenter the numbers you want to divide ");
		fflush(stdout);
		fflush(stdin);
		scanf("%d %d", &num1, &num2);
		printf("\nresult = %f", (float)num1 / (float)num2);
		break;
	}
	default:{
		printf("\nwrong entry, please reselect, ");
		goto jump;
	}
	}
	return 0;
}


