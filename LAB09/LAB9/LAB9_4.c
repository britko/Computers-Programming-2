#include <stdio.h>

void divisors(int n);

int main(void) {
	
	int num;
	
	printf("���� ����?");
	scanf("%d", &num);
	
	while (num != 0) {
		divisors(num);
		printf("���� ����?");
		scanf("%d", &num);
	}
	
	return 0;
}

void divisors(int n) {
	
	int i = 1;
	int cnt = 0;
	
	printf("%d�� ���: ", n);
	
	while(i <= n) {
		if(n % i == 0) {
			printf("%d ", i);
			cnt++;
		}
		i++;
	}
	
	printf("=> �� %d��\n", cnt);
}
