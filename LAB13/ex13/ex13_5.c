#include <stdio.h>
#include <string.h> 
#include <ctype.h>

void str_compare(char *str1, char *str2);

int main() {
	
	char str1[100], str2[100];
	
	printf("ù ��° ���ڿ�? ");
	gets(str1);
	printf("�� ��° ���ڿ�? ");
	gets(str2);
	
	str_compare(str1, str2);	
}

void str_compare(char *str1, char *str2) {
	
	int cmp, i;
	
	// �빮�ڸ� �ҹ��ڷ� ��� �ٲٱ�
	for(i = 0; i < strlen(str1); i++) {
		if(isupper(str1[i])) {
			str1[i] = tolower(str1[i]);
		}
	}
	for(i = 0; i < strlen(str2); i++) {
		if(isupper(str2[i])) {
			str2[i] = tolower(str2[i]);
		}
	}
	
	// �� ���ڿ��� ��
	cmp = strcmp(str1, str2);
	
	if(cmp == 0) {
		printf("%s == %s", str1, str2);
	}
	else if(cmp > 0) {
		printf("%s > %s", str1, str2);
	}
	else {
		printf("%s < %s", str1, str2);
	}
}


