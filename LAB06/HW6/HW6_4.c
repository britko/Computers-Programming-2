#include <stdio.h>

int main(void) {
	
	int i, n;
	
	for (i = 65; i < 91; i++) {
		printf("%c ", i);
		if (i % 5 == 4) {
			printf("\n");
		}
	}
	
	return 0;
}
