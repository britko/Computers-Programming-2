#include <stdio.h>
#define MAX_SEATS 10

void print_seat(int seats[], int size) {
	int i;
	printf("------------------------------------\n");
	printf("���� �¼�: [ ");
	
	for (i = 0; i < MAX_SEATS; i++) {
		printf("%c ", seats[i]);
	}
		
	printf("]\n");
	printf("------------------------------------\n\n");
}

int main() {
	int seats[MAX_SEATS] = {0};
	int occupied = 0;
	int request = 0;
	int empty;
	int i;
	
	empty = 1;
	
	for (i = 0; i < MAX_SEATS; i++) {
		seats[i] = 'O';
	}
	
	while (1) {
		print_seat(seats, MAX_SEATS);
		
		printf("������ �¼���? ");
		scanf("%d", &request);
		
		if (occupied + request <= MAX_SEATS) {
			for (i = occupied; i < occupied + request; i++) {
				seats[i] = 'X';
			}
			occupied += request;
		}
		else {
			printf("���� �¼� ���� %d�̹Ƿ� %d�¼��� ������ �� �����ϴ�\n", MAX_SEATS - occupied, request);
		}
		
		if (occupied == MAX_SEATS) empty = 0;
		if (!empty) {
			print_seat(seats, MAX_SEATS);
			return 0;
		} 
	}

}
