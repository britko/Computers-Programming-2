#include <stdio.h>

int main(void){
	
	double x, y, result;
	char op;
	char yesno = 'Y';
	
	
	
	while (yesno == 'Y' || yesno == 'y') {		
		
		printf("������ �Է��Ͻÿ�: ");
		scanf("%lf %c %lf", &x, &op, &y);
		
		switch(op) {
		case '+':
			result = x + y;
			printf("%f + %f = ", x, y);
			break;
		case '-':
			result = x - y;
			printf("%f - %f = ",x, y);
			break;
		case '*':
			result = x * y;
			printf("%f * %f = ", x, y);
			break;
		case '/':
			result = x / y;
			printf("%lf / %lf = ", x, y);
			break;
		}
		
		printf("%f\n", result);
		
		
		printf("��� �Ͻðڽ��ϱ�(Y/N)? ");
		scanf(" %c", &yesno);
		
	}
	
	return 0;
}
