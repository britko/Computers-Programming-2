#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	
	char str[100], ceaser_str[100];
	int n, len, i;
	
	printf("���ڿ��Է�: ");
	gets(str);
	printf("��ȣ Ű(����)? ");
	scanf("%d", &n);
	
	len = strlen(str);
	
	for(i = 0; i < len; i++) {
		// ��ȣ Ű ���ص� ���ĺ� ����(��, �ҹ���) �ȿ� ���� ��� 
		if(isalpha(str[i] + n)) {
			ceaser_str[i] = str[i] + n;
		}
		// �빮�ڿ��� ��ȣ Ű�� ������ �� Z�� �Ѿ ��� 
		else if(str[i] + n > 'Z' && str[i] + n < 116) {
			ceaser_str[i] = str[i] + n - 26;
		}
		// �ҹ��ڿ��� ��ȣ Ű�� ������ �� z�� �Ѿ ��� 
		else if(str[i] + n > 'z' && str[i] + n < 148) {
			ceaser_str[i] = str[i] + n - 26;
		}
		// �����ڰ� �ƴ� ��
		else {
			ceaser_str[i] = str[i];
		} 
	}
	
	printf("\n���� ���ڿ�: %s\n", str);
	printf("��ȣȭ�� ���ڿ�: %s\n", ceaser_str);
}


