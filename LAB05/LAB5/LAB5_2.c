#include <stdio.h>

int main(void) {
	
	char grade;
	int score;
	
	printf("Enter your grade: ");
	scanf_s("%c", &grade);
	
	if(grade == 'A') {
		printf("Enter your score: ");
		scanf_s("%d", &score);
		
		printf("%d 점으로 %c 학점이군요.\n", score, grade);
	}
	
	return 0;
}
