#include <stdio.h>

int main(void) {

	char ch;
	
	
	while (1) {
		printf("Enter the character: ");
		scanf(" %c", &ch);
		
		if (ch >= 65 && ch <= 90) {
			printf("%c�� �ƽ�Ű�ڵ�� %d��\n", ch, ch); 
			printf("%c�� �ҹ��ڷ� �ٲٸ� %c�̴�\n", ch, ch + 32); 
		}
		else if (ch >= 97 && ch <= 122) {
			printf("%c�� �ƽ�Ű�ڵ�� %d�̴�\n", ch, ch); 
			printf("%c�� �빮�ڷ� �ٲٸ� %c�̴�\n", ch, ch - 32); 
		}
		else if (ch == '0') {
			break;
		}
		else {
			printf("%c�� �ƽ�Ű�ڵ�� %d�̴�\n", ch, ch); 
		}
		
	}
	
	return 0;
}
