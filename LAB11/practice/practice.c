#include <stdio.h>
#define ROW 5
#define COL 3

// ���� 1
int main() {
	int i, j;
	int arr[ROW][COL];
	int sum = 0;
	
	// ���� 1 
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			arr[i][j] = i * 10 + j;
		}
	}
	
	// ���� 2 
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			sum += arr[i][j];
		}
	}
	printf("%d\n", sum);
	
	// ���� 3
	sum = 0; 
	for (j = 0; j < COL; j++) {
		sum += arr[0][j];
	}
	printf("%d\n", sum);
	
	// ���� 4
	for (i = 0; i < ROW; i++) {
		sum = 0;
		for (j = 0; j < COL; j++) {
			sum += arr[i][j];
		}
		printf("%d\n", sum);
	}

	// ���� 5 
	sum = 0;
	for (i = 0; i < ROW; i++) {
		sum += arr[i][0];
	}
	printf("%d\n", sum);
	
	// ���� 6
	for (j = 0; j < COL; j++) {
		sum = 0;
		for (i = 0; i < ROW; i++) {
			sum += arr[i][j];
		}
		printf("%d\n", sum);
	}
}
