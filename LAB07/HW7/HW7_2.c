#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	
	srand(time(NULL));
	
	int guess = rand() % 99 + 1;
	int cnt = 1;
	int answer;
	
	do {
		
		printf("������ ������ ���ÿ�: ");
		scanf("%d", &answer);
		
		if (guess == answer){
			printf("�����մϴ�. %d������ ����׿�.\n", cnt);
			break;
		}
		else if (guess > answer) {
			printf("�� ū ���� ���غ�\n");
		}
		else {
			printf("�� ���� ���� ���غ�\n");
		}
		
		cnt++;

	} while (guess != answer);
	
	return 0;
}
