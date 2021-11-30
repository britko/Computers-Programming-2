#include <stdio.h>

int main(void) {
	
	int KWh, base, use;
	
	printf("월 사용량 (KWh)? ");
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
	printf(" - 기본요금:\t%8d\n", base);
	printf(" - 전력량요금:\t%8d\n", use);
	printf("--------------------------\n");
	printf("전기 요금 합계:\t%8d\n", base + use);
	
	return 0;
}
