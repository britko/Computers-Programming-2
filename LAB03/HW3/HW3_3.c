/***************************************************************************
HW3_3 ���� 201520049 ����������ڰ��к�15
****************************************************************************/

#define FEET 0.3025
#include <stdio.h>

int main(void) {

	int square_meter;
	double square_feet;

	printf("Enter the square meter: ");
	scanf_s("%d", &square_meter);

	square_feet = square_meter * FEET;

	printf("%d square meter is %.1f square feet\n", square_meter, square_feet);

	return 0;
}
