#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	
	char str[100], tmp[100] = "", n[100];
	int i, sum = 0, cnt = 0;
	
	printf("Enter one word: ");
	gets(str);
	
	for(i = 0; i < strlen(str); i++) {
		if(isdigit(str[i])) {
			tmp[cnt] = str[i];
			tmp[cnt+1] = '\0';
			cnt++;
			
			if(!isdigit(str[i+1])) {
				sum += atoi(tmp);
				cnt = 0;
			}
		}
	}
	
	printf("글자 안의 수의 합은 %d\n", sum);
}
