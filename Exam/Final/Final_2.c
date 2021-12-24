#include <stdio.h>

void printArray(int arr[], int size);
void initArray(int arr[], int size);
void turnArray(int arr1[], int arr2[], int size);

int main(void) {
	
	int arr1[5];
	int arr2[5];
	int i;
	
	printf("정수 5개 입력: ");
	initArray(arr1, 5);
	turnArray(arr1, arr2, 5);
	printf("오른쪽으로 회전된 결과 출력: ");
	printArray(arr2, 5); 
}

void printArray(int arr[], int size) {
	int i;
	
	for(i = 0; i < size; i++)
		printf("%4d", arr[i]);
	printf("\n");
	
}

void initArray(int arr[], int size) {
	int i;
	
	for(i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	
}

void turnArray(int arr1[], int arr2[], int size) {
	int i;
	
	arr2[0] = arr1[size-1];
	for(i = 1; i < size; i++) {
		arr2[i] = arr1[i-1];
	}
	
	printf("\n");
	
}

