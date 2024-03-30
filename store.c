#include<stdio.h>

struct S_students{
	char name[20];
	float marks;
	int roll_num;
};

struct S_students read_student(int student_num){
	struct S_students student;
	printf("enter student number %d name: ", student_num);
	fflush(stdin);fflush(stdout);
	gets(student.name);
	printf("enter student number %d marks: ", student_num);
	fflush(stdin);fflush(stdout);
	scanf("%f", &student.marks);
	printf("enter student number %d roll number: ", student_num);
	fflush(stdin);fflush(stdout);
	scanf("%d", &student.roll_num);
	return student;
};
void display_student(struct S_students student){
	printf("name: %s", student.name);
	fflush(stdin);fflush(stdout);
	printf(" marks: %f", student.marks);
	fflush(stdin);fflush(stdout);
	printf(" roll number: %d\n", student.roll_num);
};
void get_students_num(int num){
	struct S_students student[num];
	for(int i = 1; i <= num; i++){
		student[i-1] = read_student(i);
	}
	for(int i = 0; i < num; i++){
		display_student(student[i]);
	}
}
int main(){
	int num;
	printf("enter students number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);
	get_students_num(num);
	return 0;
}
