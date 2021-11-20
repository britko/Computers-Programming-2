#include <stdio.h>
#define SIZE 10

void print_array(int* p, int size);
void get_min_max(const int* arr, int size, int* min, int* max);

void main() {
	int n, min, max;
	int arr[SIZE] = {55, 12, 45, 98, 23, 35, 28, 67, 52, 40};
	
	printf("배열: ");
	print_array(arr, SIZE);
	
	get_min_max(arr, SIZE, &min, &max);
	
	printf("최대값: %d\n", max);	
	
	printf("최소값: %d\n", min);
}

void print_array(int* p, int size) {
	int i;
	
	for(i = 0; i < size; i++) {
		printf("%d ", *(p + i));
	}
	printf("\n");
}

void get_min_max(const int* arr, int size, int* min, int* max) {
	int i;
	*min = *arr;
	*max = *arr;
	
	for(i = 1; i < size; i++) {
		if (*(arr + i) < *min) {
			*min = *(arr + i);
		}
		if (*(arr + i) > *max) {
			*max = *(arr + i);
		}
	}
}
