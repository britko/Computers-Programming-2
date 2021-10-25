#include <stdio.h>

// version 1
/* 
int main(void){
	
	int score;
	int total = 0;
	
	printf("Enter a score(-1 for exit): ");
	scanf("%d", &score);
	
	while (score != -1) {
		
		total += score;
		
		printf("Enter a score(-1 for exit): ");
		scanf("%d", &score);
		
	}
	
	printf("The total is %d.\n", total);
	
	return 0;
}
*/

// version 2
int main(void){
	
	int score;
	int total = 0;
	
	printf("Enter a score(-1 for exit): ");
	scanf("%d", &score);
	
	while (1) {
		
		total += score;
		
		printf("Enter a score(-1 for exit): ");
		scanf("%d", &score);
		
		if (score == -1)
			break;
		
	}
	
	printf("The total is %d.\n", total);
	
	return 0;
}
