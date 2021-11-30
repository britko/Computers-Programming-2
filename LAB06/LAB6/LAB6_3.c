#include <stdio.h>

int main(void) {
	
	int i = 0;
	int n, score;
	int total_score = 0;
	int max_score = 0;
	
	printf("Enter a student number: ");
	scanf_s("%d", &n);
	
	while (i < n) {
		printf("Enter a score: ");
		scanf_s("%d", &score);		
		
		total_score += score;
		
		if (max_score <= score) {
			max_score = score;
		}
		
		i++;
	}
	
	printf("The total is %d\n", total_score);
	if (max_score != 0) {
		printf("The max is %d\n", max_score);
	}
	
	
	return 0;
}
