#include <stdio.h>

// �ܰ�1 
/*
int main(void) {
	
	int num;
	
	printf("Enter the number: ");
	scanf_s("%d", &num);
	
	if(num % 2 == 0)
		printf("¦���Դϴ�.\n");
	else
		printf("Ȧ���Դϴ�.\n");
	
	return 0;
}
*/

// �ܰ�2 
int main(void) {
	
	int num;
	
	printf("Enter the number: ");
	scanf_s("%d", &num);
	
	if(num % 2 == 0) {
		printf("¦���Դϴ�.\n");
		printf("���� %d �Դϴ�.\n", num / 2);
	}
	else {
		printf("Ȧ���Դϴ�.\n");
		printf("�������� %d �Դϴ�.\n", num % 2);
	}

	return 0;
}
