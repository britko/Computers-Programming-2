#include <stdio.h>

int main() {
	double x[3];
	double *pd = x;
	int i;
	
	for(i = 0; i < 3; i++) {
		printf("x[%d]�� �ּ�: %p\n", i, &pd + i);
	}
	
	return 0;
}
