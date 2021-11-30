#include <stdio.h>

int main(void) {
	
	int x;
	
	printf("Enter the number: ");
	scanf("%d", &x);
	
	x % 2 == 1 ? printf("%d는 홀수이다.\n", x) : printf("%d는 짝수이다.\n", x);
	
	return 0;
}
