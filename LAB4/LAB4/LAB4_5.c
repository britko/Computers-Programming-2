#include <stdio.h>

int main(void) {
	
	int x;
	
	printf("Enter the number: ");
	scanf("%d", &x);
	
	x % 2 == 1 ? printf("%d�� Ȧ���̴�.\n", x) : printf("%d�� ¦���̴�.\n", x);
	
	return 0;
}
