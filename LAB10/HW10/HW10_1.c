#include <stdio.h>
#define SIZE 10

int main() {
	
	int arr[SIZE];
	int i, n;
	int diff;
	
	printf("ù ��° ��? ");
	scanf("%d", &n);
	
	printf("����? ");
	scanf("%d", &diff);
	
	for (i = 0; i < SIZE; i++) {
		arr[i] = n + diff * i;
	}
	
	for (i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}
