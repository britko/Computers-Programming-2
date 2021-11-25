#include <stdio.h>
#include <string.h>

int main(void) {
	
	char word[81], newWord[81];
	int i, len;
	
	printf("Enter one word: ");
	scanf("%s", &word);
	
	len = strlen(word);
	
	for(i = 0; i < len; i++) {
		newWord[i] = word[len - (i + 1)];
	}
	
	printf("The reversed word is %s\n", newWord);
}
