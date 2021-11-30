#include <stdio.h>

// 단계1
/* 
int main(void) {
	
	int score;
	
	printf("Enter the score: ");
	scanf_s("%d", &score);
	
	if(score >= 60)
		printf("The grade is A!\n");
	else
		printf("The grade is F!\n");
	
	return 0;
}
*/

// 단계2
/*
int main(void) {
	
	int score;
	char grade; 
	
	printf("Enter the score: ");
	scanf_s("%d", &score);
	
	if(score >= 60)
		grade = 'A';
	else
		grade = 'F';
		
	printf("The grade is %c!\n", grade);
	return 0;
}
*/

// 단계3
int main(void) {
	
	int score;
	char grade; 
	
	printf("Enter the score: ");
	scanf_s("%d", &score);
	
	if(score >= 90)
		grade = 'A';
	else if(score >= 80)
		grade = 'B';
	else if(score >= 70)
		grade = 'C';
	else if(score >= 60)
		grade = 'D';
	else
		grade = 'F';
		
	printf("The grade is %c!\n", grade);
	return 0;
}
