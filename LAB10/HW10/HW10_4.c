#include <stdio.h>
#define SIZE 5

int main() {
	
	int arr[SIZE];
	int dis, i;
	
	printf("상품가 5개를 입력하세요: ");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	printf("할인율(%%)? ");
	scanf("%d", &dis);
	
	for (i = 0; i < SIZE; i++) {
		printf("가격: %6d --> 할인가: %6d\n", arr[i], arr[i] * (100 - dis) / 100);
	}
	
	return 0;
}
