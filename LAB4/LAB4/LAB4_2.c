#include <stdio.h>

int main(void) {
	
	int x, W;
	
	printf("�⺻���? ");
	scanf("%d", &x);
	printf("�� ��뷮(kWh)? ");
	scanf("%d", &W);
	
	x += W * 190;
	
	printf("������: %d ��\n", x);
	
	return 0;
}
