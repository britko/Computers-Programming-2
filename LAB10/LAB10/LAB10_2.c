#include <stdio.h>
#define MAX_SIZE 5

int main() {
	int i;
	int a[MAX_SIZE] = {45, 32, 73, 56, 21};
	int b[MAX_SIZE];
	
	
	for (i = 0; i < MAX_SIZE; i++) {
		b[i] = a[MAX_SIZE-1-i];
		printf("%4d", b[i]);
	}
	printf("\n");
	
	for (i = 0; i < MAX_SIZE; i++) {
		if (b[i] != a[MAX_SIZE-1-i]) {
			printf("�� �迭�� �ٸ���\n");
			return 0;
		}
	}
	printf("�� �迭�� ����\n");
	
	return 0;
}
