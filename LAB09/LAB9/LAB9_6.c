#include <stdio.h>

int isPrime(int n);

int main(void) {
	
	int num;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	
	if(isPrime(num)) {
		printf("�Ҽ��Դϴ�.\n");
	}
	else {
		printf("�Ҽ��� �ƴմϴ�.\n");
	}

	return 0;
}

int isPrime(int n) {
	
	int i = 2;
	
	while (i < n) {
		
		if (n % i == 0) {
			return 0;
			break;
		}
		i++;	
	}
	
	if (i == n) {
		return 1;
	}
}
