#include <stdio.h>

int sumByValue(int n) {
	return n + n;
}

void sumByReference(int *p) {
	*p = *p + *p;
}

int main() {
	int num = 10;

	printf("sum = %3d\n", sumByValue(num));
	
	sumByReference(&num);
	printf("sum = %3d\n", num);
	
	return 0;
}
