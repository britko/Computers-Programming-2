#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	double height;
	double weight;
	double bmi;
};

int main() {
	
	int i;
	
	struct Person person_info[3];
	
	for(i = 0; i < 3; i++) {
		scanf("%s %d %lf %lf", person_info[i].name, &person_info[i].age, &person_info[i].height, &person_info[i].weight);
		person_info[i].bmi = person_info[i].weight / ((person_info[i].height / 100) * (person_info[i].height / 100));
	}
	
	for(i = 0; i < 3; i++) {
		printf("Person%d: %s, %d, %.1f, %.1f, %f\n", i, person_info[i].name, person_info[i].age, person_info[i].height, person_info[i].weight, person_info[i].bmi);
	}
	
	return 0;
}
