#include <stdio.h>

void get_rect_info(int w, int h, int *area, int *circumference);

int main() {
	int w, h, area, circumference;
	
	printf("���α���?");
	scanf("%d", &w);
	printf("���α���?");
	scanf("%d", &h);
	
	get_rect_info(w, h, &area, &circumference);
	
	printf("����: %d, �ѷ�: %d\n", area, circumference);
	
	return 0;
}

void get_rect_info(int w, int h, int *area, int *circumference) {
	*area = w * h;
	*circumference = 2 * w + 2 * h;	
}
