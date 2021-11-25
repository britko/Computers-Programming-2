#include <stdio.h>
#include <string.h>

int main() {
	
	char str[100], tmpStr[100]; 
	int n, len, i;
	
	printf("문자열입력: ");
	gets(str);
	
	len = strlen(str);
	
	while(1) {
		
		printf("\n이동할 글자수입력: ");
		scanf("%d", &n);
		
		if(n == 0) break;
		
		for(i = 0; i < len; i++) {
			// 뒤 n개 문자열 앞으로 
			if(i < n) {
				tmpStr[i] = str[len - n + i];
			}
			// 앞 문자열 n만큼 뒤로 
			else {
				tmpStr[i] = str[i - n];
			}
		}
		
		// 진행상황을 저장하고 다음 연산에 사용 
		strcpy(str, tmpStr);
		
		printf("%s\n", str);
	}
	
}
