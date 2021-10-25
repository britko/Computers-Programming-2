#include <stdio.h>

int main(void) {
	
	int radius = 5;

	printf("When the radius is %d, the area is %f\n", radius, radius * radius * 3.14);
	printf("When the radius is %d, the area is %.2f\n", radius, radius * radius * 3.14);
	
	return 0;
}