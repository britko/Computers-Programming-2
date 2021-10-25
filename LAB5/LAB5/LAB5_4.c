#include <stdio.h>

int main(void) {
	
	char ch;
	
	printf("Enter the character: ");
	scanf_s("%c", &ch);
	
	if(ch == 'M' || ch == 'm') {
		printf("MBC 이다.\n");
	}
	else if(ch == 'K' || ch == 'k') {
		printf("KBS 이다.\n");
	}
	else if(ch == 'E' || ch == 'e') {
		printf("EBS 이다.\n");
	}
	
	return 0;
}
