#include <stdio.h>

int main(void){
	
	int x, y, r;
	
	printf("두 개의 정수를 입력하시오(큰수, 작은수): ");
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
