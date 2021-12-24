#include <stdio.h>

int main(void) {

	char ch;
	
	
	while (1) {
		printf("Enter the character: ");
		scanf(" %c", &ch);
		
		if (ch >= 65 && ch <= 90) {
			printf("%c의 아스키코드는 %d이\n", ch, ch); 
			printf("%c를 소문자로 바꾸면 %c이다\n", ch, ch + 32); 
		}
		else if (ch >= 97 && ch <= 122) {
			printf("%c의 아스키코드는 %d이다\n", ch, ch); 
			printf("%c를 대문자로 바꾸면 %c이다\n", ch, ch - 32); 
		}
		else if (ch == '0') {
			break;
		}
		else {
			printf("%c의 아스키코드는 %d이다\n", ch, ch); 
		}
		
	}
	
	return 0;
}
