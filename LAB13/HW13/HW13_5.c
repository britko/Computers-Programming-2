#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strcmp_ic(char *str1, char *str2);

int main() {
	
	char str1[100], str2[100];
	
	printf("첫 번째 문자열? ");
	gets(str1);
	printf("두 번째 문자열? ");
	gets(str2);
	
	strcmp_ic(str1, str2);
}

void strcmp_ic(char *str1, char *str2) {
	
	int i, cmp;
	char newStr1[100], newStr2[100];
	
	strcpy(newStr1, str1);
	strcpy(newStr2, str2);
	
	for(i = 0; i < strlen(newStr1); i++) {
		if(isupper(newStr1[i])) {
			newStr1[i] = tolower(newStr1[i]);
		}
	}
	for(i = 0; i < strlen(newStr2); i++) {
		if(isupper(newStr2[i])) {
			newStr2[i] = tolower(newStr2[i]);
		}
	}
	
	
	cmp = strcmp(newStr1, newStr2);
	
	if(cmp == 0) {
		printf("%s == %s", str1, str2);
	}
	if(cmp > 0) {
		printf("%s > %s", str1, str2);
	}
	if(cmp < 0) {
		printf("%s < %s", str1, str2);
	}
	
	
}

