#include <stdio.h>

int main(void) {

	float dollars;
	int won;
	int rate = 1172;

	printf("�޷�? ");
	scanf_s("%f", &dollars);

	won = dollars * rate;

	printf("$%.2f�� %d���Դϴ�.\n", dollars, won);

	return 0;
}