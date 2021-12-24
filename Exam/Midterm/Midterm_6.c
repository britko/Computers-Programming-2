#include <stdio.h>

int main(void) {

	int n, m, i;
	int sum = 0;
	int cnt = 0;
	
	printf("n:");
	scanf("%d", &n);
	printf("m:");
	scanf("%d", &m);
	
	while (1) {
		i = 1;
		while (i <= n) {
			i++;
			if (i == n){
				printf("%d ", n);
				sum += n;
				cnt++;
			}
			else if (n % i == 0) break;

		}
		
		n++;
	
		if (cnt == m) break;
	}
	
	printf("소수의 합: %d\n", sum);
	
	return 0;
}
