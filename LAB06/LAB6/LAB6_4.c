#include <stdio.h>

int main(void) {
	
	int i, n;
	
	printf("Enter the number: ");
	scanf_s("%d", &n);
	
	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			printf("%d ", i);
		}
	}
	
	return 0;
}
