#include <stdio.h>

int main(void) {

	float x, y;

	printf("�Ǽ� 2���� �Է��Ͻÿ�: ");
	scanf_s("%f %f", &x, &y);
	printf("\n");

	printf("%f + %f = %f\n", x, y, x + y);
	printf("%f - %f = %f\n", x, y, x - y);

	return 0;
}