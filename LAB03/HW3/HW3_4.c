/***************************************************************************
HW3_4 ���� 201520049 ����������ڰ��к�15
****************************************************************************/

#include <stdio.h>

int main(void) {

	char ch;

	printf("Enter an upper letter(A-Z) : ");
	scanf_s("%c", &ch, sizeof(ch));

	printf("Character given is %c(%d)\n", ch, ch);
	printf("The lower case letter is %c(%d)\n", ch + 32, ch + 32);
	printf("The next character is %c(%d)\n", ch + 1, ch + 1);

	return 0;
}
