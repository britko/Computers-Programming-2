#include <stdio.h>

int main(void) {
	
	int x, d;
	
	printf("상품 가격: ");
	scanf("%d", &x);
	printf("할인율(%%): ");
	scanf("%d", &d);
	printf("\n");
	
	printf("----------영수증----------\n");
	printf("상품 가격:\t%8d 원\n", x);
	printf("할인된 가격:\t%8d 원\n", x * d / 100);
	printf("--------------------------\n");
	printf("할인 후 금액:\t%8d 원\n", x * (100 - d) / 100);
	printf("--------------------------\n");
	
	return 0;
}
