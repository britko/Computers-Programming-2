#include <stdio.h>

void divisors(int n);

int main(void) {
	
	int num;
	
	printf("양의 정수?");
	scanf("%d", &num);
	
	while (num != 0) {
		divisors(num);
		printf("양의 정수?");
		scanf("%d", &num);
	}
	
	return 0;
}

void divisors(int n) {
	
	int i = 1;
	int cnt = 0;
	
	printf("%d의 약수: ", n);
	
	while(i <= n) {
		if(n % i == 0) {
			printf("%d ", i);
			cnt++;
		}
		i++;
	}
	
	printf("=> 총 %d개\n", cnt);
}
