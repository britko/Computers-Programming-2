#include <stdio.h>

int main(void){
	
	int n;
	int i = 2;
	
	printf("양의 정수? ");
	scanf("%d", &n);
	
	while (i < n) {
		
		if (n % i == 0) {
			printf("%d는 소수가 아니다.\n", n);
			break;
		}
		i++;	
	}
	
	if (i == n) {
		printf("%d은 소수이다.\n", n);
	}
	
	return 0;
}
