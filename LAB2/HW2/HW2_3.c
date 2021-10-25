#include <stdio.h>

int main(void) {

	float x, y;

	printf("실수 2개를 입력하시오: ");
	scanf_s("%f %f", &x, &y);
	printf("\n");

	printf("%f + %f = %f\n", x, y, x + y);
	printf("%f - %f = %f\n", x, y, x - y);

	return 0;
}