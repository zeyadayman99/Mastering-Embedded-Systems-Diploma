#include <stdio.h>
#include <string.h>
void get_unique_number(int elements[], int num){
	char unique_numbers[num];
	int i = 0, k = 0, j = 0;
	int counter = -1;
	while(j < num){
		jump:
		if(elements[i] == elements[j])
			counter++;
		i++;
		if(i < num)
			goto jump;
		if(counter == 0){
			unique_numbers[k] = elements[j];
			k++;
		}
		j++;
		counter = -1;
		i = 0;
	}
	for(int i = 0; i < k; i++)
		printf("%d ", unique_numbers[i]);
}
int main() {
	int num;
	printf("please enter number of elements you will inert: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);
	int elements[num];
	printf("insert %d elements: ", num);
	fflush(stdin);fflush(stdout);
	for(int i = 0; i < num; i++)
		scanf("%d", &elements[i]);
	printf("unique numbers are: ");
	get_unique_number(elements, num);
	return 0;
}
