#include <stdio.h>
#include <string.h>

typedef struct login_info {
	char id[20];
	char passwd[20];
	int no;
} login;

int main() {
	
	login aMember;
	int i;
	
	printf("ID? ");
	scanf("%s", aMember.id);
	printf("Password? ");
	scanf("%s", aMember.passwd);
	printf("No? ");
	scanf("%d", &aMember.no);
	
	printf("\nID: %s\n", aMember.id);
	printf("PW: ");
	for(i = 0; i < strlen(aMember.passwd); i++) {
		printf("%c", '*');
	}
	printf("\n");
	printf("NO: %d\n", aMember.no);
	
	return 0;	
}
