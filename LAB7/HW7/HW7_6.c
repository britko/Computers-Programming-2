#include <stdio.h>

int main(void){
	
	int N, i, j;
	int cnt = 0;
	
	
	printf("양의 정수? ");
	scanf("%d", &N);
	
	for (i = 2; i <= N; i++) {
		
		for (j = 2; j < i; j++) {
			
			if (i % j == 0) break;
		}
		
		if (j == i) {
			
			cnt++;
			if (cnt % 11 == 0) printf("\n");
			
			printf("%3d", j);
			
		}
	}
	
	return 0;
}


