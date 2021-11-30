/***************************************************************************
HW3_2 고영국 201520049 정보통신전자공학부15
****************************************************************************/

#include <stdio.h>

int main(void) {

	int total_s, h, m, s;

	printf("Enter the total seconds : ");
	scanf_s("%d", &total_s);
	printf("\n");

	h = total_s / 3600;
	m = total_s % 3600 / 60;
	s = total_s % 3600 % 60;

	printf("%d seconds is %dh %dm %ds\n", total_s, h, m, s);

	return 0;
}
