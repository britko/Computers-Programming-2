#include <stdio.h>

int main(void) {
	
	char ch;
	
	printf("Enter the character: ");
	scanf_s("%c", &ch);
	
	if(ch == 'M' || ch == 'm') {
		printf("MBC �̴�.\n");
	}
	else if(ch == 'K' || ch == 'k') {
		printf("KBS �̴�.\n");
	}
	else if(ch == 'E' || ch == 'e') {
		printf("EBS �̴�.\n");
	}
	
	return 0;
}
