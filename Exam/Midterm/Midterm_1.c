#include <stdio.h>

int main() {
	
	int n;
	
	printf("주문한 라면 개수:");
	scanf("%d", &n);
	printf("----------------------\n");
	
	printf("30개 묶음 수: %d\n", n / 30);
	printf("10개 묶음 수: %d\n", n % 30 / 10);
	printf("5개 묶음 수: %d\n", n % 30 % 10 / 5);
	printf("----------------------");
	
	return 0;
}
