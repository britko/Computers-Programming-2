#include <stdio.h>

int main(void) {
	
	int x, W;
	
	printf("기본요금? ");
	scanf("%d", &x);
	printf("월 사용량(kWh)? ");
	scanf("%d", &W);
	
	x += W * 190;
	
	printf("전기요금: %d 원\n", x);
	
	return 0;
}
