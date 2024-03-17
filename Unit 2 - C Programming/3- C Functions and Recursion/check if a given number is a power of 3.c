#include "stdio.h"
void check_if_power_of_3(int number);
void main(){
int number;
printf("enter a number to check if it's a power of 3: ");
fflush(stdin);fflush(stdout);
scanf("%d", &number);
check_if_power_of_3(number);
}
void check_if_power_of_3(int number){
    if(number % 3 == 1){
        printf("not a power of 3");
        return;
    }
    else{
        while(number > 1){
            if(number % 3 == 0)
                number /= 3;
            else{
                printf("not a power of 3");
                return;
            }
        }
    printf("is a power of 3");
    }
}
