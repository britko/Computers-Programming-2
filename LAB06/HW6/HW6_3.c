#include <stdio.h>

int main(void) {
	
	int i, n, m;
	
	printf("Enter the positive number: ");
	scanf_s("%d", &n);
	printf("Enter the count of multiple: ");
	scanf_s("%d", &m);
	
	for (i = 1; i <= m; i++) {
		printf("%d ", n * i);
	}
	
	return 0;
}
