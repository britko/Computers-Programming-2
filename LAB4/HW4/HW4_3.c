#include <stdio.h>

int main(void) {
	
	int water, salt;
	
	printf("��(g)? ");
	scanf("%d", &water);
	printf("�ұ�(g)? ");
	scanf("%d", &salt);
	
	printf("�ұݹ� ��: %.2f%%\n", (double)salt / (water + salt) * 100);
		
	return 0;
}
