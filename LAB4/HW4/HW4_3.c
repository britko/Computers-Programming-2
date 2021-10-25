#include <stdio.h>

int main(void) {
	
	int water, salt;
	
	printf("물(g)? ");
	scanf("%d", &water);
	printf("소금(g)? ");
	scanf("%d", &salt);
	
	printf("소금물 농도: %.2f%%\n", (double)salt / (water + salt) * 100);
		
	return 0;
}
