#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	
	srand(time(NULL));
	
	int guess = rand() % 99 + 1;
	int cnt = 1;
	int answer;
	
	do {
		
		printf("정답을 추측해 보시오: ");
		scanf("%d", &answer);
		
		if (guess == answer){
			printf("축하합니다. %d번만에 맞췄네요.\n", cnt);
			break;
		}
		else if (guess > answer) {
			printf("더 큰 수를 말해봐\n");
		}
		else {
			printf("더 작은 수를 말해봐\n");
		}
		
		cnt++;

	} while (guess != answer);
	
	return 0;
}
