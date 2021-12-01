struct customer {
	char name[40];
	int age;
};

#include <stdio.h>
#include <string.h>
int main(void) {
	
	// 변수 선언 부분
	int i;
	struct customer aCustomer = {"신짱구", 5};
	struct customer cArray[2] = {{"최자두", 12}, {"김철수", 5}};
	struct customer *cp = &aCustomer;
	
	
	
	
	
	// 가~바
	printf("(가)\n");
	printf("Name = %s, Age = %d\n", aCustomer.name, aCustomer.age);
	
	printf("(나)\n");
	for(i = 0; i < 2; i++) {
		printf("Name = %s, Age = %d\n", cArray[i].name, cArray[i].age);
	}
	
	printf("(다)\n");
	printf("Name = %s, Age = %d\n", (*cp).name, (*cp).age);
	
	printf("(라)\n");
	printf("Name = %s, Age = %d\n", cp -> name, cp -> age);
	
	cp = cArray;
	printf("(마)\n");
	for(i = 0; i < 2; i++) {
		printf("Name = %s, Age = %d\n", (*cp).name, (*cp).age);
		cp++;
	}
	
	cp = cArray;
	printf("(바)\n");
	for(i = 0; i < 2; i++) {
		printf("Name = %s, Age = %d\n", cp -> name, cp -> age);
		cp++;
	}
}
