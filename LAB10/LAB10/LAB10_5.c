#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 10

int main() {
	int i, n;
	int arr[MAX_SIZE];
	
	srand(time(NULL));
	
	for (i = 0; i < MAX_SIZE; i++) {
		arr[i] = rand() % 99 + 1;
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	printf("찾는 값 입력: ");
	scanf("%d", &n);

	for (i = 0; i < MAX_SIZE; i++) {
		if (arr[i] == n) {
			printf("%d\n", i+1);
			break;
		}
		else if (i == MAX_SIZE-1) {
		printf("%d\n", -1);
		}
	}	
	
	return 0;
}
