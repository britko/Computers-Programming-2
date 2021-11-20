#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 20

void fill_array(int (*p)[5], int col_size, int value) {
	int i, j;
	for (i = 0; i < col_size; i++)
		for (j = 0; j < 5; j++)
			p[i][j] = value;
}

void print_array(int (*p)[5], int row) {
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < 5; j++)
			printf("%3d", p[i][j]);
		printf("\n");
	}
}

int main(void) {
	int data[3][5];
	int value;
	
	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &value);
	
	fill_array(data, 3, value);
	print_array(data, 3);
}
