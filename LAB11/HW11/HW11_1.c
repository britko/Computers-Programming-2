#include <stdio.h>
#define ROW 8
#define COL 9

int main() {
	int i, j, c;
	int arr[ROW][COL];
	
	printf("--������ ǥ�� ������ �����ϴ�.\n");
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			arr[i][j] = (i+2) * (j+1);
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	
	printf("--���ϴ� ��������? ");
	scanf("%d", &c);
	
	for (i = 0; i < COL; i++) {
		printf("%4d", arr[c-2][i]);
	}
}
