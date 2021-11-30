#include <stdio.h>

int main(void){
	
	char ch;
	
	while(1) {
		
		printf("소문자를 입력: ");
		scanf(" %c", &ch);
		
		if(ch >= 97 && ch <= 112 || ch >= 114 && ch <= 122) {
			printf("변환된 대문자는 %c\n", ch - 32);
		}
		else if(ch == 'q' || ch == 'Q') {
			break;
		}
		else {
			continue;
		}
	}
	
	return 0;
}
