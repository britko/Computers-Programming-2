#include <stdio.h>

int isPrime(int n);

int main(void){
	
	int cnt = 0;
	int i = 1;
	
	
	while(1){
		
		if(isPrime(i)){
			cnt++;
			printf("%d번째 소수는 %d\n", cnt, i);
		}
		i++;
		if(cnt == 10) break;
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
	
	if (i == n) return 1;
}
