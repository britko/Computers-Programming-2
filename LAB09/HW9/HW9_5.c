#include <stdio.h>

int acculmulator(char op, int n, int prevResult);

int main(void){
	
	int result = 0;
	int n;
	char op;
	
	printf("%d ", result);
	
	do {
		
		scanf(" %c %d", &op, &n);
		
		if(op == '0' && n == 0){
			break;
		}
		
		result = acculmulator(op, n, result);
		
		printf("= %d ", result);
		
	} while(1);
}

int acculmulator(char op, int n, int prevResult){
	
	switch(op) {
		case '+':
			return prevResult + n;
			
		case '-':
			return prevResult - n;
			
		case '*':
			return prevResult * n;
			
		case '/':
			return prevResult / n;
		}
}
