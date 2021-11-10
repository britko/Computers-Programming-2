#include <stdio.h>

void printArray(int a[], int size);
void sumArray(int a[], int size);
int sumArray2(int a[], int size);
int maxArray(int a[], int size);
int equalArray(int a[], int size_a, int b[], int size_b);
int searchKey(int a[], int size, int key);
void selectionSort(int a[], int size);

int main(void) {
	int i;
	int list1[5] = {10, 20, 30, 40, 50};
	int list2[3] = {100, 200, 300};
	int list3[5] = {10, 20, 30, 40, 50};
	int list4[5] = {50, 30, 10, 60, 20};
	
	printArray(list1, 5);
	printArray(list2, 3);
	sumArray(list1, 5);
	sumArray(list2, 3);
	printf("%d\n", sumArray2(list1, 5));
	printf("%d\n", sumArray2(list2, 3));
	printf("%d\n", maxArray(list1, 5));
	printf("%d\n", maxArray(list2, 3));
	
	if (equalArray(list1, 5, list3, 5))
		printf("두 배열은 같다.\n");
	else
		printf("두 배열은 다르다.\n");
	if (equalArray(list1, 5, list2, 3))
		printf("두 배열은 같다.\n");
	else
		printf("두 배열은 다르다.\n");

	printf("%d\n", searchKey(list1, 5, 50));
	
	selectionSort(list4, 5);
	for (i = 0; i < 5; i++) {
		printf("%d ", list4[i]);
	}
	
}

void printArray(int a[], int size) {
	int i; 
	
	for (i = 0; i < size; i++) {
		printf("%3d ", a[i]);
	}
	printf("\n");
}

void sumArray(int a[], int size) {
	int i;
	int sum = 0;
	
	for (i = 0; i < size; i++) {
		sum += a[i];
	}
	printf("%3d\n", sum);
}

int sumArray2(int a[], int size) {
	int i;
	int sum = 0;
	
	for (i = 0; i < size; i++) {
		sum += a[i];
	}
	return sum;
}

int maxArray(int a[], int size) {
	int i;
	int max = a[0];
	
	for (i = 1; i < size; i++) {
		max = max > a[i] ? max: a[i];
	}
	return max;
}

int equalArray(int a[], int size_a, int b[], int size_b) {
	int i;
	
	if (size_a != size_b) return 0;
	
	for (i = 0; i < size_a; i++) {
		if (a[i] != b[i]) {
			return 0;
			break;
		}
	}
	return 1;
}

int searchKey(int a[], int size, int key) {
	int i;
	
	for (i = 0; i < size; i++) {
		if (a[i] == key){
			return i+1;
		}
	}
	return -1;
}

void selectionSort(int a[], int size) {
	int index_min, i, j;
	
	for (j = 0; j < size-1; j++) {
		
		index_min = j; // 가정
		for (i = j+1; i < size; i++) {
			if (a[index_min] > a[i]) {
				index_min = i;
			}
		}
		if (j != index_min) {
			int temp = a[j];
			a[j] = a[index_min];
			a[index_min] = temp;
		}
	}
}
