#include <stdio.h>

int main(void){
	
	int ans;
	char yn;
	
	do {
		
		srand(time(NULL));
		int x = rand() % 100;
		int y = rand() % 100;
	
		printf("%d + %d = ", x, y);
		scanf("%d", &ans);
		
		if (ans == x + y) {
			printf("Your answer is right\n");
		}
		else {
			printf("Your answer is wrong\n");
			printf("%d is the right answer\n", x + y);
		}
		
		while(getchar() != '\n');
		printf("continue?(y/n): ");
		scanf("%c", &yn);
		if (yn == 'n') break;
		
	} while(1);
	
	return 0;
}
