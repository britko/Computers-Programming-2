#include <stdio.h>

int main(void) {
	
	double celsius, fahrenheit;
	const int BASE = 32;
	const double CONVERSION_FACTOR = 9.0 / 5.0;
	
	printf("Enter a celsius temperature: ");
	scanf("%lf", &celsius);
	
	printf("Fahrenheit Equivalent : %f\n", celsius * CONVERSION_FACTOR + BASE);
		
	return 0;
}
