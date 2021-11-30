#include <stdio.h>
#include <string.h>

struct person {
	char name[20];
	int age;
	double height;
	double weight;
	double bmi;
};

int main() {
	
	struct person aPerson = {"yeongguk", 20, 150.1, 45.5};
	aPerson.bmi = aPerson.weight / ((aPerson.height / 100) * (aPerson.height / 100));
	
	struct person bPerson;
	strcpy(bPerson.name, "KYG");
	bPerson.age = 30;
	bPerson.height = 123.2;
	bPerson.weight = 55.5;
	bPerson.bmi = bPerson.weight / ((bPerson.height / 100) * (bPerson.height / 100));
	
	struct person cPerson;
	scanf("%s %d %lf %lf", cPerson.name, &cPerson.age, &cPerson.height, &cPerson.weight);
	cPerson.bmi = cPerson.weight / ((cPerson.height / 100) * (cPerson.height / 100));
	
	printf("size: %d\n", sizeof(aPerson));
	printf("aPerson: %s, %d, %.1f, %.1f, %f\n", aPerson.name, aPerson.age, aPerson.height, aPerson.weight, aPerson.bmi);
	printf("bPerson: %s, %d, %.1f, %.1f, %f\n", bPerson.name, bPerson.age, bPerson.height, bPerson.weight, bPerson.bmi);
	printf("cPerson: %s, %d, %.1f, %.1f, %f\n", cPerson.name, cPerson.age, cPerson.height, cPerson.weight, cPerson.bmi);
	
	return 0;
}
