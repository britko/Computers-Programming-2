#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	
	char name[64];
	char initial[16] = "";
	char* p = NULL;
	int i, cnt = 1; 
	
	printf("���� �̸�? ");
	gets(name);
	
	p = name;
	initial[0] = *p;
	
	p = strchr(p, ' ');
	while(p != NULL) {
		initial[cnt] = *(p + 1);
		cnt++;
		
		p = strchr(p + 1, ' ');
	}
	
	printf("�̴ϼ�: %s\n", initial);
}
