#include <stdio.h>

void get_rect_info(int w, int h, int *area, int *circumference);

int main() {
	int w, h, area, circumference;
	
	printf("가로길이?");
	scanf("%d", &w);
	printf("세로길이?");
	scanf("%d", &h);
	
	get_rect_info(w, h, &area, &circumference);
	
	printf("넓이: %d, 둘레: %d\n", area, circumference);
	
	return 0;
}

void get_rect_info(int w, int h, int *area, int *circumference) {
	*area = w * h;
	*circumference = 2 * w + 2 * h;	
}
