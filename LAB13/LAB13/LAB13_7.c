#include <stdio.h>
#include <string.h>
#include <ctype.h>

int alphaAndDigit(char *id);

int main(void) {
	
	char id[100];
	int i;
	
	while(1) {
		printf("ID��: ");
		gets(id);
		
		if(strlen(id) < 8) {
			printf("ID�� 8�� �̻��̾�� �մϴ�.\n\n");
			continue;
		}
		else if(!(isalpha(id[0]))) {
			printf("ID�� �����ڷ� �����ؾ� �մϴ�.\n\n");
			continue;
		}
		else if(alphaAndDigit(id)) {
			printf("ID�� �����ڿ� ���ڷθ� �����ؾ� �մϴ�.\n\n");
			continue;
		}
		else {
			printf("%s�� ID�� ����� �� �ֽ��ϴ�.\n\n", id);
			break;
		}
	}
}

int alphaAndDigit(char *id) {
	
	int i, flag = 0;
	
	for(i = 0; i < strlen(id); i++) {
		if(!(isalpha(id[i])) && !(isdigit(id[i]))) {
			flag = 1;
			break;
		}
	}
	
	return flag;
}


  
	
 
	
