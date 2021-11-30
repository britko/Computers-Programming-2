#include <stdio.h>

int main(void) {
	
	int num1, num2, smallNumber;
	
	printf("Enter the first number: ");
	scanf_s("%d", &num1);
	printf("Enter the second number: ");
	scanf_s("%d", &num2);
	
	if(num1 <= num2) {
		smallNumber = num1;
	}
	else {
		smallNumber = num2;
	}
	
	printf("The smaller number is %d\n", smallNumber);
	
	return 0;
}
