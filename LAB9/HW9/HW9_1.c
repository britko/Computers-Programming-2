#include <stdio.h>

void print5Chars(char ch, int n);
int main(void){
	
	print5Chars('*', 5);
	print5Chars('@', 7);
	print5Chars('1', 10);
	 	
}

void print5Chars(char ch, int n){
	
	int i;
	
	for(i = 0; i < n; i++){
		printf("%c", ch);
	}
	printf("\n");
}
