#include <stdio.h>

int main() {
	
	int i, sum = 0;
	char str[] = "2021 cprogramming";

	for(i = 0; str[i] != '\0'; i++) {
		if(str[i] >= '0' && str[i] <= '9') {
			sum += str[i] - 48;
		}
	}
	
	printf("���� ��: %d / ���� ��: %d\n", i, sum);
	
	return 0;
}
