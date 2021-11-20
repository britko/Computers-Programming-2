#include <stdio.h>
#define SIZE 10

void print_array(int* p, int size);
void find_array(const int arr[], int size, int key, int found[]);

void main() {
	int n;
	int arr[SIZE] = {11, 22, 33, 88, 22, 22, 33, 44, 55, 77};
	int found[SIZE];
	
	print_array(arr, SIZE);
	
	printf("ã�� ��? ");
	scanf("%d", &n);
	
	find_array(arr, SIZE, n, found);
}

void print_array(int* p, int size) {
	int i;
	
	for(i = 0; i < size; i++) {
		printf("%d ", *(p + i));
	}
	printf("\n");
}

void find_array(const int arr[], int size, int key, int found[]) {
	int i, cnt = 0;
	
	for(i = 0; i < size; i++) {
		if(arr[i] == key) {
			found[cnt] = i;
			cnt++;
		}
	}
	printf("ã�� �׸��� ��� %d���Դϴ�.\n", cnt);
	printf("ã�� �׸��� �ε���:", cnt);
	for(i = 0; i < cnt; i++) {
		printf("%2d", found[i]);
	}
}
