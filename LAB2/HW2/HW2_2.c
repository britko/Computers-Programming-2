#include <stdio.h>

int main(void) {

	int radius;
	float area, circumference;

	printf("Enter the radius: ");
	scanf_s("%d", &radius);

	area = radius * radius * 3.14;
	circumference = 2 * radius * 3.14;

	printf("When radius is %d. the area is %.2f\n", radius, area);
	printf("When radius is %d. the circumference is %7.2f\n", radius, circumference);

	return 0;
}