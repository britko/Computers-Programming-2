#include <stdio.h>

int main(void) {
	
	int year;
	
	printf("Enter the year: ");
	scanf_s("%d", &year);
	
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ) {
		printf("%d 년은 윤년이다.\n", year);
		printf("2월이 29일이다.");
	}
	else {
		printf("%d 년은 윤년이 아니다.\n", year);
		printf("2월이 28일이다.") ;
	}
	
	return 0;
}
