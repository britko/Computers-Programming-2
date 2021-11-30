#include <stdio.h>

int main(void){
	
	int i = 1;
	int num;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	
	do {
		
		i *= 10;
		
		printf("%d ", num % i / (i / 10));

	} while(num % i != num);
	
	return 0;
}
