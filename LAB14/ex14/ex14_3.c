#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	double height;
	double weight;
};

int main() {
	
	int i;
	
	struct Person aperson = {"ap", 5, 30.5, 10};
	
	struct Person person_info[3] = {
		{"KO", 20, 133.3, 33.3},
		{"yeong", 50, 177.3, 43.3},
		{"guk", 90, 188.3, 75.3},
	};
	
	struct Person *p = &aperson;
	printf("aPerson: %s, %d, %.1f, %.1f\n", p -> name, p -> age, p -> height, p -> weight);

	struct Person *pArr = person_info;
	for(i = 0; i < 3; i++) {
		printf("Person%d: %s, %d, %.1f, %.1f\n", i, (*pArr).name, (*pArr).age, (*pArr).height, (*pArr).weight);
		pArr++;
	}
	
	return 0;
}
