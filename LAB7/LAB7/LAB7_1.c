#include <stdio.h>

int main(void){
	
	int i = 1;
	int sum = 0;
	
	do {
		
		sum += i;
		i++;
		
	} while(i <= 100);
	
	printf("1부터 100까지 합 = %d\n", sum);
	
	return 0;
}
