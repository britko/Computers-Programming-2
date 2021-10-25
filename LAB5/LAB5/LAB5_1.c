#include <stdio.h>

int main(void) {
	
	int num;
	
	printf("Enter the number: ");
	scanf_s("%d", &num);
	
	if(num < 0)
		printf("%d\n", -num);
	printf("END");
	
	return 0;
}
