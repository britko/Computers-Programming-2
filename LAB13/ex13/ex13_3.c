#include <stdio.h>
#include <string.h>

int main() {
	
	char str1[3];
	char str2[3] = "xyz";
	char str3[6];

	strcpy(str1, "abc");
	
	if(strcmp(str1, str2) == 0) {
		printf("�� ���ڿ��� ����.\n");
	}
	else if(strcmp(str1, str2) < 0) {
		printf("%s\n", str1);
	}
	else {
		printf("%s\n", str2);
	}
	
	strcpy(str3, str1);
	strcat(str3, str2);
	printf("%s\n", str3);
	
	if(strchr(str3, 'F') != NULL) {
		printf("�ִ�\n");
	}
	else {
		printf("����");
	} 
	
	return 0;
}
