#include <stdio.h>
#include <string.h>

int main(void) {
	
	char filename[64];
	char extension[64];
	char fullname[128];
	
	printf("���ϸ�? ");
	gets(filename);
	printf("Ȯ����? ");
	gets(extension);
	
	strcpy(fullname, filename);
	strcat(fullname, ".");
	strcat(fullname, extension);
	
	printf("��ü ���ϸ�: %s\n", fullname);
}
