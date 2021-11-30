#include <stdio.h>

typedef struct Person {
	char name[20];
	int age;
	double height;
	double weight;
}person;

int main() {
	
	int i;
	
	person kim = {"kim", 50, 130.5, 100};
	person hong = {"hong", 25, 160.5, 50};
	
	
	printf("kim: %s, %d, %.1f, %.1f\n", kim.name, kim.age, kim.height, kim.weight);
	printf("hong: %s, %d, %.1f, %.1f\n", hong.name, hong.age, hong.height, hong.weight);

	return 0;
}
