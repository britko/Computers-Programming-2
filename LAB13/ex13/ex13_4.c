#include <stdio.h>
#include <string.h>

int main() {

	char filename[10];
	char *p = NULL;

	printf("���ϸ�.Ȯ���ڸ� �Է�: ");
	scanf("%s", filename);

	p = strtok(filename, ".");
	printf("���ϸ�: %s\n", p);
	p = strtok(NULL, ".");
	printf("Ȯ���ڸ�: %s\n", p);
	
	return 0;
}
