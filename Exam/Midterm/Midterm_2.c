#include <stdio.h>

int main() {

	int n;
	
	printf("Enter the month: ");
	scanf("%d", &n);
	
	switch (n){
		case 1:
			printf("The last day: 31");
			break;
		case 2:
			printf("The last day: 28");
			break;
		case 3:
			printf("The last day: 31");
			break;
		case 4:
			printf("The last day: 30");
			break;
		case 5:
			printf("The last day: 31");
			break;
		case 6:
			printf("The last day: 30");
			break;
		case 7:
			printf("The last day: 31");
			break;
		case 8:
			printf("The last day: 31");
			break;
		case 9:
			printf("The last day: 30");
			break;
		case 10:
			printf("The last day: 31");
			break;
		case 11:
			printf("The last day: 30");
			break;
		case 12:
			printf("The last day: 31");
			break;
		default:
			printf("invalid month");
	}
	
	return 0;
}
