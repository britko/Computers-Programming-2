#include <stdio.h>
#define SIZE 5

int main() {
	
	int arr[SIZE];
	int dis, i;
	
	printf("��ǰ�� 5���� �Է��ϼ���: ");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	printf("������(%%)? ");
	scanf("%d", &dis);
	
	for (i = 0; i < SIZE; i++) {
		printf("����: %6d --> ���ΰ�: %6d\n", arr[i], arr[i] * (100 - dis) / 100);
	}
	
	return 0;
}
