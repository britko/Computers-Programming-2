#include <stdio.h>
int isPrime(int n);

int main(void){
	
	int num;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	
	if(isPrime(num) == 1){
		printf("�Ҽ��Դϴ�.\n");
	}
	else if(isPrime(num) == 0){
		printf("�Ҽ��� �ƴմϴ�.\n");
	}

	return 0;
}

int isPrime(int n){
	
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
