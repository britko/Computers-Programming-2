#include <stdio.h>
#include <stdlib.h>

void printData();
int totalData();

int main(void) {
	int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	printf("�迭 ���� ���:");
	printData(data);
	printf("\n�迭������ �� = %d \n", totalData(data));
	
	return 0;
}
	
void printData(int *pi) {
	int i;
	
	for(i = 0; i < 10; i++) {
		printf("%3d", *pi + i);
	}
}

int totalData(int *pi){
	int i, sum = 0;
	
	for(i = 0; i < 10; i++) {
		sum += *pi + i;
	}
	return sum;
}
