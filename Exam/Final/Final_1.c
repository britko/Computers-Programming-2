#include <stdio.h>

int isPrime(int num);

int main(void) {
	
	int n, sum = 0;
	
	while(1) {
		printf("���� �Է�: ");
		scanf("%d", &n);
		
		if(n == -1) {
			printf("\n�Ҽ��� ��: %d", sum);
			break;
		}
		
		if(isPrime(n)) {
			sum += n;
		}
	}
	
	
	return 0;
}

int isPrime(int num) {
	
	int i;
	
	for(i = 2; i < num; i++) {
		if(num % i == 0) {
			return 0;
			break;
		}
	}
	
	return 1; 
}
