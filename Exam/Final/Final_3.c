#include <string.h>
#include <stdio.h>

int char_num(char* p, char c);

int main(void) {
	
	char w[30];
	char* p;
	char ch;
	p = w;
	
	printf("���� �Է�: ");
	scanf("%c", &ch);
	printf("���ڿ� �Է�: ");
	scanf("%s", w);
	
	printf("����%c�� ����: %d\n", ch, char_num(p,ch));
}

int char_num(char* p, char c) {
	
	int i, cnt = 0;
	char *cp;
	
	cp = strchr(p, c);
	while(cp != NULL) {
		cnt++;
		cp++;
		
		cp = strchr(cp, c);
	}
	
	return cnt;
}


