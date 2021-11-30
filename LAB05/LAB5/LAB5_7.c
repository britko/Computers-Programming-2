#include <stdio.h>

int main(void) {
	
	char oper;
	int f_op, s_op;
	
	printf("Enter an operator: ");
	scanf_s("%c", &oper);
	printf("Enter the first operand: ");
	scanf_s("%d", &f_op);
	printf("Enter the second operand: ");
	scanf_s("%d", &s_op);
	
	switch(oper) {
		case '+':
			printf("%d + %d = %d\n", f_op, s_op, f_op + s_op);
			break;
		case '-':
			printf("%d - %d = %d\n", f_op, s_op, f_op - s_op);
			break;
		case '*':
			printf("%d * %d = %d\n", f_op, s_op, f_op * s_op);
			break;
		case '/':
			printf("%d / %d = %d\n", f_op, s_op, f_op / s_op);
			break;
	}
	
	return 0;
}
