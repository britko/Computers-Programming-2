#include <stdio.h>

int main(void) {

	int hour, minute, second;

	printf("��? ");
	scanf_s("%d", &hour);

	printf("��? ");
	scanf_s("%d", &minute);

	printf("��? ");
	scanf_s("%d", &second);

	printf("�Է��� �ð��� %02d:%02d:%02d�Դϴ�.\n", hour, minute, second);

	return 0;
}