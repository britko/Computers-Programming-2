#include <stdio.h>

int main(void) {
	
	int i = 0;
	int n;
	int total = 0;
	
	printf("Enter the number: ");
	scanf_s("%d", &n);
	
	while (i < n) {
		total += 3;
		i++;
	}
	
	printf("3�� %d�� ���� ��� = %d\n", n, total);
	
	return 0;
}
