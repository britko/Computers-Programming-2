#include <stdio.h>

int main(void) {
	
	int x;
	
	printf("Enter the number: ");
	scanf("%d", &x);
	
	printf("10000의 자리수: %d\n", x / 10000);
	printf(" 1000의 자리수: %d\n", x % 10000 / 1000);
	printf("  100의 자리수: %d\n", x % 1000 / 100);
	printf("   10의 자리수: %d\n", x % 100 / 10);
	printf("    1의 자리수: %d\n", x % 10);
	
	return 0;
}
