#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	
	char str[100], ceaser_str[100];
	int n, len, i;
	
	printf("문자열입력: ");
	gets(str);
	printf("암호 키(정수)? ");
	scanf("%d", &n);
	
	len = strlen(str);
	
	for(i = 0; i < len; i++) {
		// 암호 키 더해도 알파벳 범위(대, 소문자) 안에 있을 경우 
		if(isalpha(str[i] + n)) {
			ceaser_str[i] = str[i] + n;
		}
		// 대문자에서 암호 키를 더했을 때 Z를 넘어갈 경우 
		else if(str[i] + n > 'Z' && str[i] + n < 116) {
			ceaser_str[i] = str[i] + n - 26;
		}
		// 소문자에서 암호 키를 더했을 때 z를 넘어갈 경우 
		else if(str[i] + n > 'z' && str[i] + n < 148) {
			ceaser_str[i] = str[i] + n - 26;
		}
		// 영문자가 아닐 때
		else {
			ceaser_str[i] = str[i];
		} 
	}
	
	printf("\n원본 문자열: %s\n", str);
	printf("암호화된 문자열: %s\n", ceaser_str);
}


