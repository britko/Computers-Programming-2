﻿#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int n, ran;
	int cnt = 0;
	
	
	srand(time(NULL));
	ran = rand() % 89 + 11;

	
	while (1) {
		
		printf("��÷��ȣ�� �����: ");
		scanf("%d", &n);
		printf("-----------------------\n"); 
		
		if (n % 10 == ran % 10 || n % 10 == ran / 10 || n / 10 == ran % 10 || n / 10 == ran / 10) {
				printf("��÷��ȣ�� %d�ε�, �� �ڸ��� ���缭 5���� �������ϴ�.\n", ran);
				break; 
		}
		
		if (n == ran) {
			printf("��÷��ȣ�� %d�̸�, 20���� �����մϴ�.\n", ran);
			break;
		}
		else if (n < ran) {
			printf("���̳�!! �� ū ���� ���غ�����\n");
		}
		else if (n > ran) {
			printf("���̳�!! �� ���� ���� ���غ�����\n");
		}
		
		cnt++;
		if (cnt == 5) break;
	}
	
	return 0;
}
