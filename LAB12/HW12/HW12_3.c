#include <stdio.h>
#define SIZE 5

void print_array(int* p, int size);
void swap_array(int* x, int* y, int size);

void main() {
	int n;
	int a[SIZE] = {1, 2, 3, 4, 5};
	int b[SIZE] = {6, 7, 8, 9, 10};
	
	printf("a 배열:");
	print_array(a, SIZE);
	
	printf("b 배열:");
	print_array(b, SIZE);
	
	swap_array(a, b, SIZE);
	printf("<< swap_array 호출 후 >>\n");
	
	printf("a 배열:");
	print_array(a, SIZE);
	
	printf("b 배열:");
	print_array(b, SIZE);
}

void print_array(int* p, int size) {
	int i;
	
	for(i = 0; i < size; i++) {
		printf("%3d ", *(p + i));
	}
	printf("\n");
}

void swap_array(int* x, int* y, int size) {
	int i, tmp;
	
	for(i = 0; i < size; i++) {
		tmp = *(x + i);
		*(x + i) = *(y + i);
		*(y + i) = tmp;
	}
}
