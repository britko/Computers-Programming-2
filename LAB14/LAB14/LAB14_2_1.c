#include <stdio.h>

struct student {
	char name[20];
	int midterm;
	int final;
	int average;
};

typedef struct student Student;

void printStudent(Student *s);
void readStudentScore(Student *s, int num);
void claculateStudentAverage(Student *s, int num);

int main(void) {
	
	Student s[40];
	int num, i;
	
	Student *p = s;
	
	printf("Enter a number of student:");
	scanf("%d", &num);
	
	readStudentScore(p, num);
	
	claculateStudentAverage(p, num);
	
	printf("\n이름\t중간\t학기말\t평균\n");
	for(i = 0; i < num; i++) {
		printStudent(p);
		p++;
	}
}

void printStudent(Student *s) {
	printf("%s\t", s -> name);
	printf("%d\t%d\t%d\n", s -> midterm, s -> final, s -> average);
}

void readStudentScore(Student *s, int num) {
	
	int i;
	
	for(i = 0; i < num; i++) {
		printf("Enter student name: ");
		scanf("%s", s[i].name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &s[i].midterm, &s[i].final);
	}	
}
void claculateStudentAverage(Student *s, int num) {
	
	int i;
	
	for(i = 0; i < num; i++) {
		s -> average = (s -> midterm + s -> final) / 2;
		s++;
	}	
}




