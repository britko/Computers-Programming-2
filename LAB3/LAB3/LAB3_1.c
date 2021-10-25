/***************************************************************************
LAB3_1 고영국 201520049 정보통신전자공학부 15
****************************************************************************/

#include <stdio.h>

int main(void) {

	int first, second;

	printf("Enter the first number: ");
	scanf_s("%d", &first);

	printf("Enter the second number: ");
	scanf_s("%d", &second);

	printf("%d + %d = %d\n", first, second, first + second);
	printf("%d - %d = %d\n", first, second, first - second);
	printf("%d * %d = %d\n", first, second, first * second);
	printf("%d / %d = %d\n", first, second, first / second);

	return 0;
}