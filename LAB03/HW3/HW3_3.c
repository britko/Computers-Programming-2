/***************************************************************************
HW3_3 고영국 201520049 정보통신전자공학부15
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
