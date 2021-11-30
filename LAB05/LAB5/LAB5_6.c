#include <stdio.h>

int main(void) {
	
	int num;
	
	printf("Enter the number: ");
	scanf_s("%d", &num);
	
	switch(num) {
		case 1:
			printf("%d 분기\n", num);
			break;
		case 2:
			printf("%d 분기\n", num);
			break;
		case 3:
			printf("%d 분기\n", num);
			break;
		case 4:
			printf("%d 분기\n", num);
			break;
		default:
			printf("Invalid number\n");
			break;
	}
	
	return 0;
}
