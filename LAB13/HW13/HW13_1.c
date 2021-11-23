#include <stdio.h>
#define SIZE 10

void print_array(int* p, int size);
void add_array(int* p, int size, int n);

int main() {
	int n;
	int arr[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	
	printf("���� ������: ");
	print_array(arr, SIZE);
	
	printf("���� �����Է�: ");
	scanf("%d", &n);
	
	add_array(arr, SIZE, n);
	
	printf("���: ");
	print_array(arr, SIZE);
}

void print_array(int* p, int size) {
	int i;
	
	for(i = 0; i < size; i++) {
		printf("%d ", *(p + i));
	}
	printf("\n");
}

void add_array(int* p, int size, int n) {
	int i;
	
	for(i = 0; i < size; i++) {
		*(p + i) += n;
	}
}
