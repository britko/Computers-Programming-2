#include <stdio.h>

int main() {
	
	int i, j, n, score;
	
	printf("Enter the number of scores(<=20):");
	scanf("%d", &n);
	
	int arr[n];
	
	for (i = 0; i < n; i++) {
		printf("Enter a score: ");
		scanf("%d", &score);
		
		arr[i] = score;	
	}
	
	for (i = 0; i < n; i++) {
		printf("Student %2d: ", i + 1);
		for (j = 0; j < arr[i]; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
