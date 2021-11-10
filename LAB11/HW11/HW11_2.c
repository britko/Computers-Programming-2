#include <stdio.h>

int main() {
	int scores[5][5] = {
		{28,28,26,9},
		{30,27,30,10},
		{25,26,24,8},
		{18,22,22,5},
		{24,25,30,10}
	};
	double averages[5] = {0};
	int i, j;
	
	for (i = 0 ; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			scores[i][4] += scores[i][j];
		}
	}
	
	for (i = 0 ; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			averages[i] += scores[j][i];
		}
		averages[i] /= 5;
	}
	
	printf("\t\t�߰�\t�⸻\t����\t�⼮\t����\n");
	
	for (i = 0; i < 5; i++) {
		printf("�л�\t%d��:\t", i+1); 
		for (j = 0; j < 5; j++) {
			printf("%d\t", scores[i][j]);
		}
		printf("\n");
	}
	
	printf("�׸� ���:\t");
	for (i = 0; i < 5; i++) {
		printf("%.1f\t", averages[i]);
	}
}
