#include <stdio.h>

int main(void) {
	
	int i = 1;
	int n, product;
	
	printf("Enter a number: ");
	scanf_s("%d", &n);
	
	while (i <= n) {
		product *= i;
		i++;
	}
	
	printf("1���� %d���� ��= %d\n", n, product);
	
	return 0;
}
