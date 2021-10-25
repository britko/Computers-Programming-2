#include <stdio.h>

// 단계1 
/*
int main(void) {
	
	int num;
	
	printf("Enter the number: ");
	scanf_s("%d", &num);
	
	if(num % 2 == 0)
		printf("짝수입니다.\n");
	else
		printf("홀수입니다.\n");
	
	return 0;
}
*/

// 단계2 
int main(void) {
	
	int num;
	
	printf("Enter the number: ");
	scanf_s("%d", &num);
	
	if(num % 2 == 0) {
		printf("짝수입니다.\n");
		printf("몫은 %d 입니다.\n", num / 2);
	}
	else {
		printf("홀수입니다.\n");
		printf("나머지는 %d 입니다.\n", num % 2);
	}

	return 0;
}
