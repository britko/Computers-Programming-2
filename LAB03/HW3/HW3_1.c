/***************************************************************************
HW3_1 고영국 201520049 정보통신전자공학부15
****************************************************************************/

#include <stdio.h>

int main(void) {

	double base, height, area;

	printf("Enter base and height: ");
	scanf_s("%lf %lf", &base, &height);

	area = base * height / 2;
	
	printf("The area of triangle is %.2f\n", area);

	return 0;
}
