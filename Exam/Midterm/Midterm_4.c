#include <stdio.h>

int main(void) {

	int sn, fn, i;
	int sum = 0;
	int cnt = 0; 
	
	printf("시작수 입력: ");
	scanf("%d", &sn);
	printf("끝수 입력: ");
	scanf("%d", &fn);
	
	for (i = sn; i <= fn; i++) {
		sum += i;
		cnt++;
	}
	
	printf("합 = %d\n", sum);
	printf("개수 = %d\n", cnt);
	
	return 0;
}
