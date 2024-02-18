#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main(){
	int array_size;
	printf("enter number of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &array_size);
	int List[array_size];
	for(int i = 1; i <= array_size; i++){
		printf("\nenter elements %d: ", i);
		fflush(stdin);fflush(stdout);
		scanf("%d", &List[i-1]);
	}
	int element;
	printf("\nenter element to be searched: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &element);
	for(int i = 0; i < array_size; i++){
		if(List[i] == element){
			printf("element is found at index %d", i);
			return 1;
		}
	}
	printf("element isn't found");
	return 0;

}
