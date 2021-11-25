#include <stdio.h>
#include <ctype.h>

int main(void) {
	
	char word[81], newWord[81];
	int i, cnt = 0;
	
	printf("Enter one word: ");
	gets(word);
	
	for(i = 0; word[i] != '\0'; i++) {
		if(isupper(word[i])) {
			newWord[cnt] = word[i];
			cnt++;
		}
	}
	
	printf("%s\n", newWord);
}
