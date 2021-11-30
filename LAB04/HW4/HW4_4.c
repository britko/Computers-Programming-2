#include <stdio.h>

int main(void) {
	
	int month;
	
	printf("Enter the month: ");
	scanf("%d", &month);
	
	month >= 1 && month <=12 ? printf("Valid month\n") : printf("Invalid month\n");
	
	return 0;
}
