#include <stdio.h>

int main(void) {
	
	int KWh, base, use;
	
	printf("�� ��뷮 (KWh)? ");
	scanf_s("%d", &KWh);
	
	if(KWh <= 300) {
		base = 1000;
		use = 100 * KWh;
	}
	else {
		base = 5000;
		use = 100 * 300 + 200 * (KWh-300);
	}
	
	printf("\n");
	printf(" - �⺻���:\t%8d\n", base);
	printf(" - ���·����:\t%8d\n", use);
	printf("--------------------------\n");
	printf("���� ��� �հ�:\t%8d\n", base + use);
	
	return 0;
}
