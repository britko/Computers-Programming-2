#include <stdio.h>
#include <string.h>
#include <ctype.h>

int alphaAndDigit(char *id);

int main(void) {
	
	char id[100];
	int i;
	
	while(1) {
		printf("ID입: ");
		gets(id);
		
		if(strlen(id) < 8) {
			printf("ID는 8자 이상이어야 합니다.\n\n");
			continue;
		}
		else if(!(isalpha(id[0]))) {
			printf("ID는 영문자로 시작해야 합니다.\n\n");
			continue;
		}
		else if(alphaAndDigit(id)) {
			printf("ID는 영문자와 숫자로만 구성해야 합니다.\n\n");
			continue;
		}
		else {
			printf("%s는 ID로 사용할 수 있습니다.\n\n", id);
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


  
	
 
	
