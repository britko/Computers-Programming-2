#include <stdio.h>

int main(void) {
	
	int fahrenheit;
	double celsius;
	
	printf("Enter the fahrenheit temperature: ");
	scanf("%d", &fahrenheit);
	printf("%d �� is %.2f ��\n", fahrenheit, (fahrenheit - 32) * 5.0 / 9.0);
	
	return 0;
}
