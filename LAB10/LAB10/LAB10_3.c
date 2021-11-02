#include <stdio.h>
#define MAX_SIZE 5

int main() {
	int i;
	int arr[MAX_SIZE];
	int o[MAX_SIZE];
	int e[MAX_SIZE];
	int ocnt = 0, ecnt = 0;
	
	for (i = 0; i < MAX_SIZE; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] % 2 == 1) {
			o[ocnt] = arr[i];
			ocnt++;
		}
		else {
			e[ecnt] = arr[i];
			ecnt++;
		}
	}
	
	printf("Odd: ");
	for (i = 0; i < ocnt; i++) {
		printf("%d ", o[i]);
	}
	printf("\n");
	
	printf("Even: ");
	for (i = 0; i < ecnt; i++) {
		printf("%d ", e[i]);
	}
	printf("\n");
	
	
	return 0;
}
