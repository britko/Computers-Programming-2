#include <stdio.h>
#include <string.h>

int main(void) {
	
	char filename[64];
	char extension[64];
	char fullname[128];
	
	printf("파일명? ");
	gets(filename);
	printf("확장자? ");
	gets(extension);
	
	strcpy(fullname, filename);
	strcat(fullname, ".");
	strcat(fullname, extension);
	
	printf("전체 파일명: %s\n", fullname);
}
