#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct login_info {
	char id[20];
	char passwd[20];
	int no;
} login;

void make_lower(login *member);
void print_login(const login *member);

int main() {
	
	login aMember;
	
	printf("ID? ");
	scanf("%s", aMember.id);
	printf("Password? ");
	scanf("%s", aMember.passwd);
	printf("No? ");
	scanf("%d", &aMember.no);
		
	make_lower(&aMember);
	print_login(&aMember);
	
	return 0;	
}

void make_lower(login *member) {
	
	int i;
	
	for(i = 0; i < strlen(member->id); i++) {
		if(isupper(member->id[i])) {
			member->id[i] = tolower(member->id[i]);
		}
	}
	for(i = 0; i < strlen(member->passwd); i++) {
		if(isupper(member->passwd[i])) {
			member->passwd[i] = tolower(member->passwd[i]);
		}
	}
	
	
}

void print_login(const login *member) {
	
	int i;
	
	printf("\nID: %s\n", member->id);
	printf("PW: ");
	for(i = 0; i < strlen(member->passwd); i++) {
		printf("%c", '*');
	}
	printf("\n");
	printf("NO: %d\n", member->no);
}
