#include <stdio.h>

// 단계 1
/* 
int main(void) {
	
	int i = 1;
	int n;
	
	printf("Enter a number: ");
	scanf_s("%d", &n);
	
	while (i <= n) {
		if (i % 2 == 0) {
			printf("%d ", i);
		}
		i++;
	}
		
	return 0;
}
*/

// 단계 2
int main(void) {
	
	int i = 1;
	int n;
	
	printf("Enter a number: ");
	scanf_s("%d", &n);
	
	while (i <= n) {
		if (i % 3 == 0 || i % 5 == 0) {
			printf("%d ", i);
		}
		i++;
	}
		
	return 0;
}
