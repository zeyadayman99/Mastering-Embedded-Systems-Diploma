#include<stdio.h>

struct S_measurements{
	double inch;
	double feet;
};

struct S_measurements read_measurements(){
	struct S_measurements measures1, measures2, sum;
	int press;
	printf("to enter 1st distance in inches press 1, to enter 1st distance in feet press 2 ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &press);
	switch(press){
	case 1: printf("enter distance in inches: ");
	fflush(stdin);fflush(stdout);
	scanf("%lf", &measures1.inch);
	measures1.feet = measures1.inch / 12;
	printf("%lf inches = %lf feet", measures1.inch, measures1.feet);
	break;
	case 2: printf("enter distance in feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%lf", &measures1.feet);
	measures1.inch = measures1.feet * 12;
	printf("%lf feet = %lf inches", measures1.feet, measures1.inch);
	break;
	}
	printf("\nto enter 2nd distance in inches press 1, to enter 2nd distance in feet press 2 ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &press);
	switch(press){
	case 1: printf("\nenter distance in inches: ");
	fflush(stdin);fflush(stdout);
	scanf("%lf", &measures2.inch);
	measures2.feet = measures2.inch / 12;
	printf("%lf inches = %lf feet", measures2.inch, measures2.feet);
	break;
	case 2: printf("\nenter distance in feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%lf", &measures2.feet);
	measures2.inch = measures2.feet * 12;
	printf("%lf feet = %lf inches", measures2.feet, measures2.inch);
	break;
	}
	sum.inch = measures1.inch + measures2.inch;
	sum.feet = measures1.feet + measures2.feet;
	return sum;
}
void print_sum(struct S_measurements sum){
	fflush(stdin);fflush(stdout);
	printf("\nsum = %lf inches", sum.inch);
	printf("\nsum = %lf feet", sum.feet);
}
int main(){
	struct S_measurements measurements_sum = read_measurements();
	print_sum(measurements_sum);
	return 0;
}
