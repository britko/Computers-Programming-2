#include <stdio.h>

int main() {
	int num1 = 100, num2 = 100;
	int *p;
	
	p = &num1;
	*p += 30;
	
	p = &num2;
	*p -= 20;
	
	printf("num1: %3d, num2: %3d \n", num1, num2);
	
	return 0;
}
