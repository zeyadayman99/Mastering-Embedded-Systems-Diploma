#include "stdio.h"
#include "string.h"
int main(){
int arr[7];
int element;
int index = -1;
int counter = 0;
printf("enter elements of the array: ");
fflush(stdin);fflush(stdout);
for(int i = 0; i < 7; i++)
    scanf("%d", &arr[i]);
jump:
printf("\nenter elements to search for: ");
fflush(stdin);fflush(stdout);
scanf("%d", &element);
for(int i = 0; i < 7; i++){
    if(arr[i] == element){
        index = i;
        counter++;
    }
}
if(index == -1){
	printf("element doesn't exist");
	goto jump;
}
if(counter == 0)
    return -1;
else{
    printf("element at index %d", index);
    return 0;
}
}
