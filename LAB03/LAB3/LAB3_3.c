/***************************************************************************
LAB3_3 ���� 201520049 ����������ڰ��к�15
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

	printf("����\t\t����\t\tŰ\n");
	printf("%c\t\t%d\t\t%f\n", gender, age, height);


	return 0;
}
