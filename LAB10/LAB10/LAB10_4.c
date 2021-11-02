#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 5

int main() {
	int i, j;
	int arr[MAX_SIZE];
	
	srand(time(NULL));
	
	for (i = 0; i < MAX_SIZE; i++) {
		arr[i] = rand() % 99 + 1;
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	printf("¼Ò¼ö: ");
	for (i = 0; i < MAX_SIZE; i++) {
		for (j = 2; j < arr[i]; j++) {
			if (arr[i] % j == 0)
				break;
		}
		if (arr[i] == j)
			printf("%d, ", arr[i]);
	}
	
	
	
	return 0;
}
