#include <stdio.h>

int main(void){
	
	char ch;
	
	while(1) {
		
		printf("�ҹ��ڸ� �Է�: ");
		scanf(" %c", &ch);
		
		if(ch >= 97 && ch <= 112 || ch >= 114 && ch <= 122) {
			printf("��ȯ�� �빮�ڴ� %c\n", ch - 32);
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
