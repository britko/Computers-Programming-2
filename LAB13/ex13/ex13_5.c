#include <stdio.h>
#include <string.h>

int main() {

	char name[100];
	char birth[6];
	int i, y, m, d;

	printf("�̸�(����): ");
	gets(name);
	
	printf("�������(yymmdd): ");
	gets(birth);
	sscanf(birth, "%2d%2d%2d", &y, &m, &d);
	
	for(i = 0; i < sizeof(name) / sizeof(char); i++) {
		if(isupper(name[i])) {
			name[i] = tolower(name[i]);
		}
		else if(islower(name[i])) {
			name[i] = toupper(name[i]);
		}
	}
	
	sprintf(birth, "Birth: %02d-%02d-%02d", y, m, d);
	
	printf("\n");
	puts(name);
	puts(birth);
	
	if (m >= 1 && m <= 3)
		printf("�¾ ������ ���Դϴ�.\n");
	else if(m >= 4 && m <= 6)
		printf("�¾ ������ �����Դϴ�.\n");
	else if (m >= 7 && m <= 9)
		printf("�¾ ������ �����Դϴ�.\n");
	else 
		printf("�¾ ������ �ܿ��Դϴ�.\n");


	return 0;
}
