#include <stdio.h>
#include <string.h>

int main(void) {
	
	char str[81], r_str[81];
	int i, len;
	
	printf("문자열 입력(문자수 81 이하): ");
	scanf("%s", &str);
	
	len = strlen(str);
	
	for(i = 0; i < len; i++) {
		r_str[i] = str[len - (i + 1)];
	}
	
	if (strcmp(str, r_str) == 0)
	  printf("\"%s\" is a Palindrome\n", str);
	else
	  printf("\"%s\" isn't a Palindrome\n", str);
	
	return 0;
}
