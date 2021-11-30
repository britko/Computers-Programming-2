/***************************************************************************
LAB3_5 고영국 201520049 정보통신전자공학부15
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
