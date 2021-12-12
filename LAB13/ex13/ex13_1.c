#include <stdio.h>
#include <ctype.h>

int main() {
	
	int i, sum = 0;
	char str[] = "2021 cprogramming";

	for(i = 0; str[i] != '\0'; i++) {
		if(isdigit(str[i])) {
			sum += str[i] - 48;
		}
	}
	
	printf("글자 수: %d / 숫자 합: %d\n", i, sum);
	
	return 0;
}
