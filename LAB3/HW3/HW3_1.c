/***************************************************************************
HW3_1 ���� 201520049 ����������ڰ��к�15
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
