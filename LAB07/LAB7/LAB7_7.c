#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

// 단계 1
/*
int main(void){
	
	srand(time(NULL));
	int x = rand() % 100;
	int y = rand() % 100;
	int ans;
	
	printf("%d + %d = ", x, y);
	
	return 0;
}
*/


// 단계 2 
int main(void){
	
	srand(time(NULL));
	int x = rand() % 100;
	int y = rand() % 100;
	int ans;
	
	printf("%d + %d = ", x, y);
	scanf("%d", &ans);
	
	if (ans == x + y) {
		printf("Your answer is right\n");
	}
	else {
		printf("Your answer is wrong\n");
		printf("%d is the right answer\n", x + y);
	}
	
	return 0;
}
