#include <stdio.h>

int main(void) {
	
	int year;
	
	printf("Enter the year: ");
	scanf_s("%d", &year);
	
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ) {
		printf("%d ���� �����̴�.\n", year);
		printf("2���� 29���̴�.");
	}
	else {
		printf("%d ���� ������ �ƴϴ�.\n", year);
		printf("2���� 28���̴�.") ;
	}
	
	return 0;
}
