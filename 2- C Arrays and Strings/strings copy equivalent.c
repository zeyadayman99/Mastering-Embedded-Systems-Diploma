/*
 * main.c
 *
 *  Created on: Feb 16, 2024
 *      Author: zeadayman
 */
#include "stdio.h"
#include "string.h"
int main(){
	char a[20] = "ahmed mohamed";
	char b[20];
	int i = 0;
	while(a[i] != 0){
		b[i] = a[i];
		i++;
	}
	b[i] = 0;
//	or we an use strcpy(), strcpy(b, a);
	fflush(stdout);
	printf("%s", b);
	printf("\r\nsize of string b = %d bytes", sizeof(b));
	printf("\r\nlength of string b = %d", strlen(b));
	return 1;
}
