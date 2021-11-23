#include <stdio.h>
#include <string.h>

int main() {
	
	int i, len;
	char str[] = "2021 cprogramming";
	
	len = strlen(str);
	
	str[4] = '\0';
	
	printf("%d\n%s", len, str);
	
	return 0;
}
