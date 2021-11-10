#include <stdio.h>
#define ROW 8
#define COL 9

int main() {
	int i, j, c;
	int arr[ROW][COL];
	
	printf("--구구단 표는 다음과 같습니다.\n");
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			arr[i][j] = (i+2) * (j+1);
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	
	printf("--원하는 구구단은? ");
	scanf("%d", &c);
	
	for (i = 0; i < COL; i++) {
		printf("%4d", arr[c-2][i]);
	}
}
