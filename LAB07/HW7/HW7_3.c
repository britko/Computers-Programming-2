#include <stdio.h>

int main(void){
	
	int score;
	int total = 0;
	int max_score = 0;
	int cnt = 0;
	
	while (1) {
		
		printf("Enter the score(-1 for exit): ");
		scanf("%d", &score);
		
		if (score == -1) break;
		
		cnt ++;
		total += score;
		if (max_score <= score) {
			max_score = score;
		}
	}
	
	printf("You've entered %d students.\n", cnt);
	
	if (cnt != 0) {
		
		printf("The total is %d.\n", total);
		printf("The average is %.1f.\n", (double)total / cnt);
		printf("The best score is %d.\n", max_score);
	}
	else {
		printf("There is no data.\n");
	}
	
	return 0;
}
