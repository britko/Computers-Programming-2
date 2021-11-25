#include <stdio.h>

int main(void) {
	
	int i, sum = 0;
	char word[81];
	
	printf("Enter one word: ");
	gets(word);
	
	for(i = 0; word[i] != '\0'; i++) {
		if(word[i] >= 48 && word[i] <= 57) {
			sum += word[i] - 48;
		}
	}
	
	printf("안에 있는 숫자들의 합은 %d", sum);
}
