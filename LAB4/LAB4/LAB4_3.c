#include <stdio.h>

int main(void) {
	
	int x, d;
	
	printf("��ǰ ����: ");
	scanf("%d", &x);
	printf("������(%%): ");
	scanf("%d", &d);
	printf("\n");
	
	printf("----------������----------\n");
	printf("��ǰ ����:\t%8d ��\n", x);
	printf("���ε� ����:\t%8d ��\n", x * d / 100);
	printf("--------------------------\n");
	printf("���� �� �ݾ�:\t%8d ��\n", x * (100 - d) / 100);
	printf("--------------------------\n");
	
	return 0;
}
