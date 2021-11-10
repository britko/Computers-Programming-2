#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

void print_array(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%2d ", arr[i]);
	printf("\n");
}

int main() {
	int arr[MAX] = {12, 43, 39, 98, 71, 63, 8, 16, 54, 85};
	int i;
	
	srand((unsigned int)time(NULL));
	printf("¼ÅÇÃ Àü: ");
	print_array(arr, MAX);
	
	for (i = 0; i < MAX - 1; i++) {
		int r = rand() % (9 - i) + 1 + i;
		int tmp = arr[i];
		arr[i] =  arr[r];
		arr[r] = tmp;
	}
	
	printf("¼ÅÇÃ ÈÄ: ");
	print_array(arr, MAX);
}
