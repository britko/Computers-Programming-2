#include <stdio.h>
#define SIZE 10

int main() {
	
	double arrayA[SIZE] = {1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8};
	double arrayB[SIZE];
	double arrayC[SIZE];
	int i;
	
	for (i = 0; i < SIZE; i++) {
		arrayB[i] = arrayA[i];
		arrayC[i] = arrayA[SIZE -1 - i];
	}
	
	printf("arrayA: ");
	for (i = 0; i < SIZE; i++) {
		printf("%.1f ", arrayA[i]);
	}
	printf("\n");
	
	printf("arrayB: ");
	for (i = 0; i < SIZE; i++) {
		printf("%.1f ", arrayB[i]);
	}
	printf("\n");
	
	printf("arrayC: ");
	for (i = 0; i < SIZE; i++) {
		printf("%.1f ", arrayC[i]);
	}
	printf("\n");
	
	
	return 0;
}
