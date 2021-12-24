#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	
	char sentance[200];
	char str[30];
	int i, n;
	
	printf("입력받을 문자열 개수: ");
	scanf("%d", &n);
	
	printf("\n");
	for(i = 0; i < n; i++) {
		
		printf("문자열 입력: ");
		scanf("%s", str);
		
		
		strcat(sentance, str);
		if(i != n-1){
			strcat(sentance, " ");
		}
	}
	
	printf("전체 문자열: %s\n", sentance);
	printf("전체 문자열의 길이: %d", strlen(sentance));
	
	
	return 0;
}


