#include <stdio.h>

int main(void) {
	
	char oper;
	int f_op, s_op, result, ans;
	
	printf("Enter an operator: ");
	scanf_s("%c", &oper);
	printf("Enter the first operand: ");
	scanf_s("%d", &f_op);
	printf("Enter the second operand: ");
	scanf_s("%d", &s_op);
	
	switch(oper) {
		case '+':
			result = f_op + s_op;
			printf("%d + %d = ", f_op, s_op);
			break;
		case '-':
			result = f_op - s_op;
			printf("%d - %d = ", f_op, s_op);
			break;
		case '*':
			result = f_op * s_op;
			printf("%d * %d = ", f_op, s_op);
			break;
		case '/':
			result = f_op / s_op;
			printf("%d / %d = ", f_op, s_op);
			break;
	}
	
	scanf_s("%d", &ans);
	
	if(result == ans)
		printf("Right answer\n");
	else
		printf("%d is the right answer\n", result);
	
	return 0;
}
