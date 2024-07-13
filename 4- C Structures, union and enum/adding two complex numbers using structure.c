#include"stdio.h"
struct SComplex{
	double M_R; //real part
	double M_I; //imaginary part
};
struct SComplex ReadComplex(char name[]){
	double real_part, imag_part;
	printf("please enter %s complex number real part: ", name);
	fflush(stdin);fflush(stdout);
	scanf("%lf", &real_part);
	printf("please enter %s complex number imaginary part: ", name);
	fflush(stdin);fflush(stdout);
	scanf("%lf", &imag_part);
	struct SComplex c;
	c.M_R = real_part;
	c.M_I = imag_part;
	return c;
};
struct SComplex AddComplex(struct SComplex complex_1, struct SComplex complex_2){
	struct SComplex sum;
	sum.M_R = complex_1.M_R + complex_2.M_R;
	sum.M_I = complex_1.M_I + complex_2.M_I;
	return sum;
};
void PrintComplex(struct SComplex complexSum){
	printf("result = %lf + j%lf", complexSum.M_R, complexSum.M_I);
};

int main(){
	struct SComplex c1 = ReadComplex("X");
	struct SComplex c2 = ReadComplex("Y");
	struct SComplex sum = AddComplex(c1, c2);
	PrintComplex(sum);
	return 0;
}
