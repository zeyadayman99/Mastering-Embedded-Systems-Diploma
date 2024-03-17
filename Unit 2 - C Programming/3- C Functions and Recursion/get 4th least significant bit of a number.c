#include "stdio.h"
int get_4th_least_bit(int number);
void main(){
int number;
printf("enter a number: ");
fflush(stdin);fflush(stdout);
scanf("%d", &number);
printf("\nthe 4th least significant bit = %d", get_4th_least_bit(number));
}

int get_4th_least_bit(int number){
    char binary_eqv[32];
    printf("binary equivalent of %d = ", number);
    for(int i = 0; i < 32; i++)
        binary_eqv[i] = 0;
    int i = 31;
    while(number > 0){
        if(number % 2 != 0)
            binary_eqv[i] = 1;
        number /= 2;
        i--;
    }
    for(int i = 0; i < 32; i++)
    printf("%d", binary_eqv[i]);
    return binary_eqv[28];
}
