#include <stdio.h>
#include <string.h>

void reverse_string(char* str) {
	
	int i, len;
	
	len = strlen(str);
	char r_str[len];	
	
	for(i = 0; i < len; i++) {
		r_str[i] = str[len - (i + 1)];
	}

	for(i = 0; i < len; i++) {
		str[i] = r_str[i];
	}
}

int main(void) {
	
	char str[256] = "";
	
	printf("���ڿ�? ");
	gets(str);
	
	reverse_string(str);
	
	printf("�������� �� ���ڿ�: %s\n", str);
}
