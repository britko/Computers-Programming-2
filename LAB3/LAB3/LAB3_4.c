/***************************************************************************
LAB3_4 ���� 201520049 ����������ڰ��к�15
****************************************************************************/

#define HOURLY_WAGE 9160
#include <stdio.h>

int main(void) {

	int working_hours, wage;

	printf("working hours? ");
	scanf_s("%d", &working_hours);

	wage = HOURLY_WAGE * working_hours;

	printf("HOURLY_WAGE\t: %7d\n", HOURLY_WAGE);
	printf("your wage\t: %7d", wage);

	return 0;
}
