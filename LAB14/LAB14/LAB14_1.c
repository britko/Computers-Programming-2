struct customer {
	char name[40];
	int age;
};

#include <stdio.h>
#include <string.h>
int main(void) {
	
	// ���� ���� �κ�
	int i;
	struct customer aCustomer = {"��¯��", 5};
	struct customer cArray[2] = {{"���ڵ�", 12}, {"��ö��", 5}};
	struct customer *cp = &aCustomer;
	
	
	
	
	
	// ��~��
	printf("(��)\n");
	printf("Name = %s, Age = %d\n", aCustomer.name, aCustomer.age);
	
	printf("(��)\n");
	for(i = 0; i < 2; i++) {
		printf("Name = %s, Age = %d\n", cArray[i].name, cArray[i].age);
	}
	
	printf("(��)\n");
	printf("Name = %s, Age = %d\n", (*cp).name, (*cp).age);
	
	printf("(��)\n");
	printf("Name = %s, Age = %d\n", cp -> name, cp -> age);
	
	cp = cArray;
	printf("(��)\n");
	for(i = 0; i < 2; i++) {
		printf("Name = %s, Age = %d\n", (*cp).name, (*cp).age);
		cp++;
	}
	
	cp = cArray;
	printf("(��)\n");
	for(i = 0; i < 2; i++) {
		printf("Name = %s, Age = %d\n", cp -> name, cp -> age);
		cp++;
	}
}
