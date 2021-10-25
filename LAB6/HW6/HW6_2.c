#include <stdio.h>

int main(void) {
	
	int i = 0;
	int n, score;
	int total_score = 0;
	double avg_score;
	
	printf("Enter a student number: ");
	scanf_s("%d", &n);
	
	while (i < n) {
		printf("Enter a score: ");
		scanf_s("%d", &score);
		
		total_score += score;
		
		i++;
	}
	
	avg_score = (double)total_score / n;
	
	printf("The total is %d\n", total_score);
	if (n == 0) {
		printf("The average is 0.0\n");
	}
	else {
		printf("The average is %.1f\n", avg_score);
	}
	
	return 0;
}
