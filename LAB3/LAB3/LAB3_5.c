/***************************************************************************
LAB3_5 ���� 201520049 ����������ڰ��к�15
****************************************************************************/

#include <stdio.h>

int main(void) {

	char ch;
	int value;

	printf("Enter an alphabet: ");
	scanf_s("%c", &ch, sizeof(ch));

	printf("%c %d\n", ch, ch);

	printf("Enter a ascii value: ");
	scanf_s("%d", &value);

	printf("%d %c\n", value, value);

	return 0;
}
