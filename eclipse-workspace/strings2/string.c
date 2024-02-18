#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(){
	char name1[15];
	char name2[15];
	printf("enter first name: ");
	fflush(stdout);fflush(stdin);
	gets(name1);
	printf("\nenter second name: ");
	fflush(stdout);fflush(stdin);
	gets(name2);
	int selection;
	printf("select the operation you want:");
	printf("\nmake both names capital letters press 1,"
			" make both small letters press 2, "
			"to get integer value press 3, to get float value press 4 ");
	fflush(stdout);fflush(stdin);
	scanf("%d", &selection);
	switch(selection){
	case 1:{
		//Equivalent to strupr()
		int small_a = 'a';
		int capital_A = 'A';
		int small_z = 'z';
		int capital_Z = 'Z';
		int difference = small_a - capital_A;
		for(int i = 0, j = 0; i < strlen(name1), j < strlen(name2); i++, j++){
			if(name1[i] >= small_a && name1[i] <= small_z){
				int newASCII = (int)name1[i] - difference;
				name1[i] = (char)newASCII;
			}
			if(name2[j] >= small_a && name2[j] <= small_z){
				int newASCII = (int)name2[j] - difference;
				name2[j] = (char)newASCII;				}
		}
		fflush(stdout);
		printf("\nfirst name: %s, second name: %s", name1, name2);
		break;
	}
	case 2:{
		//Equivalent to strlwr()
		int small_a = 'a';
		int capital_A = 'A';
		int small_z = 'z';
		int capital_Z = 'Z';

		int difference = small_a - capital_A;
		for(int i = 0, j = 0; i < strlen(name1), j < strlen(name2); i++, j++){
			if(name1[i] >= capital_A && name1[i] <= capital_Z){
				int newASCII = (int)name1[i] + difference;
				name1[i] = (char)newASCII;
			}
			if(name2[j] >= capital_A && name2[j] <= capital_Z){
				int newASCII = (int)name2[j] + difference;
				name2[j] = (char)newASCII;				}
		}
		fflush(stdout);
		printf("\nfirst name: %s, second name: %s", name1, name2);
		break;
	}
	case 3:{
		//ASCII to integer
		printf("\n%s String has integer num= %d", name1, atoi(name1));
		printf("\n%s String has integer num= %d", name2, atoi(name2));
		break;
	}
	case 4:{
		//ASCII to float
		printf("\n%s String has float num = %d", name1, atof(name1));
		printf("\n%s String has float num = %d", name2, atof(name2));
		break;
	}
	}
	return 1;
}
