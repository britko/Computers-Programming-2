#include <stdio.h>

int main(void) {
	
	int x, y;
	
	printf("Input two integers: ");
	scanf("%d %d", &x, &y);
	
	printf("+%d = %d\n", x, x);
	printf("-%d = %d\n", y, -y);
	printf("%d + %d = %d\n", x, y, x+y);
	printf("%d - %d = %d\n", x, y, x-y);
	printf("%d * %d = %d\n", x, y, x*y);
	printf("%d / %d = %d\n", x, y, x/y);
	printf("%d %% %d = %d\n", x, y, x%y);
	
	
	return 0;
}
