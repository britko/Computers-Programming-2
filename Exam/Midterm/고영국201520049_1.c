#include <stdio.h>

int main() {
	
	int n;
	
	printf("�ֹ��� ��� ����:");
	scanf("%d", &n);
	printf("----------------------\n");
	
	printf("30�� ���� ��: %d\n", n / 30);
	printf("10�� ���� ��: %d\n", n % 30 / 10);
	printf("5�� ���� ��: %d\n", n % 30 % 10 / 5);
	printf("----------------------");
	
	return 0;
}
