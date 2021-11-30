#include <stdio.h>

int main(void){
	
	int i;
	
	printf("Á¤¼ö? ");
	scanf("%d", &i);
	
	do {
		
		printf("%d ", i);
		i /= 2;
		
	} while(i > 0);
	
	return 0;
}
