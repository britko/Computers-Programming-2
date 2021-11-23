#include <stdio.h>
#include <string.h>

int main() {

	char filename[10];
	char *p = NULL;

	printf("파일명.확장자명 입력: ");
	scanf("%s", filename);

	p = strtok(filename, ".");
	printf("파일명: %s\n", p);
	p = strtok(NULL, ".");
	printf("확장자명: %s\n", p);
	
	return 0;
}
