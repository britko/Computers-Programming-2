#include <stdio.h>

int main(void) {
	
	int num;
	
	printf("Enter the number: ");
	scanf_s("%d", &num);
	
	switch(num) {
		case 1:
			printf("%d �б�\n", num);
			break;
		case 2:
			printf("%d �б�\n", num);
			break;
		case 3:
			printf("%d �б�\n", num);
			break;
		case 4:
			printf("%d �б�\n", num);
			break;
		default:
			printf("Invalid number\n");
			break;
	}
	
	return 0;
}
