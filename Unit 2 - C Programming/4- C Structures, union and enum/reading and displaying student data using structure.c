#include<stdio.h>

struct S_student{
	char name[20];
	int roll_num;
	float mark;
};

struct S_student read_data(){
	struct S_student student;
	printf("enter student name: ");
	fflush(stdin);fflush(stdout);
	gets(student.name);
	printf("\nenter student roll number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &student.roll_num);
	printf("\nenter student mark: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &student.mark);
	return student;
}
void print_data(struct S_student student){
	printf("Displayed information:\nname: %s\nroll number: %d\nmark: %f", student.name, student.roll_num, student.mark);
}
int main(){
	struct S_student student = read_data();
	print_data(student);
	return 0;
}
