#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	
	char sentance[200];
	char str[30];
	int i, n;
	
	printf("�Է¹��� ���ڿ� ����: ");
	scanf("%d", &n);
	
	printf("\n");
	for(i = 0; i < n; i++) {
		
		printf("���ڿ� �Է�: ");
		scanf("%s", str);
		
		
		strcat(sentance, str);
		if(i != n-1){
			strcat(sentance, " ");
		}
	}
	
	printf("��ü ���ڿ�: %s\n", sentance);
	printf("��ü ���ڿ��� ����: %d", strlen(sentance));
	
	
	return 0;
}


