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
		printf("%d을 1번 곱한 결과 = %d\n", m, power);
	}
	else {
		printf("%d을 %d번 곱한 결과 = %d\n", m, n, power);
	}
	
	return 0;
}
