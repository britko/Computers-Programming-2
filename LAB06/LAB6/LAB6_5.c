#include <stdio.h>

int main(void) {
	
	int i, m, n, power;
	
	printf("m = ");
	scanf_s("%d", &m);
	printf("n = ");
	scanf_s("%d", &n);
	
	for (i = 0; i < n; i++) {
		power *= m;
	}
	
	if (m == 1) {
		printf("%d�� 1�� ���� ��� = %d\n", m, power);
	}
	else {
		printf("%d�� %d�� ���� ��� = %d\n", m, n, power);
	}
	
	return 0;
}
