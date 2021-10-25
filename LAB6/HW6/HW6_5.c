#include <stdio.h>

int main(void) {
	
	int r, i, j;
	
	printf("Enter the number of rows: ");
	scanf_s("%d", &r);
	
	for (i = 0; i < r; i++) {
		for (j = 0; j < r - i; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
