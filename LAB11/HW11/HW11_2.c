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
	
	printf("\t\t중간\t기말\t팀플\t출석\t총점\n");
	
	for (i = 0; i < 5; i++) {
		printf("학생\t%d번:\t", i+1); 
		for (j = 0; j < 5; j++) {
			printf("%d\t", scores[i][j]);
		}
		printf("\n");
	}
	
	printf("항목별 평균:\t");
	for (i = 0; i < 5; i++) {
		printf("%.1f\t", averages[i]);
	}
}
