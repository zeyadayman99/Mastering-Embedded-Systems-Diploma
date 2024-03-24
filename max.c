#include <stdio.h>
#include <string.h>
#include <ctype.h>
void max_num_of_ones(int num){
/////////////////////to get the binary equivalent////////////////////////////////
    int binary_eqv[32] = {0};
    int i = 31;
    while(num > 0){
        if(num % 2 != 0){
            binary_eqv[i] = 1;
        }
        num /= 2;
        i--;
    }
    fflush(stdin);
    for(int i = 0; i < 32; i++)
        printf("%d", binary_eqv[i]);
//////////////////to get max number of ones ////////////////////////////////////
    int counter1 = 0, counter2 = 0, j = 0;
    for(int i = 0; i < 32; i++){
        if(binary_eqv[i] == 0){
            j = i+1;
            jump:
            if(binary_eqv[j] == 1){
                counter2++;
                j++;
                goto jump;
            }
        }
        if(counter2 > counter1){
            counter1 = counter2;
        }
        counter2 = 0;
    }
    printf("\nmax number of ones between two zeros = %d", counter1);
}
int main() {
    int num;
    printf("please enter a number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &num);
    printf("\nbinary equivalent of %d = ", num);
    max_num_of_ones(num);
    return 0;
}
