/***************************************************************************
LAB3_3 고영국 201520049 정보통신전자공학부15
****************************************************************************/

#include <stdio.h>

int main(void) {

	char gender;
	int age;
	double height;

	printf("Enter your gender: ");
	scanf_s("%c", &gender, sizeof(gender));

	printf("Enter your age: ");
	scanf_s("%d", &age);

	printf("Enter your height: ");
	scanf_s("%lf", &height);

	printf("성별\t\t나이\t\t키\n");
	printf("%c\t\t%d\t\t%f\n", gender, age, height);


	return 0;
}
