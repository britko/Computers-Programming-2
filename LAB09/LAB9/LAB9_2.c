#include <stdio.h>

void get_factorial(int n);
int main(void){
	
	int num;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	
	get_factorial(num);
}

void get_factorial(int n){
	
	int i;
	int fac = 1;
	
	for(i = n; i > 0; i--){
		fac *= i;
	}
	
	// 재귀호출을 사용한 fatorial 
//	if(n == 1) return 1;
//	return n * factorial(n-1);
	
	printf("%d! = %d\n", n, fac);
}
