/***************************************************************************
LAB3_2 ���� 201520049 ����������ڰ��к�15
****************************************************************************/


#include <stdio.h>

int main(void) {

	int total_min, h, m;

	printf("Enter the total minutes : ");
	scanf_s("%d", &total_min);

	h = total_min / 60;
	m = total_min % 60;

	printf("%d minutes is %02d:%02d\n", total_min, h, m);

	return 0;
}
