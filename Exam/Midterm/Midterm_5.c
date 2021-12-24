#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int n, ran;
	int cnt = 0;
	
	
	srand(time(NULL));
	ran = rand() % 89 + 11;

	
	while (1) {
		
		printf("당첨번호를 맞춰봐: ");
		scanf("%d", &n);
		printf("-----------------------\n"); 
		
		if (n % 10 == ran % 10 || n % 10 == ran / 10 || n / 10 == ran % 10 || n / 10 == ran / 10) {
				printf("당첨번호가 %d인데, 한 자리만 맞춰서 5만원 축하힙니다.\n", ran);
				break; 
		}
		
		if (n == ran) {
			printf("당첨번호가 %d이며, 20만원 축하합니다.\n", ran);
			break;
		}
		else if (n < ran) {
			printf("꽝이네!! 더 큰 수를 말해보세요\n");
		}
		else if (n > ran) {
			printf("꽝이네!! 더 작은 수를 말해보세요\n");
		}
		
		cnt++;
		if (cnt == 5) break;
	}
	
	return 0;
}
