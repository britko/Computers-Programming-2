#include <stdio.h>
#include <string.h>

int main() {
	
	char str[100], tmpStr[100]; 
	int n, len, i;
	
	printf("���ڿ��Է�: ");
	gets(str);
	
	len = strlen(str);
	
	while(1) {
		
		printf("\n�̵��� ���ڼ��Է�: ");
		scanf("%d", &n);
		
		if(n == 0) break;
		
		for(i = 0; i < len; i++) {
			// �� n�� ���ڿ� ������ 
			if(i < n) {
				tmpStr[i] = str[len - n + i];
			}
			// �� ���ڿ� n��ŭ �ڷ� 
			else {
				tmpStr[i] = str[i - n];
			}
		}
		
		// �����Ȳ�� �����ϰ� ���� ���꿡 ��� 
		strcpy(str, tmpStr);
		
		printf("%s\n", str);
	}
	
}
