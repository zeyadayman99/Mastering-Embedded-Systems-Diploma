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
	printf("\nyour list: \n");
	for(int i = 0; i < array_size; i++){
		printf("%d, ", List[i]);
	}
	int new_element, location;
	printf("\nenter number to insert: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &new_element);
	printf("enter the location: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &location);
	for(int i = array_size - 1; i >= location-1; i--)
		List[i+1] = List[i];
	List[location-1] = new_element;
	printf("\nnew list: \n");
	for(int i = 0; i <= array_size; i++){
		printf("%d, ", List[i]);
	}
}
