#include <stdio.h>

int main(void) {

	float dollars;
	int won;
	int rate = 1172;

	printf("달러? ");
	scanf_s("%f", &dollars);

	won = dollars * rate;

	printf("$%.2f는 %d원입니다.\n", dollars, won);

	return 0;
}