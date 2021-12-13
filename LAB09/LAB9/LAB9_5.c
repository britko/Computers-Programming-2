#include <stdio.h>

int is_leap_year(int year);

int main(void){
	
	int i;
	int cnt = 0;
	
	for (i = 2000; i <= 2100; i++) {
		
		if(is_leap_year(i) == 1){
			printf("%d ", i);
			cnt++;
			if(cnt % 10 == 0){
				printf("\n");
			}
		}
		
	}
}

int is_leap_year(int year){
	
	if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)){
		return 1;
	}
	else{
		return 0;
	}
}
