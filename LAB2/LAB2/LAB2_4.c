#include <stdio.h>

int main(void) {

	int hour, minute, second;

	printf("시? ");
	scanf_s("%d", &hour);

	printf("분? ");
	scanf_s("%d", &minute);

	printf("초? ");
	scanf_s("%d", &second);

	printf("입력한 시간은 %02d:%02d:%02d입니다.\n", hour, minute, second);

	return 0;
}