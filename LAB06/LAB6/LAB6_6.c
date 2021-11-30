#include <stdio.h>

int main(void) {
	
	int i, n, integer;
	int cnt = 0;
	
	printf("Enter the # of integers: ");
	scanf_s("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("Enter an integer: ");
		scanf_s("%d", &integer);
		
		if (integer % 2 == 0) {
			cnt++;
		}
	}
	
	printf("The number of even numbers is %d\n", cnt);
	
	return 0;
}
