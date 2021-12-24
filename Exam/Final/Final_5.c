#include <stdio.h>

typedef struct student_info {
	char name[20];
	int mid;
	int final;
	char ch;
} student; 

int main(void) {
	
	student std[100];
	int i, n, cnt = 0;
	
	while(1) {
		printf("메뉴 선택(1:입력, -1: 종료): ");
		scanf("%d", &n);
		
		if(n == 1) {
			scanf("%s %d %d", std[i].name, &std[i].mid, &std[i].final);
			std[i].ch = std[i].mid + std[i].final > 100 ? 'A' : 'F';
			cnt ++;
		}
		else break;
		i++;		
	}
	
	printf("\n--- 학생 정보 출력 ---\n");
	
	for(i = 0; i < cnt; i++) {
		printf("%s\t%d\t%d\t%c\n", std[i].name, std[i].mid, std[i].final, std[i].ch);
	} 

	return 0;
}
