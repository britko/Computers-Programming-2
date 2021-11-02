#include <stdio.h>
#define MAX_SIZE 5

int main() {
	int i;
	double avg;
	int sum = 0;
	int max = 0;
	int nums[MAX_SIZE] = {45, 32, 73, 56, 21};
	
	for (i = 0; i < MAX_SIZE; i++) {
		printf("%4d", nums[i]);
		sum += nums[i];
		
		if (nums[i] > max) {
			max = nums[i];
		}
	}
	printf("\n");
	
	avg = (double)sum / MAX_SIZE;
	
	printf("sum: %d / avg: %f / max: %d\n", sum, avg, max);
	
	return 0;
}
