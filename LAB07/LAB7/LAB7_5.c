#include <stdio.h>

int main(void){
	
	int n;
	int i = 2;
	
	printf("���� ����? ");
	scanf("%d", &n);
	
	while (i < n) {
		
		if (n % i == 0) {
			printf("%d�� �Ҽ��� �ƴϴ�.\n", n);
			break;
		}
		i++;	
	}
	
	if (i == n) {
		printf("%d�� �Ҽ��̴�.\n", n);
	}
	
	return 0;
}
