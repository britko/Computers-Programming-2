#include <stdio.h>

void multiples(int num, int count);
int main(void){
	
	int num;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	while(num > 0){
		multiples(num, 10);
		printf("Enter the number: ");
		scanf("%d", &num);
	}
	return 0;
}

void multiples(int num, int count){
	
	int i;
	
	for(i = 1; i <= count; i++){
		printf("%d ", num * i);
	}
	printf("\n");
}
