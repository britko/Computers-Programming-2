#include <stdio.h>

int main(void) {
	
	int r, c, i, j;
	char ch;
	
	printf("Enter the number of rows and columns: ");
	scanf_s("%d %d", &r, &c);
	printf("Enter the character: ");
	scanf_s(" %c", &ch);
	
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%c", ch);
		}
		printf("\n");
	}
	
	return 0;
}
