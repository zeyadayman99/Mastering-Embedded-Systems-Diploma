#include <stdio.h>
enum NUMType{
	INT,
	FLOAT,
	DOUBLE
};
union UNUMValue{
	int u_intValue;
	float u_float_Value;
	double u_doubleValue;
}result;
union UNUMValue Add(union UNUMValue value1, union UNUMValue value2, enum NUMType type){
	switch(type){
	case INT:
		result.u_intValue = value1.u_intValue + value2.u_intValue;
		break;
	case FLOAT:
		result.u_float_Value = value1.u_float_Value + value2.u_float_Value;
		break;
	case DOUBLE:
		result.u_doubleValue = value1.u_doubleValue + value2.u_doubleValue;
		break;
	}
	return result;
}

int main(){
	union UNUMValue v1, v2, result;
	printf("the size of UNUMValue = %d bytes", sizeof(union UNUMValue));
	fflush(stdin);fflush(stdout);
	v1.u_intValue = 1500;
	v2.u_intValue = 3400;
	result = Add(v1, v2, INT);
	printf("\nint: %d + int: %d = %d", v1.u_intValue, v2.u_intValue, result.u_intValue);
	fflush(stdin);fflush(stdout);
	//////////////////////////////////////////////////////////////////////////////////
	v1.u_float_Value = 67.89;
	v2.u_float_Value = 3.456;
	result = Add(v1, v2, FLOAT);
	printf("\nfloat: %f + float: %f = %f", v1.u_float_Value, v2.u_float_Value, result.u_float_Value);
	fflush(stdin);fflush(stdout);
	//////////////////////////////////////////////////////////////////////////////////
	v1.u_doubleValue = 234.56;
	v2.u_doubleValue = 125.78;
	result = Add(v1, v2, DOUBLE);
	printf("\ndouble: %lf + double: %lf = %lf", v1.u_doubleValue, v2.u_doubleValue, result.u_doubleValue);
	fflush(stdin);fflush(stdout);
	return 0;
}
