#include <stdio.h>

int main(void){
	
	int x, y, r;
	
	printf("�� ���� ������ �Է��Ͻÿ�(ū��, ������): ");
	scanf("%d %d", &x, &y);
	
	while(1) {
		
		if(y == 0) {
			printf("GCD= %d\n", x);
			break;
		}
		
		r = x % y;
		x = y;
		y = r;
		
	}
	
	return 0;
}
