#include <stdio.h>

int main(void) {
	
	int rank, num;
	
	printf("Enter the rank: ");
	scanf_s("%d", &rank);
	printf("Enter the total number of poeple: ");
	scanf_s("%d", &num);
	
	if(rank * 100 / num <= 10) {
		printf("Your grade is A!\n");
	}
	else if(rank * 100 / num <= 60) {
		printf("Your grade is B!\n");
	}
	else if(rank * 100 / num <= 90) {
		printf("Your grade is C!\n");
	}
	else {
		printf("Your grade is F!\n");
	}
	
	return 0;
}
