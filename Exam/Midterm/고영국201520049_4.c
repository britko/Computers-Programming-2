#include <stdio.h>

int main(void) {

	int sn, fn, i;
	int sum = 0;
	int cnt = 0; 
	
	printf("���ۼ� �Է�: ");
	scanf("%d", &sn);
	printf("���� �Է�: ");
	scanf("%d", &fn);
	
	for (i = sn; i <= fn; i++) {
		sum += i;
		cnt++;
	}
	
	printf("�� = %d\n", sum);
	printf("���� = %d\n", cnt);
	
	return 0;
}
