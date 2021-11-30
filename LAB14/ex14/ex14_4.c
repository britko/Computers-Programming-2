#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	double height;
	double weight;
};

struct academy {
	int c;
	struct Person person;
	int year;
};

void print_member(const struct academy *p);

int main() {
	
	int i;
	
	struct academy aPerson;
	
	scanf("%d %s %d %lf %lf %d", &aPerson.c, aPerson.person.name, 
		&aPerson.person.age, &aPerson.person.height, &aPerson.person.weight,
		&aPerson.year);
	
	struct academy *p = &aPerson;
	
	print_member(p);
	
	return 0;
}

void print_member(const struct academy *p) {
	
	char *cl;
	
	cl = (p -> c) ? "학생" : "교수";
	
	printf("member: %s, %s, %d, %.1f, %.1f, %d\n", 
		cl, p -> person.name, p -> person.age,
		p -> person.height, p -> person.weight, p -> year);
}
